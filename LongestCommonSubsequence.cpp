#include <bits/stdc++.h>
#include <math.h>
#define BLACKPINK ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int
using namespace std;

int main() {
    BLACKPINK
	int t,n1,n2;
	cin >> t;
	while(t--) {
	    cin >> n1 >> n2;
	    char x[100],y[100];
	    for(int i=1; i<=n1; i++) cin >> x[i];
	    for(int i=1; i<=n2; i++) cin >> y[i];
	    int arr[n1+1][n2+1], maxi=0;
	    memset(arr,0,sizeof(arr));
	    for(int i=1; i<=n1; i++) {
	        for(int j=1; j<=n2; j++) {
	            if(x[i] == y[j]) {
	                arr[i][j] = arr[i-1][j-1] + 1;
	            }
	            else {
	                arr[i][j] = max(arr[i-1][j], arr[i][j-1]);
	            }
	            if(arr[i][j] > maxi) maxi = arr[i][j];
	        }
	    }
	    cout << maxi << endl;
	}
	return 0;
}