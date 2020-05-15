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
    ll t,n;
    cin >> t;
    while(t--) {
        cin >> n;
        if(n==2010 || n==2015 || n==2016 || n==2017 || n==2019) cout << "HOSTED" << endl;
        else cout << "NOT HOSTED" << endl;
    }
    return 0;
}