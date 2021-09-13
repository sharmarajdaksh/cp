#include<bits/stdc++.h>
using namespace std;


class Solution {
    int getHours(string t) {
        return ((t[0] - '0') * 10 + (t[1] - '0'));
    }

    int getMinutes(string t) {
        return ((t[3] - '0') * 10 + (t[4] - '0'));
    }

    bool areWithinThanAnHour(string a, string b) {
        int m1 = getMinutes(a);
        int m2 = getMinutes(b);
        int h1 = getHours(a);
        int h2 = getHours(b);

        int hd = abs(h1 - h2);

        if (hd > 1) return false;
        if (hd == 0) return true;

        if (h1 < h2) {
            return m1 >= m2;
        } else {
            return m1 <= m2;
        }
    }

public:
    vector<string> alertNames(vector<string>& keyName, vector<string>& keyTime) {
        int n = keyName.size();
        unordered_map<string, vector<string>> times;
        vector<string> ans;

        for (int i = 0; i < n; i++) {
            string kn = keyName[i];
            string kt = keyTime[i];

            if (times.find(kn) != times.end()) {
                times[kn].push_back(kt);
            } else {
                times[kn] = {kt};
            }
        }

        for (auto& m: times) {
            vector<string> t = m.second;       
            sort(t.begin(), t.end());
            for (int i = 0; i < t.size() - 2; i++) {
                if (areWithinThanAnHour(t[i], t[i + 2])) {
                    ans.push_back(m.first);
                    break;
                }
            }
        }
     
        sort(ans.begin(), ans.end());   
        return ans;         
    }
};


int main() {

    vector<string> n = {
        "a","a","a","a","b","b","b","b","b","b","c","c","c","c"
    };
    vector<string> t = {
        "01:35","08:43","20:49","00:01","17:44","02:50","18:48","22:27","14:12","18:00","12:38","20:40","03:59","22:24"
    };

    vector<string> a = (new Solution())->alertNames(n, t);
    for (string s: a) {
        cout << s << endl;
    }
}
