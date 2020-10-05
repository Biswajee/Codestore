// import Array._

// object Solution {
//     def main(args: Array[String]) : Unit = {
//         var t : Int = scala.io.StdIn.readInt();
//         while (t > 0) {
//             val n  : Int = scala.io.StdIn.readInt();
//             var v = ofDim[Int](n, n);

//             var k : Int = 1;

//             for (i <- 0 to n - 1) {
//                 if (i % 2 != 0) {
//                     for (j <- n - 1 to 0 by - 1) {
//                         v(i)(j) = k;
//                         k = k + 1;
//                     }
//                 } else {
//                     for (j <- 0 to n - 1) {
//                         v(i)(j) = k;
//                         k = k + 1;
//                     }
//                 }
//             }
//             for (i <- 0 to n - 1) {
//                 for (j <- 0 to n - 1) {
//                     print(v(i)(j));
//                     print(" ");
//                 }
//                 println();
//             }
//             t = t - 1;
//         }
//     }
// }



#pragma GCC optimize("Ofast")
#pragma GCC target ("avx2")
#pragma GCC optimization ("O3")
#pragma GCC optimization ("unroll-loops")
#include <bits/stdc++.h>
#include <math.h>
#include <vector>
#define ll long long
#define BLACKPINK ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

int main() {
    BLACKPINK
    ll t,n,k;
    cin >> t;
    while(t--) {
        cin >> n;
        k=1;
        vector<vector<ll>> v(n, vector<ll> (n,0));
        for(ll i=0; i<n; i++) {
            if(i%2!=0) {
                for(ll j=n-1; j>=0; j--) {
                    v[i][j]=k++;
                }
            } else {
                for(ll j=0; j<n; j++) {
                    v[i][j]=k++;
                }
            }
        }
        
        // Output...
        for(ll i=0; i<n; i++) {
            for(ll j=0; j<n; j++) {
                cout << v[i][j] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}