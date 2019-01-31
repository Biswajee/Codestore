#include <iostream>
#define BLACKPINK ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int
using namespace std;

int main() {
    BLACKPINK
	ll t,n,sum;
	cin >> t;
	while(t--) {
	    cin >> n >> sum;
	    ll arr[n];
	    for(int i=0; i<n; i++) {
	        cin >> arr[i];
	    }
	    ll res = 0, flag = 0, i = 0, j = 0;
	    for(i=0; i<n; i++) {
	        
	        for(j=i; j<n; j++) {
	            res = res + arr[j];
	            if(res > sum) { res = 0; break;}
	            if(res == sum) { flag = 1; break;}
	        }
	        if(flag == 1) break;
	    }
	    if(i == n) cout << -1 << endl;
	    else cout << i+1 << " " << j+1 << endl;
	   // Printing the array...
       // for(ll k=i; k<=j; i++) {
	   //     cout << arr[k] << " ";
	   // }
	}
	return 0;
}