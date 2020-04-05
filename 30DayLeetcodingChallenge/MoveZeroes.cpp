class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int len = nums.size();
        int count = 0;
        for(int i=0; i<len; i++) {
            if(*(nums.begin()+i) == 0) {
                nums.erase(nums.begin()+i);
                count++;
                i--;
                len--;
            }            
        }
        for(int i=0; i<count; i++) nums.push_back(0);
    }
};

// Fast 12ms
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i=0,j=0;
        for(i=0; i<nums.size();i++) {
            if(nums[i]!=0) {
                nums[j]=nums[i];
                j++;
            }
        }
        for(i=j; i<nums.size(); i++) nums[i]=0;
    }
};