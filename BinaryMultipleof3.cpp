#include <iostream>
#include <math.h>
#define BLACKPINK ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int
using namespace std;

int main() {
    BLACKPINK
	ll t, odd, even;
	string n;
	cin >> t;
	while(t--) {
	    odd=0;even=0;
	    cin >> n;
	    for(int i=0; i<n.length(); i++) {
	        if(n[i]=='1') {
	            if(i%2==0) even++;
	            else odd++;
	        } 
	    }
	    if(abs(odd-even)%3==0) cout << 1 << "\n";
	    else cout << 0 << "\n";
	}
	return 0;
}