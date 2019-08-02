#include<bits/stdc++.h>
#define ll long long int
#define MOD 1000000007
#define SIZE 100000

using namespace std;
int main()
{
    ll n, query, arr[SIZE+1];
    cin >> n;
    ll a[n+1];
    for(int i=1;i<=n;i++) {
        cin >> a[i];
    }
    arr[0] = 1; // 0 factorial to 1
    n=1;
    // factorial of values upto n
    for(int i=1;i<=SIZE;i++)
    {
        n=(n*i) % MOD;
        arr[i]=n;
    }
    cin >> query;
    while(query--)
    {
        ll l,r;
        cin >> l >> r;
        ll p=1;
        for(int i=l; i<=r; i++)
        {
          p = p*arr[a[i]];  
          p = p % MOD;
        }
        
        ll res = 1, m = r-l;      
  
        p = p % MOD;  
      
        while (m > 0) 
        { 
            if (m & 1) 
                res = (res*p) % MOD; 
            m = m>>1; 
            p = (p*p) % MOD;   
        }
        cout << res << "\n";
    }
    return 0;
}