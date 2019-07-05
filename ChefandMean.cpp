#include <bits/stdc++.h>
#include <algorithm>
#define ll long long int
#define BLACKPINK ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int main() {
	BLACKPINK
	ll t, n, sum;
	cin >> t;
	while(t--) {
    	cin >> n;
    	sum = 0;
    	ll arr[n];
    	for(int i=0; i<n; i++) { cin >> arr[i]; sum += arr[i];}
    // 	sort(arr, arr+n);
    	double mean = (double)sum/n;
    	ll int_mean = (ll)mean;
    	if((mean*10) == (int_mean*10)) {
    	   // bool res = binary_search(arr, arr+n, mean);
    	   auto it = find(arr, arr+n, mean);
    	    if(it!=arr+n) {
    	        cout << (it - arr) + 1 << endl;
    	    } else {
    	        cout << "Impossible" << endl;
    	    }
    	} else {
    	    cout << "Impossible" << endl;
    	}
	}
	return 0;
}