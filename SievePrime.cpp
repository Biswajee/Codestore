#include <bits/stdc++.h>
#define INF 0x3f3f3f3f
using namespace std;


long long int d[1000055] = {INF},u=0;
void Sieve(int m, int n) 
{ 
	bool prime[n+1]; 
	memset(prime, true, sizeof(prime)); 

	for (int p=2; p*p<=n; p++) 
	{ 
		if (prime[p] == true) 
		{ 
			for (int i=p*2; i<=n; i += p) 
				prime[i] = false; 
		} 
	} 

	for (int p=m; p<=n; p++) 
	if (prime[p] && p != 1) 
	{
	    d[u]=p;
	    u++;
	}
} 

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t,a,b;
    cin >> t;
    while(t--) {
        cin >> a >> b; 
        Sieve(a, b);
        for(int i=0; i < ; i++) {
            cout << d[i] << "\n";
        }
        d[1000055] = {0};
        cout << "\n";
    }
    return 0;
}