#include <iostream>
#define mod 1000000007
#define ll long long int
#define BLACKPINK ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

int main() {
    BLACKPINK
	ll t,n;
	cin >> t;
	while(t--) {
	    cin >> n;
	    ll arr[n];
	    for(ll i=0; i<n; i++) {
	        cin >> arr[i];
	    }
	    ll res = 0, sum = 0;
	    for(ll i=0; i<n; i++) {
	        for(ll j=i; j<n; j++) {
	            res+=arr[j];
	            sum +=res;
	        }
	        res = 0;
	    }
	    cout << sum%mod << endl;
	}
	return 0;
}