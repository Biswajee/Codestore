#include <bits/stdc++.h>
#include <unordered_map>
#define ll long long
#define BLACKPINK ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

using namespace std;
int main() {
    BLACKPINK
    ll t,n,q,c;
    string str;
    cin >> t;
    while(t--) {
        unordered_map<char,ll> mp;
        ll count;
        cin >> n >> q;
        cin >> str;
        for(char a : str) mp[a]++;
        // Queries...
        for(ll i=0; i<q; i++) {
            count=0;
            cin >> c;
            for(auto j : mp) {
                ll val = j.second-c;
                // cout << j.first << " " << j.second << endl;
                if(val>0) count+=val;
            }
            cout << count << endl;
        }
    }
    return 0;
}