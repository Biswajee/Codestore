#pragma GCC optimize("Ofast")
#pragma GCC target ("avx2")
#pragma GCC optimization ("O3")
#pragma GCC optimization ("unroll-loops")
#include <bits/stdc++.h>
#include <math.h>
#include <vector>
#define MOD 1000000007
#define ll long long
#define BLACKPINK ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

/*

8 x 8 Chessboard 
Find squares reachable in k moves...
Given eqn: (r′−r)^2 + (c′−c)^2 ≤ 2
Boils down to: (r′−r)^2 + (c′−c)^2 = 1
Boils down to: x^2 + y^2 = 1    ------------------ circle


Interpretation: Check if point falls inside circle for every point upto (8,8)...This will work since constraints are very small...

*/

int main() {
    BLACKPINK
    ll t,r,c,k,sq;   // its own pos
    cin >> t;
    while(t--) {
        sq=0;
        cin >> r >> c >> k;
        for(ll i=1; i<=8; i++) {
            for(ll j=1; j<=8; j++) {
                if(max(abs(i-r),abs(j-c))<=k)sq++;
            }
        }
        cout << sq << endl;
    }
    return 0;
}