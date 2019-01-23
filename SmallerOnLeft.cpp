#include <iostream>
#include <algorithm>
#include <vector>
#define BLACKPINK ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;


int compute(vector<int> V, int n, int size) {
    sort(V.begin(), V.begin()+ n);
    return V[n-1];
}

int main() {
    BLACKPINK
	int t,n,x,res;
	cin >> t;
	
	while(t--) {
	    cin >> n;
	    vector<int> A(n);
	    for(int i=0; i<n; i++) {
	        cin >> A[i];
	    }
	    for(int i=0; i,n; i++) {
	        if((A[i] == *A.begin())) {
	            cout << "-1 ";
	        } else {
	            if(A[i-1] > A[i]) {
	                cout << "-1 ";
	            } else {
	                res = compute(A,i,n);
	                cout << res << " ";
	            } 
	        }
	    }
	}
	return 0;
}