#include <bits/stdc++.h>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	int t,n;
	cin >> t;
	while(t--) {
	    cin >> n;
	    int arr[n];
	    for(int i=0; i<n; i++) cin >> arr[i];
	    
        // O(n^2) approach...
	    vector<int> res;
	    for(int i=0; i<n; i++) {
	        for(int j=0; j<n; j++) {
	           res.push_back(min(arr[i], arr[j]) * abs(i-j)); 
	        }
	    }
	    cout << *max_element(res.begin(), res.end()) << endl;
	}
	return 0;
}