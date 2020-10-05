#include <bits/stdc++.h>
#include <vector>
#include <set>
#include <algorithm>
#define BLACKPINK ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
using namespace std;

int main() {
    int t,n,y;
    string a,b,x;
    cin >> t;
    while(t--) {
        cin >> a >> b >> n;
        unordered_map<string, int> mp;
        for(int i=0; i<n; i++) {
            cin >> x >> y;
            mp[x]=y;
        }
        
    }
    return 0;
}