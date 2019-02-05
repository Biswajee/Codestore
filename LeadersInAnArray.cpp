#include <bits/stdc++.h>
#include <algorithm>
#include <math.h>
#include <vector>
#define BLACKPINK ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int
using namespace std;

int main() {
    BLACKPINK
    ll t,n;
    cin >> t;
    while(t--) {
        cin >> n;
        ll a[n];
        vector<pair<ll,ll>> A;
        for(ll i=0; i<n; i++) {
            cin >> a[i];
            A[i] = make_pair(a[i], i);
        }
        
        pair<ll, ll> prevmax, maximum;
        maximum.first = 0;
        for(ll i=n-1; i>=0; i--) {
            
            maximum.first = max(maximum.first, A[i].first);
            maximum.second = A[i].second;
            if((prevmax != maximum)) A.push_back(maximum);
        }
        for(auto i: A) cout << i << " ";
        cout << endl;
    }
    return 0;
}