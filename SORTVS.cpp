#include <bits/stdc++.h>
#include <vector>
#include <algorithm>
#define BLACKPINK ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
using namespace std;

set<pair<ll,ll>> actual_trans1;
set<pair<ll,ll>> actual_trans2;
void inversion_count(vector<ll> v) {
    ll inv = 0; 
    ll n = v.size();
    for (ll i = 0; i < n - 1; i++) 
        for (ll j = i + 1; j < n; j++) 
            if (v[i] > v[j]) {
                actual_trans1.insert({v[i], v[j]});
                actual_trans2.insert({v[j], v[i]});
                inv++; 
            } 
}



ll min_swaps(vector<ll> arr) { 
    const ll n = arr.size();
    pair<ll, ll> position[n]; 
    for (ll i = 0; i < n; i++) { 
        position[i].first = arr[i]; 
        position[i].second = i; 
    } 
  
    sort(position, position + n); 
    vector<bool> vis(n, false); 
    ll ans = 0; 
    for (ll i = 0; i < n; i++) { 
        if (vis[i] || position[i].second == i) 
            continue; 
        ll cycles = 0; 
        ll j = i; 
        while (!vis[j]) { 
            vis[j] = 1; 
            j = position[j].second; 
            cycles++; 
        } 
        if (cycles > 0) { 
            ans += (cycles - 1); 
        } 
    }  
    return ans; 
} 


int main() {
    BLACKPINK
    ll t,n,m,x,y;
    cin >> t;
    while(t--) {
        cin >> n >> m;
        vector<ll> v(n);
        set<pair<ll,ll>> transformations;
        actual_trans1.clear();
        actual_trans2.clear();
        for(ll i=0; i<n; i++) cin >> v[i];
        for(ll i=0; i<m; i++) {
            cin >> x >> y;
            transformations.insert({y,x});
            swap(v[x-1], v[y-1]);
        }
        
        // cout << "pre swap array status..." << endl;
        // for(ll i=0; i<n; i++) {
        //     cout << v[i] << " ";
        // }
        // cout << endl;
        inversion_count(v);
        // cout << "\nActual inversions :" << endl;
        // for(auto x : actual_trans) cout << x.first << "," << x.second << endl;
        // cout << "\nGiven inversions :" << endl;
        // for(auto x : transformations) cout << x.first << "," << x.second << endl;

        bool res1 = includes(transformations.begin(), transformations.end(), actual_trans1.begin(), actual_trans1.end());
        bool res2 = includes(transformations.begin(), transformations.end(), actual_trans2.begin(), actual_trans2.end());
        if(actual_trans1.size()!=0 && actual_trans2.size()!=0 && (res1 || res2)) cout << 0 << endl;
        else {
            ll minutes = min_swaps(v);
            cout << minutes << endl;
        }
    }
    return 0;
}