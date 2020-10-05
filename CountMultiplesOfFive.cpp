#include <bits/stdc++.h>
#include <vector>
#define BLACKPINK ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
using namespace std;


void naive_solve() {
    ll t,n,q,l,r,cnt;
    cin >> t;
    while(t--) {
        cin >> n >> q;
        vector<ll> v(n);
        for(ll i=0; i<n; i++) cin >> v[i];

        for(ll i=0; i<q; i++) {
            cin >> l >> r;
            cnt=0;
            for(ll j=l; j<=r; j++) {
                if(v[j]%5==0) cnt++;
            }
            cout << cnt << " ";
        }
        cout << endl;
    }
}



int main() {
    BLACKPINK
    naive_solve();
    return 0;
}