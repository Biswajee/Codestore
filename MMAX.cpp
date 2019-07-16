// #include <bits/stdc++.h> 
// #include <vector>
// #define ull unsigned long long int 
// #define ll long long int
// #define BLACKPINK ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
// using namespace std;
// ull go(int n, int k) {
//     if(k%n == 0) return 0; // chocos > people and integral multiple
    
// }


// int main() 
// { 
//     BLACKPINK
// 	ull t, n, k, res;
//     cin >> t;
//     while(t--) {
//         cin >> n >> k;
//         res = go(n, k);
//         cout << res << endl;
//     } 
// 	return 0; 
// } 




#include <bits/stdc++.h>
#include <algorithm>
#include <vector>
#define ll long long int
#define BLACKPINK ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int main() {
    BLACKPINK
    ll t,n,k,res,result;
    cin >> t;
    while(t--) {
        cin >> n >> k;
        if(n == k) cout << 0 << endl;
        else {
            res = (n+1)/2;
            if(k%n < res) {
                result = (k%n)*2;
            }
            if(k%n == res)
                result = n-1;
            if(k%n > res) 
                result = n - (k%n);
            cout << result << endl;
        }
    }
    return 0;
}