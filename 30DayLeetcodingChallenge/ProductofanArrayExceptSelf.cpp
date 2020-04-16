// TLE LOL
class Solution {
public:
    vector<int> rotatebyone(vector<int> v) {
        int temp=v[0], i;
        for(i=0; i<v.size()-1; i++) 
            v[i]=v[i+1];
        v[i]=temp; // last val
        return v;
    }
    int product(vector<int> v) {
        int prod=1;
        for(int i=1; i<v.size(); i++) prod*=v[i];
        return prod;
    }
    vector<int> productExceptSelf(vector<int>& nums) {
        int i=0, n=nums.size();
        vector<int> result;
        do {
            int nos = product(nums);
            // cout << nos << " ";
            result.push_back(nos);
            nums = rotatebyone(nums);
            i++;
        } while(i<n);
        return result;
    }
};

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> res;
        for(int i=0; i<nums.size(); i++) { // head
            int prod = 1;
            for(int j=0; j<nums.size(); j++) { // product pointer
                if(i!=j) prod*=nums[j];
            }
            res.push_back(prod);
        }
        return res;
    }
};

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> res;
        map<pair<int, int>, int> mp;
        for(int i=0; i<nums.size(); i++) { // head
            int prod = 1;
            for(int j=0; j<nums.size(); j++) { // product pointer
                if(i!=j) {
                    if(!mp[{prod, nums[j]}]) prod*=nums[j];
                    else prod*=mp[{prod, nums[j]}];
                }
            }
            res.push_back(prod);
        }
        return res;
    }
};



// Accepted
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> res(nums.size());
        for(int i=0; i<nums.size(); i++) res[i]=1;
        int i=0, temp1=1, temp2=1;
        for(; i<nums.size(); i++) {
            res[i]*=temp1;
            temp1*=nums[i];
        }
        i--;
        for(; i>=0; i--) { 
            res[i]*=temp2;
            temp2*=nums[i];
        }
        return res;
    }
};