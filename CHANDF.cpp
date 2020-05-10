#include <bits/stdc++.h>
#include <vector>
#include <set>
#include <algorithm>
#define BLACKPINK ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
using namespace std;



//  ll main() {
//     BLACKPINK
//     ull t,x,y,l,r;
//     cin >> t;
//     while(t--) {
//         cin >> x >> y >> l >> r;
//         ull mmax = ll_MIN;
//         ull ans=1;
//         for(ull i=l; i<=r; i++) {
//             ull func = (x&i)*(y&i);
//             if(func > mmax) { mmax = func; ans = i; }
//         }
//         cout << ans << endl;
//     }
//     return 0;
// }

int alarm = 0;
ll countMSB(ll q, vector<ll> v) { 
    ll linc = 0;
    ll rinc = 0; 
    for (ll i = 0, j=v.size()-1; i < v.size() && j>=0 && i<=j; i++, j--) {
        if ((q & v[i]) == q) linc++;
        if ((q & v[j]) == q) rinc++; 
    }
    if(rinc > linc) return linc;
    alarm = 1; 
    return rinc; 
} 

ll maxAND (ll xy, vector<ll> v) { 
    ll ans = xy, c; 
    for (ll bitpos = 62; bitpos >= 0; bitpos--) { 
        c = countMSB(ans | (1 << bitpos), v); 
        if ( c >= 2 ) ans |= (1 << bitpos);         
    } 
    return ans; 
} 




int main() {
    BLACKPINK
    ll t,x,y,l,r;
    cin >> t;
    while(t--) {
        cin >> x >> y >> l >> r;

        if(min(x,y)==0) {
            cout << 0 << endl;
            continue;
        }
        ll w = x|y;
        if(w>=l && w <= r) {
            cout << w << endl;
            continue;
        }
        vector<ll> v;
        for(ll i=l; i<=r; i++) v.push_back(i);
        ll ans = maxAND(x&y, v);
        cout << ans+1 << endl;
    }
    return 0;
}