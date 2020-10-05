#include <bits/stdc++.h>
#include <string>
#define BLACKPINK ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

int main() {
    BLACKPINK
	int t,n,q;
	cin >> t;
	while(t--) {
	    cin >> n;
	    string str[n];
	    for(int i=0; i<n; i++) {
	        cin >> str[i];
	    }
	    cin >> q;
	    string query[q];
	    for(int i=0; i<q; i++) {
	        cin >> query[i];
	    }
	    int d=0, count = 0;
	    for(int i=0; i<q; i++) {
	        count = 0;
	        for(int j=0; j<n; j++) {
	            d = query[i].compare(str[j].substr(0, query[i].length()));
	            if(d == 0) {
	                count++;
	            }
	        }
	        cout << count << endl;
	    }
	}
	return 0;
}