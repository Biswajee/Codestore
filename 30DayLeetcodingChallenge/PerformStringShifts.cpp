#include <bits/stdc++.h>
#include <algorithm>
#include <vector>
#include <map>

using namespace std;

class Solution {
public:
    string stringShift(string s, vector<vector<int>>& shift) {
        pair<int, int> fshift;
        map<int, int> mp;
        string str;
        for(int i=0; i<shift.size(); i++) {
                mp[shift[i][0]]+=shift[i][1];
        }
        if(mp[0]>mp[1]) fshift = make_pair(0,(mp[0]-mp[1])%shift.size()); // left > right
        else fshift = make_pair(1,(mp[1]-mp[0])%shift.size());            // right > left

        cout << fshift.first << " " << fshift.second << endl;

        if(fshift.first==0) {
            // cout << "left" << endl;
            str = s.substr(fshift.second, s.length());
            str.append(s.substr(0, fshift.second));
        } else {
            // cout << "right" << endl;
            str = s.substr(s.length()-fshift.second, s.length());
            str.append(s.substr(0, s.length()-fshift.second));
        }
        // cout << str << endl;
        return str;
    }
};

int main() {
    string s;
    Solution sol;
    cin >> s;
    vector<vector<int>> shit = {{0,1},{1,2}};
    string r = sol.stringShift(s,shit);
    cout << r << endl;
    return 0;
}