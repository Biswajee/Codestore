class Solution {
public:
    bool isValid(string S) {
        vector<char> v;
        int sz;
        for(char a : S) {
            v.push_back(a);
            sz = v.size();
            if(sz>=3 && v[sz-3]=='a' && v[sz-2]=='b' && v[sz-1]=='c') {
                v.pop_back();
                v.pop_back();
                v.pop_back();
            }
        }
        
        while(!v.empty()) {
            sz = v.size();
            if(sz>=3 && v[sz-3]=='a' && v[sz-2]=='b' && v[sz-1]=='c') {
                v.pop_back();
                v.pop_back();
                v.pop_back();
            } else break;
        }
        
        if(!v.empty()) return false;
        return true;
    }
};