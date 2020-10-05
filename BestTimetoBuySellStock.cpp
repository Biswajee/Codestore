#include <bits\stdc++.h>
#include <vector>
#include <map>
using namespace std;

int maxProfit(vector<int>& prices) {
    map<int, vector<int>> mp;
    for(int i=0; i<prices.size(); i++) {
        vector<int> temp;
        for(int j=i; j<prices.size(); j++) {
            if(prices[j]>prices[i]) temp.push_back(prices[j]-prices[i]);
            mp[i]=temp;
        }
    }
    int max_profit=0;
    for(auto x : mp) {
        for(auto y : x.second) {
            if(y>max_profit) max_profit=y;
        }
    }
    return max_profit;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr;
    for(int i=0; i<n; i++) cin >> arr[i];
    int res = maxProfit(arr);
    cout << res << endl;
    return 0;
}