#include <iostream>
#include <vector>
#include <algorithm>
#define BLACKPINK ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

int main() {
    BLACKPINK
	int t;
	cin >> t;
	while(t--) {
	    long long int n, x;
	    cin >> n;
	    vector<int> arr(n);
	    for(int i=0; i<n; i++) {
	        // cin >> x;
	        // if(x < 0) arr[i] = abs(x);
	        // else arr[i] = x;
            cin >> arr[i];
	    }
	    sort(arr.begin(), arr.end());
	    cout << arr[n-1] * arr[n-2] * arr[n-3] << endl;
	}
	
	return 0;
}