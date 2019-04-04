#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool validChar(char c){
        return c>='0' && c<='9';
    }
    
    int myAtoi(string str) {
        // remove trailing space
        while(*str.begin()==' ')
            str.erase(str.begin());
        if(str.empty()) return 0;
        char st = str[0];
        if(!(st=='-' || st=='+' || st>='0' && st<='9')) return 0;
        // cases
        int curr = 0;
        int sign = 1;
        if(st=='-'){
            sign = -1;
            curr += 1;
        }
        else if(st=='+'){
            sign = 1;
            curr += 1;
        }
        // now we have numbers start from here
        string res = "";
        while(curr < str.size() && validChar(str[curr])){
            res.push_back(str[curr]);
            curr++;
        }
        if(res=="") return 0;
        long long int ans = 0;
        int k=0;
        while(k<res.size()){
            ans = ans*10+(res[k]-'0');
            if(sign*ans>INT_MAX) return INT_MAX;
            else if(sign*ans<INT_MIN) return INT_MIN;
            k++;
        }
        return sign*ans;
    }
};