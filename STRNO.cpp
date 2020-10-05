#include <bits/stdc++.h>
#include <vector>
#include <algorithm>
#define ll long long
#define LIM 1000000007
#define BLACKPINK ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

using namespace std;
// map<pair<int,int>, int> mp;  // [(X,K), A]

// bool isprime(int n) 
// { 
//     if (n <= 1)  return false; 
//     if (n <= 3)  return true; 
//     if (n%2 == 0 || n%3 == 0) return false; 
  
//     for (int i=5; i*i<=n; i=i+6) 
//         if (n%i == 0 || n%(i+2) == 0) 
//            return false; 
  
//     return true; 
// }

// vector<pair<int,int>> precompute() {
//     int factors=0, prime=0;
//     for(int i = 1; i<=LIM; i++) {
//         if(LIM%i==0) {
//             factors++;
//             if(isprime(i)) prime++;
//         }
//         mp[make_pair(factors, prime)]=i;
//     }
// }

// int main() {
//     BLACKPINK
//     ll t,x,k;
//     precompute();
//     cin >> t;
//     while(t--) {
//         int flag=0;
//         cin >> x >> k;
//         for(auto i : mp) {
//             if(i.first.first==x && i.first.second==k) {
//                 cout << 1 << endl;
//                 break; flag=1;
//             }
//             if(flag==0) cout << 0 << endl;
//         }
//     }
//     return 0;
// }

int go(int n, int k) {
    int a;
    if(k<=2) {
        a = 0;
        while(!(n&1)) {
            n/=2;
            a++;
        }
    }
    // cout << a << endl;
    return (a<k)?0:1;
}


int main() {
    BLACKPINK
    int t,n,k;
    cin >> t;
    while(t--) {
        cin >> n >> k;
        int ans = go(n,k);
        cout << ans << endl;
    }
}