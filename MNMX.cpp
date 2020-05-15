#pragma GCC optimize("Ofast")
#pragma GCC target ("avx2")
#pragma GCC optimization ("O3")
#pragma GCC optimization ("unroll-loops")
#include <bits/stdc++.h>
#include <algorithm>
#include <math.h>
#include <vector>
#define ll long long
#define BLACKPINK ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

int main() {
    BLACKPINK
    ll t,n,cost;
    cin >> t;
    while(t--) {
        cin >> n;
        vector<int> v(n);
        for(ll i=0; i<n; i++) cin >> v[i];
        cost=*min_element(v.begin(), v.end()) * (n-1);
        cout << cost << endl;
    }
    return 0;
}