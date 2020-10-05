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
    ll t;
    string str;
    cin >> t;
    while(t--) {
        cin >> str;
        ll count=0;
        for(int i=0; i<str.size()-1;) {
            if(str[i] != str[i+1]) { count++; i+=2; }
            else i++;
        }
        cout << count << endl;
    }
    return 0;
}