#include <bits/stdc++.h>
#include <math.h>
#define BLACKPINK ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int
using namespace std;


// Fast Solution 
int main() {
    BLACKPINK
    ll t,n,a,b,k;
    cin >> t;
    while(t--) {
        cin >> n >> a >> b >> k;
        ll counta=0, countb=0, common=0, res=0;
        if(a%b==0 || b%a == 0) {
            counta = n/a;
            countb = n/b;
            res=abs(countb-counta);
        }
        else {
            counta = n/a;
            countb = n/b;
            common = n/(a*b);
            res = counta + countb - (2*common);
        }
        if(res >= k) 
        cout << "Win" << endl;
        else
        cout << "Lose" << endl;
    }
    return 0;
}





// #include <bits/stdc++.h>
// #define BLACKPINK ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// using namespace std;

// bool isPrime(int n) 
// { 
//     // Corner case 
//     if (n <= 1) 
//         return false; 
//     if(n == 2)
//         return false;
  
//     // Check from 2 to n-1 
//     for (int i = 2; i < n; i++) 
//         if (n % i == 0) 
//             return false; 
  
//     return true; 
// }


// int main() {
//     BLACKPINK
//     long long int t,n,a,b,k;
//     cin >> t;
//     while(t--) {
//         cin >> n >> a >> b >> k;
//         long long int count = 0, flag = 0;
//         if((a > n) && (b > n)) {
//             count = 0;
//         }
//         else if(isPrime(a) == true && isPrime(b) == true) {
//             count = 2;
//         }
//         else {
//             for(long long int i=1; i<=n; i++) {
//                 if(i%a == 0 && i%b !=0) {
//                     count++;
//                 }
//                 else if(i%b == 0 && i%a !=0) {
//                     count++;
//                 }
//                  if(count >= k) {
//                     cout << "Win" << endl;
//                     flag = 1;
//                     break;
//                  }
//             }
//         }
       
//         if(flag == 0)
//             cout << "Lose" << endl;
//     }
//     return 0;
// }