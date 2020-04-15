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