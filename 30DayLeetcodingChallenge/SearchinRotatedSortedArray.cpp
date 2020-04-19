class Solution {
public:
    int search(vector<int>& nums, int target) {
        for(int i=0,j=nums.size()-1; i<nums.size() && j>=0; i++,j--) {
            if(nums[i]==target) return i;
            if(nums[j]==target) return j;
        }
        return -1;
    }
};