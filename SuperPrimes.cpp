#include <bits/stdc++.h>
#include <vector>
#define BLACKPINK ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int
using namespace std;

void Sieve(int n) 
{  
    bool prime[10000000]; 
    memset(prime, true, sizeof(prime)); 
  
    for (int p=2; p*p<=10000000; p++) 
    { 
        if (prime[p] == true) 
        { 
            for (int i=p*p; i<=10000000; i += p) 
                prime[i] = false; 
        } 
    } 
    vector<int> V;
    for (int p=2; p<=10000000; p++) 
       if (prime[p]) 
          V.push_back(p);



     
} 

int main() {
    BLACKPINK
    ll t,n,res=0;
    cin >> t;
    while(t--) {
        cin >> n;
        Sieve(n);
        cout << endl;
    }
    return 0;
}