#pragma GCC optimize("Ofast")
#pragma GCC target ("avx2")
#pragma GCC optimization ("O3")
#pragma GCC optimization ("unroll-loops")
// #include <bits/stdc++.h>
// #include <math.h>
// #include <vector>
// #define MOD 1000000007
// #define ll long long
// #define BLACKPINK ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// using namespace std;

// ll getCount(ll l, ll r, ll p) { 
//     ll cnt = 0; 
//     ll val = p; 
//     while (1) { 
//         ll a = r / val; 
//         ll b = (l - 1) / val; 
  
//         val *= p; 
//         if (a - b) { 
//             cnt += (a - b); 
//         } 
//         else break; 
//     } 
//     return cnt; 
// } 

// ll getFactors(ll n, ll k) {
//     ll sum=0;
//     for(ll i=1; i<=n; i++) {
//         if(i%k==0) sum+=i;
//     }
//     return sum;
// }


// int main() {
//     BLACKPINK
//     ll t,n,k,ap1,ap2,ap3;
//     cin >> t;
//     while(t--) {
//         cin >> n >> k;
//         ap1 = (n/2)*(1+n);
//         ap2 = getFactors(n,k);
//         ap3 = getCount(1,n,k);
//         cout << ap1 + ap3 - ap2 << endl;
//     }
//     return 0;
// }






#define ll long long
#include<bits/stdc++.h>
using namespace std;

ll sum=0;
void solve(ll n, ll k) {
	if(n < k) {
		sum += n * (n + 1) / 2;
		return;
	}
 
	sum += n * (n + 1) / 2;
 
	ll x = n / k;
	sum -= x * (x + 1) * k / 2;		// (x / 2) * (2 * k + (x - 1) * k) – Sum of all multiples of k from 1 to n
	return solve(x, k);
}

int main() {
    ll t;
    cin >> t;
    while(t--) {
        sum=0;
        ll n,k;
        cin >> n >> k;
        solve(n,k);
        cout << sum << endl;
    }
}