class Solution {
public:
  int countMatches(vector<vector<string>>& items, string rulekey, string rulevalue) {
    int idx;
    if (rulekey == "type") {
      idx = 0;
    } else if (rulekey == "color") {
      idx = 1;
    } else {
      idx = 2;
    }
  
    int count = 0;
    for(vector<string>& item: items) {
      if (item[idx] == rulevalue) count++;
    }

    return count;
  }
};

