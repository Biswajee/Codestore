#pragma GCC optimize("Ofast")
#pragma GCC target ("avx2")
#pragma GCC optimization ("O3")
#pragma GCC optimization ("unroll-loops")
#include <bits/stdc++.h>
#include <math.h>
#include <vector>
#define ll long long
#define BLACKPINK ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

ll go(ll base) {
    if(base==1 || base==2) return 0;
    return ((base/(ll)2)-1) + go(base-2);
}


int main() {
    BLACKPINK
    ll t,b;
    cin >> t;
    while(t--) {
        cin >> b;
        ll ans = go(b);
        cout << ans << endl;
    }
    return 0;
}