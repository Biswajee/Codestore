class Solution {
public:
    bool search(vector<int>& nums, int target) {
        for(int i=0, j=nums.size()-1; i<nums.size() && j>=0; i++,j--) {
            if(nums[i]==target) return true;
            if(nums[j]==target) return true;
        }
        return false;
    }
};

// class Solution {
// public:
//     bool search(vector<int>& nums, int target) {
//         bool res;
//         if(nums.size()==0) return false;
//         auto p = min_element(nums.begin(), nums.end());
//         int idx = p - nums.begin();
//         cout << idx << endl;
//         if(*p==target) return true;
//         res = binary_search(nums.begin(), nums.begin()+idx, target);
//         if(res==true) return true;
//         res = binary_search(nums.begin()+idx, nums.end(), target);
//         return res;
//     }
// };