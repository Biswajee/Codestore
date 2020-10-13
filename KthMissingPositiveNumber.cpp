class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        unordered_map<int,int> mp;
        int sz = arr.size();
        for(int i=0; i<sz; i++) {
            mp[arr[i]]++;
        }
        int cnt = 0;
        for(int i=1; i<arr[sz-1]; i++) {
            if(mp[i]!=1) cnt++;
            if(cnt==k) return i;
        }
        return arr[sz-1]+k-cnt;
    }
};