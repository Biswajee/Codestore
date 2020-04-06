// TLE Code
// class Solution {
// public:
//     string sortstring(string str) {
//         sort(str.begin(), str.end());
//         return str;
//     }
//     vector<vector<string>> groupAnagrams(vector<string>& strs) {
//         set<string> st;
//         string y;
//         for(string s :strs) {
//             st.emplace(sortstring(s));
//         }
//         vector<vector<string>> vs;
//         for(auto i:st) {
//             vector<string> temp;
//             for(auto j:strs) {
//                 if(i.compare(sortstring(j))==0) {
//                     temp.push_back(j);
//                 }
//             }
//             vs.push_back(temp);
//             temp.clear();
//         }
//         return vs;
//     }
// };





// #include <bits\stdc++.h>
// using namespace std;
// class Solution {
// public:
//     string sortstring(string str) {
//         sort(str.begin(), str.end());
//         return str;
//     }
//     vector<vector<string>> groupAnagrams(vector<string>& strs) {
//         unordered_map<string,int> st;
//         string y;
//         for(string s :strs) {
//             st[sortstring(s)]++;
//         }
//         vector<vector<string>> vs;
//         for(auto i:st) {
//             vector<string> temp;
//             for(auto j:strs) {
//                 if(i.first.compare(sortstring(j))==0) {
//                     temp.push_back(j);
//                 }
//             }
//             vs.push_back(temp);
//             temp.clear();
//         }
//         return vs;
//     }
// };







// class Solution {
// public:
//     int compstring(string parent, string child) {
//         unordered_map<char, int> p, c;
//         for(auto x : parent) p[x]++;
//         for(auto y : child) c[y]++;
//         if(p==c) return 0;
//         return 1;
//     }
//     string sortstring(string str) {
//         sort(str.begin(), str.end());
//         return str;
//     }
//     map<char, int> mapify(string str) {
//         map<char, int> mp;
//         for(auto s: str) mp[s]++;
//         return mp;
//     }
//     vector<vector<string>> groupAnagrams(vector<string>& strs) {
//         map<map<char,int>,int> st;
//         string y;
//         for(string s :strs) {
//             st[mapify(s)]++;
//         }
//         vector<vector<string>> vs;
//         for(auto i:st) {
//             vector<string> temp;
//             for(auto j:strs) {
//                 if(i.first==mapify(j)) {
//                     temp.push_back(j);
//                 }
//             }
//             vs.push_back(temp);
//             temp.clear();
//         }
//         return vs;
//     }
// };



// Really fucked up solution but accepted
#include<bits\stdc++.h>
using namespace std;

class Solution {
public:
    string sortstring(string str) {
        sort(str.begin(), str.end());
        return str;
    }
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> vs;
        map<string, vector<string>> mp;
        for(auto s : strs) {
            mp[sortstring(s)].push_back(s);
        }
        for(auto x:mp) {
            vector<string> temp;
            vs.push_back(x.second);
        }
        return vs;
    }
};