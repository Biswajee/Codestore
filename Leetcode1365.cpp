class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> v = nums;
        vector<int> res;
        map<int, int> mp;
        sort(v.begin(),v.end());
        for(int i=0; i<v.size(); i++) {
            if(!mp[v[i]]) mp[v[i]] = i+1;
        }
        for(int i=0; i<nums.size(); i++) {
            res.push_back(mp[nums[i]]-1);
        }
        return res;
    }
};