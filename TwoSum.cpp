#include<bits/stdc++.h>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int required = 0;
        vector<int>::iterator it;
        vector<int> arr;
        for(auto i = nums.begin(); i!=nums.end(); i++) {
            required = target - *i;
            it = find(nums.begin(), nums.end(), required);
            if(it != nums.end() && it != i) {
                arr.push_back(i - nums.begin());
                arr.push_back(it - nums.begin());
                return arr;
            }
        }
        return arr;
    }
};