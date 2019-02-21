#include <bits/stdc++.h>
#include <algorithm>
#define BLACKPINK ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

int main() {
    BLACKPINK
	int t,n,m;
	cin >> t;
	while(t--) {
	    cin >> n;
	    int arr[n];
	    for(int i=0; i<n; i++) {
	        cin >> arr[i];
	    }
	    cin >> m;
	    sort(arr,arr+n);
	    vector<int> maxm; 
        int res = 0;
        if(n == m) {
            cout << arr[n-1] - arr[0] << endl;
        }
        else {
            for(int i=0; i+m-1<n; i++) {
                res = arr[i+m-1] - arr[i];
                maxm.push_back(res);
            }

            // Sorted array
            // for(auto i: arr) cout << i << " ";
            // cout << endl << endl;
            // minimum difference
            sort(maxm.begin(), maxm.end());
            // for(auto i:maxm) cout << i << " ";

            cout << *maxm.begin() << endl;
        }
	}
	return 0;
}