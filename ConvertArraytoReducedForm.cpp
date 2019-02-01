#include <bits/stdc++.h>
#include <algorithm>
#include <vector>
#define BLACKPINK ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

int main() {
	BLACKPINK
	int t,n,x;
	cin >> t;
	while(t--) {
	    cin >> n;
	    vector<int> arr, brr;
	    for(int i=0; i<n; i++) {
	        cin >> x;
	        arr.push_back(x);
	    }
	    brr = arr;
	    sort(arr.begin(), arr.end());
	    map<int, int> crr;
	    int count = 0;
	    for(auto i: arr) {
	        crr[i] = count++;
	    }
	    for(auto i: brr) {
	        cout << crr[i] << " ";
	    }
	    cout << endl;
	    arr.clear();
	    brr.clear();
	    crr.clear();
	}
	return 0;
}