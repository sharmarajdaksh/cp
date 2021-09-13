#include <bits/stdc++.h>
using namespace std;

class OrderedStream
{
  int currIndex = 0;
  int maxIndex;
  vector<pair<int, string>> *stream;

public:
  OrderedStream(int n)
  {
    stream = new vector<pair<int, string>>(n, pair<int, string>(-1, ""));
    maxIndex = n - 1;
  }

  ~OrderedStream()
  {
    delete stream;
  }

  vector<string> insert(int id, string value)
  {
    vector<string> chunkVector;

    (*stream)[id - 1] = pair<int, string>(id, value);

    for (int i = currIndex; i <= maxIndex; i++)
    {
      pair<int, string> streamChunk = (*stream)[i];
      if (streamChunk.first != -1)
      {
        chunkVector.push_back(streamChunk.second);
        currIndex++;
      }
      else
      {
        break;
      }
    }

    return chunkVector;
  }
};

int main()
{
  OrderedStream *os = new OrderedStream(5);
  assert(os->insert(3, "ccccc") == vector<string>{});
  assert(os->insert(1, "aaaaa") == vector<string>{"aaaaa"});
  vector<string> v1{"bbbbb", "ccccc"};
  assert(os->insert(2, "bbbbb") == v1);
  assert(os->insert(5, "eeeee") == vector<string>{});
  vector<string> v2{"ddddd", "eeeee"};
  assert(os->insert(4, "ddddd") == v2);

  delete os;
}
