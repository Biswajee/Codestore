#include <bits/stdc++.h>
#define BLACKPINK ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int
using namespace std;

int main() {
    BLACKPINK
    ll t,n,minimum=0;
    cin >> t;
    for(ll i=t-1; i>=0; i--) {
        cin >> n;
        ll a[n];
        for(ll j=0; j<n; j++) {
            cin >> a[i];
        }
         for(ll k=0; k<n; k++) {
            minimum += (a[i] - 1);
        }
        cout << minimum + 1 << endl;
    }
    return 0;
}














// int main() {
//     BLACKPINK
//     ll t,n,minimum=0; 
//     cin >> t;
//     while(t--) {
//         cin >> n;
//         ll a[n];
//         for(ll i=0; i<n; i++) {
//             cin >> a[i];
//         }

//         for(ll i=0; i<n; i++) {
//             minimum += (a[i] - 1);
//         }
//         cout << minimum + 1 << endl;
//     }
//     return 0;
// }