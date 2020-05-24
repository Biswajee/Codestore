#pragma GCC optimize("Ofast")
#pragma GCC target ("avx2")
#pragma GCC optimization ("O3")
#pragma GCC optimization ("unroll-loops")
#include <bits/stdc++.h>
#include <math.h>
#include <vector>
#define MOD 1000000007
const int maxn = (int)2e5 + 100;
const int mod = (int)1e9 + 7;
#define ll long long
#define BLACKPINK ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
 
 
bool check(int x) {
	if(x == 1) return 0;
	for(ll i=2; i<=x-1; i++)
		if(x % i == 0) return 0;
	return 1;
}
 
int main() {
    BLACKPINK
    ll n,p,prv=0;
    cin >> n;
	if(n == 5) {
		cout << "1 2 4 8 16\n";
		return 0;
	}
	p = n;
	while(!check(p)) p++;
	for(ll i=1; i<=n; i++) {
		ll cur = 2 * i * p + i * i % p;
		cout << cur - prv << " ";
		swap(prv, cur);
	}
    return 0;
}