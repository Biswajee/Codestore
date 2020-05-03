class Solution {
public:
    unordered_map<char,int> mp;
    bool canConstruct(string ransomNote, string magazine) {
        for(char c : magazine) mp[c]++;
        for(char c : ransomNote) {
            if(!mp[c] || mp[c]<=0) return false;
            if(mp[c]) mp[c]--;
        }
        return true;
    }
};