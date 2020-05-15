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
    ll n,x,even=0,odd=0;
    cin >> n;
    for(int i=0; i<n; i++) {
        cin >> x;
        if(x&1) even++;
        else odd++; 
    }
    if(even>odd) cout << "READY FOR BATTLE" << endl;
    else cout << "NOT READY" << endl;
    return 0;
}