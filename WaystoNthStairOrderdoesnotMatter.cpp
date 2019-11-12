/*
There are N stairs, and a person standing at the bottom wants to reach the top. The person can climb either 1 stair or 2 stairs at a time. Count the number of ways, the person can reach the top (order does not matter).
Note: Order does not matter means for n=4 {1 2 1},{2 1 1},{1 1 2} are considered same.
*/

#include <bits/stdc++.h>
#define BLACKPINK ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int
using namespace std;

int main() {
    BLACKPINK
	ll t, n;
	cin >> t;
	while(t--) {
	    cin >> n;
	    cout << ((int)n/2) + 1 << "\n";
	}
	return 0;
}