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

// Binary search solution...
class Solution {
public:
    int bins(vector<int> v, int l, int r, int key) {
        
        while(l<=r) {
            int mid=(l+r)/2;
            // cout << mid << endl;
            if(v[mid]==key) return mid;
            else if(v[mid]>key) r=mid-1;
            else if(v[mid]<key) l=mid+1;
        }
        return -1;
    }
    
    int search(vector<int>& nums, int target) {
        int res;
        if(nums.size()==0) return -1;
        auto p = min_element(nums.begin(), nums.end());
        int idx = p-nums.begin();
        if(*p==target) return idx;
        res = bins(nums, 0, idx-1, target);
        if(res!=-1) return res;
        res = bins(nums, idx, nums.size()-1, target);
        return res;
    }
};