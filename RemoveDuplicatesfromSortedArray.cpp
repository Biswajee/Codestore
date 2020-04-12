class Solution {
public:
    void swap(int &a, int &b) {
        int *temp;
        temp = &a;
        a = b;
        b = *temp;
    }
    
    int removeDuplicates(vector<int>& nums) {
        if(!nums.size()) return 0;
        if(nums.size()==1) return 1;
        sort(nums.begin(), nums.end());
        int j=1;
        for(int i=0;i<nums.size()-1; i++) {
            if(nums[i]!=nums[i+1]) {
                nums[j]=nums[i+1];
                j++;
            }
        }
        return j;
    }
};