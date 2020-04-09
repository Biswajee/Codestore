class Solution {
public:
    bool backspaceCompare(string S, string T) {
        stack<char> str1,str2;
        for(char c : S) {
            if(c!='#') str1.push(c);
            else {
                if(!str1.empty()) str1.pop();
            }
        }
        
        for(char c : T) {
            if(c!='#') str2.push(c);
            else {
                if(!str2.empty()) str2.pop();
            }
        }
        if(str1==str2) return true; 
        return false;
    }
};