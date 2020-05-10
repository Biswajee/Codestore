#include <bits/stdc++.h>
#include <vector>
#include <algorithm>
#define BLACKPINK ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
using namespace std;


ll inversion_count(vector<ll> v) {
    ll inv = 0; 
    ll n = v.size();
    for (ll i = 0; i < n - 1; i++) 
        for (ll j = i + 1; j < n; j++) 
            if (v[i] > v[j]) 
                inv++; 
  
    return inv;
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
        for(ll i=0; i<n; i++) cin >> v[i];
        for(ll i=0; i<m; i++) {
            cin >> x >> y;
            if(v[x-1] < v[y-1]) swap(v[x-1], v[y-1]);
        }
        // vector<pair<ll,ll>> idx_arranged(n);
        // for(ll i=0; i<n; i++) {
        //     idx_arranged[i].first = i;
        //     idx_arranged[i].second = v[i];
        // }

        // for(ll i=0; i<n; i++) {
        //     cout << "{ " << idx_arranged[i].first << ", " << idx_arranged[i].second  << " }" << endl;
        // }

        if(inversion_count(v) == 0) {
            // Array is sorted...
            cout << 0 << endl;
        }
        else {
            ll minutes = min_swaps(v);
            cout << minutes << endl;
        }
    }
    return 0;
}