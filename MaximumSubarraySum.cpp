#include <bits/stdc++.h>
#include <algorithm>
#include <vector>
#define BLACKPINK ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int
using namespace std;

int subArraySum(vector<ll> arr, int n, int m) {
    int result = 0, i = 0;
    for (auto x: arr) {
        result += x * (i + 1) * (n - i);
        cout << result%m << " ";
    }
    cout << endl;
    return result;
}

ll printSubsequence(vector<ll> arr, int n, int m) {
    
    ll sum = 0, i=0;
    vector<ll> res;
    for(auto x: arr) {
        sum+=arr[i++];
        res.push_back(sum%m);
    }
    // for(auto x: res) cout << x << " ";
    // cout << endl;
    ll maxx  = *max_element(res.begin(), res.end());
    ll minn = *min_element(res.begin(), res.end());
    return maxx;
    // return max(maxx, m-minn);
}

long maximumSum(vector<ll> a, long m) {
    vector<pair<long, long>> prefixSum(a.size());
    prefixSum[0].first = a[0] % m;
    prefixSum[0].second = 1;
    for (int i = 1; i < a.size(); ++i) {
        prefixSum[i].first = (prefixSum[i - 1].first + a[i] % m) % m;
        prefixSum[i].second = i + 1;
    }
    sort(prefixSum.begin(), prefixSum.end());
    long MAX = prefixSum[prefixSum.size() - 1].first;
    long MIN = LONG_MAX;
    
    for (int i = 0; i < a.size() - 1; ++i) {
        if (prefixSum[i].second > prefixSum[i + 1].second) {
            if (prefixSum[i + 1].first - prefixSum[i].first < MIN) {
                MIN = prefixSum[i + 1].first - prefixSum[i].first;
            }
        }
    }
    
    return max(MAX, m - MIN);
}

int main() {
    BLACKPINK
    ll t,n,m,x;
    cin >> t;
    while(t--) {
        cin >> n >> m;
        vector<ll>arr;
        for(ll i=0; i<n; i++) {
            cin >> x;
            arr.push_back(x);
        }
        // cout << printSubsequence(arr, n, m) << endl;
        // cout << subArraySum(arr, n, m) << endl;
        cout << maximumSum(arr, m) << endl;
    }
    return 0;
}
