#include <iostream>
using namespace std;

int main() {
	long long int t,n;
	cin >> t;
	while(t--) {
	    cin >> n;
	    if(n%5==0)
	        cout << "-1" << endl;
	   else
	        cout << n%5 << endl; 
	}
	return 0;
}