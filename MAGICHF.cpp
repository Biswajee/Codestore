#include<bits/stdc++.h>

using namespace std;

int main() {
	int t,n,x,s;


	cin >> t;
	while(t--){
	    cin >> n >> x >> s;
	    int a=0,b=0,temp=0;
	    int arr[100005]={0};

	    arr[x] = 1; //contains gold coin...
	    for(int i=0; i<s; i++){
	        cin >> a >> b;

	        //swapping...
	        arr[a] = arr[a]+arr[b];
	        arr[b] = arr[a]-arr[b];
	        arr[a] = arr[a]-arr[b];
	    }

	    //search for coin...
	    for(int i=1; i<=n; i++){
	        if(arr[i] == 1){
	        cout << i << endl;
	        break;
	        }
	    }

	}
	return 0;
}
