#include <bits/stdc++.h>
#define BLACKPINK ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

int main() {
    BLACKPINK
	int t,n;
	cin >> t;
	while(t--) {
	    cin >> n;
	    int arr[n];
	    for(int i=0; i<n; i++) cin >> arr[i];
	    int max_diff = INT_MIN;
	    int _min = arr[0]; 
        for(int i = 1; i < n; i++) 
        {      
          if (arr[i] - _min > max_diff)                              
          max_diff = arr[i] - _min; 
         
          if (arr[i] < _min) 
          _min = arr[i];                      
        } 
	    cout << max_diff << endl;
	}
	return 0;
}