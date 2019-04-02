#include <iostream>
#define ll long long int
using namespace std;

int main() {
	ll t,n,d;
	cin >> t;
	while(t--) {
	    cin >> n;
	    ll arr[n];
	    for(ll i=0; i<n; i++) cin >> arr[i];
	    
	    cin >> d;
	    for(ll i=d; i<n; i++) cout << arr[i] << " ";
	    for(ll i=0; i<d; i++) cout << arr[i] << " ";
	    cout << endl;
	}
	return 0;
}