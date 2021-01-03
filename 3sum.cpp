// O(n^2) but with jugaad
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        set<vector<int>> st;
        int n = nums.size();
        int sum = 0, i, j, k, target;
        if(n == 0) return {};
        
        sort(nums.begin(), nums.end());
        unordered_map<string, bool> unique_targets;
        
        for(i=0; i<n-2; i++) {
            target = 0-nums[i];
            j = i+1, k = n-1, sum = 0;
            if(i==0 || nums[i]!=nums[i-1]) {
                while(j<k) {
                    sum = nums[j] + nums[k];
                    // how close result is to target value...
                    if(sum > target) k--;
                    else if(sum < target) j++;

                    else {
                        st.insert({nums[i],nums[j],nums[k]});
                        j++; 
                        k--;
                    }
                }
            }
        }
        vector<vector<int>>res(st.begin(), st.end());
        return res;
    }
};

// O(n^2) Solution
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        vector<vector<int>>res;
        int n = nums.size();
        int sum = 0, i, j, k, target;
        if(n == 0) return res;
        
        unordered_map<string, bool> unique_targets;
        
        sort(nums.begin(), nums.end());
        
        for(i=0; i<n-2; i++) {
            target = 0-nums[i];
            j = i+1, k = n-1, sum = 0;
            while(j<k) {
                sum = nums[j] + nums[k];

                if(sum == target) { 
                    string buffer = to_string(nums[i])+to_string(nums[j])+to_string(nums[k]);
                    if(!unique_targets[buffer]) {
                        res.push_back({nums[i],nums[j],nums[k]});
                        unique_targets[buffer] = true;
                    }
                }
                // how close result is to target value...
                if(sum > target) k--;
                if(sum <= target) j++;
            }
        }
        
        return res;
    }
};
