class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int, int> mp;
        for(int x : nums) {
            mp[x]++;
        }
        int good_pairs = 0;
        for(auto a : mp) {
            good_pairs+=((a.second*(a.second-1))/2);
        }
        return good_pairs;
    }
};