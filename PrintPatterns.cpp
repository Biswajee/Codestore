/* Recursion */

#include <iostream>Update 
#define ll long long int
using namespace std;

int go(int a, int n, int pflag, int nflag) {
    cout << a << " ";
    if(a>0 && pflag==0) { pflag=1; return(go(a-5,n,pflag,nflag));} 
    if(a==n && pflag==1 && nflag==1) return n;
    if(a<0 && nflag==0) { nflag=1; return(go(a+5,n,pflag,nflag));}
}

int main() {
	ll t,n;
	cin >> t;
	while(t--) {
	    cin >> n;
	    go(n,n,0,0);
	    cout << endl;
	}
	return 0;
}