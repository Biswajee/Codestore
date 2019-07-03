// https://leetcode.com/problems/permutations-ii/

class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
       set<vector<int>> s;
       sort(nums.begin(), nums.end());
       do {
           s.insert(nums);
       } while(next_permutation(nums.begin(), nums.end()));
       vector<vector<int>> v(s.size());
       copy(s.begin(), s.end(), v.begin());
       return v;
    }
};