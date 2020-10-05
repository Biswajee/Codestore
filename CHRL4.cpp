#pragma GCC optimize("Ofast")
#pragma GCC target ("avx2")
#pragma GCC optimization ("O3")
#pragma GCC optimization ("unroll-loops")
#include <bits/stdc++.h>
#include <math.h>
#include <vector>
#define MOD 1000000007
#define ll long long
#define BLACKPINK ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

int main() {
    BLACKPINK
    ll t,n,k,i;
    cin >> t;
    while(t--) {
        cin >> n >> k;
        vector<ll> v(n);
        for(i=0; i<n; i++) cin >> v[i];
        i=0;
        while(i!=n-1) {
            auto it = lower_bound(v.begin(), v.end(), v[i]+k);
        }
    }
    return 0;
}