#include <bits/stdc++.h>
#define BLACKPINK ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

bool isPrime(int n) 
{ 
    // Corner case 
    if (n <= 1) 
        return false; 
    if(n == 2)
        return false;
  
    // Check from 2 to n-1 
    for (int i = 2; i < n; i++) 
        if (n % i == 0) 
            return false; 
  
    return true; 
}


int main() {
    BLACKPINK
    long long int t,n,a,b,k;
    cin >> t;
    while(t--) {
        cin >> n >> a >> b >> k;
        long long int count = 0;
        if((a > n) && (b > n)) {
            count = 0;
        }
        else if(isPrime(a) == true && isPrime(b) == true) {
            count = 2;
        }
        else {
            for(long long int i=1; i<=n; i++) {
                if(i%a == 0 && i%b !=0) {
                    count++;
                }
                if(i%b == 0 && i%a !=0) {
                    count++;
                }
            }
        }
        if(count >= k)
        cout << "Win" << endl;
        else
        cout << "Lose" << endl;
    }
    return 0;
}