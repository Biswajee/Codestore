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

int main() {
    BLACKPINK
    ll t,n,k,p,loss;
    cin >> t;
    while(t--) {
        loss=0;
        cin >> n >> k; 
        for(int i=0; i<n; i++) {
            cin >> p;
            if(p>k) loss+=(p-k); 
        }
        cout << loss << endl;
    }
    return 0;
}