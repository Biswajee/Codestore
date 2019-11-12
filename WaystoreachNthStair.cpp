/* order does matter */
#include <bits/stdc++.h>
#define BLACKPINK ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int
#define MOD 1000000007
using namespace std;

int main() {
    BLACKPINK
	ll t, n, res;
	ll arr[100001];

    // pre compute
	arr[0]=1; arr[1]=1;
	for(ll i=2;i<=100000; i++) {
	    arr[i]=(arr[i-1]%MOD) + (arr[i-2]%MOD);
	}
	cin >> t;
	while(t--) {
	    cin >> n;
	    cout << arr[n]%MOD << "\n";
	}
	return 0;
}