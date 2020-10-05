#pragma GCC optimize("Ofast")
#pragma GCC target ("avx2")
#pragma GCC optimization ("O3")
#pragma GCC optimization ("unroll-loops")
#include <bits/stdc++.h>
#include <math.h>
#include <vector>
#include <unordered_map>
#define MOD 1000000007
#define ll long long
#define BLACKPINK ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

int main() {
    BLACKPINK
    ll t,n,x,flag;
    cin >> t;
    while(t--) {
        unordered_map<ll, ll> mp;
        flag=0; 
        cin >> n;
        for(int i=0; i<n; i++) {
            cin >> x;
            if(x==5) mp[x]++;
            else if(x == 10) {
                mp[10]++;
                if(mp[5] > 0) mp[5]--;
                else flag=1;
            }
            else if(x == 15) {
                mp[15]++;
                if(mp[10] > 0) {
                    mp[10]--;
                }
                else if(mp[5] >= 2) {
                    mp[5]-=2;
                } 
                else flag=1;
            }
            else flag=1;
        }
        if(flag==1) cout << "NO" << endl;
        else cout << "YES" << endl;
    }
    return 0;
}