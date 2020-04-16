#include <bits/stdc++.h>
#include <vector>
#include <algorithm>

using namespace std;
// LOL
// class Solution {
// public:
//     bool checkValidString(string s) {
//         stack<char> stk;
//         vector<char> v,w;
//         for(auto x : s) {
//             if(x=='(') stk.push(x);
//             else if(x=='*') v.push_back(x);
//             else {
//                 if(!stk.empty()) stk.pop();
//                 else w.push_back(x);
//             }
//         }
//         if(v.size() < (w.size()+stk.size())) return false;
//         // if(stk.empty()==false) return false;
//         return true;
//     }
// };


// "(*)"    true
// "(*))"   true
// "*())"   false

// Highly efficient #WeLoveYouRosé
class Solution {
public:
    bool checkValidString(string s) {
        vector<char> v,w;
        for(auto x : s) {
            if(x=='(' || x =='*') v.push_back(x);
            else {
                // remove first occurence of ( from end else just pop last element
                reverse(v.begin(), v.end());
                vector<char>::iterator it=find(v.begin(), v.end(), '(');
                if(it != v.end()) {
                    v.erase(it);
                    reverse(v.begin(), v.end());
                }
                else {
                    reverse(v.begin(), v.end());
                    if(!v.empty()) v.pop_back();
                    else return false;
                }
            }
        }
        for(auto r : v) {
            if(r=='(') w.push_back(r);
            else {
                if(!w.empty()) w.pop_back();
            }
        }
        
        int stars = 0;
        for(auto x : w) {
            if(x=='*') stars++;
        }
        // for(char c : w) cout << c << " ";
        
        if(w.size()==stars) return true;
        return false;
    }
};

int main() {
    string s;
    Solution sol;
    cin >> s;
    bool r = sol.checkValidString(s);
    cout << r << endl;
    return 0;
}