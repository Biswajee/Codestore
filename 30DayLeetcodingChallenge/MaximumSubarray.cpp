class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max_so_far = 0;
        int max_ending_here = 0;
        int flag = 0;
        if(nums.size()==1) return nums[0];
        
        
        for(int x : nums) {
            max_ending_here+=x;
            if(max_ending_here < 0) { max_ending_here = 0; flag++; }
            if(max_so_far < max_ending_here) max_so_far = max_ending_here;
        }
        if(flag == nums.size()) {
            return *max_element(nums.begin(), nums.end());
        }
        return max_so_far;
    }
};