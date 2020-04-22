#include <bits\stdc++.h>
#include <vector>
using namespace std;

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> prevSum;
        int res = 0;
        int currsum = 0;
        for(int i=0;i<nums.size(); i++) {
            currsum+=nums[i];
            if(currsum == k) res++;
            if(prevSum.find(currsum - k)!=prevSum.end()) res+=(prevSum[currsum - k]);
            prevSum[currsum]++;
        }
        return res;
    }
};

int main() {
    int n,k;
    Solution s;
    cin >> n >> k;
    vector<int> v(n);
    for(int i=0; i<n; i++) cin >> v[i];
    int r = s.subarraySum(v,k);
    cout << r << endl;
    return 0;
}