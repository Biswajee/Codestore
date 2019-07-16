#include <bits/stdc++.h>
#include <algorithm>
#include <vector>
#define ll long long int
#define BLACKPINK ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int main() {
    BLACKPINK
    ll t,n,sum,a,b,c,flag,x;
    cin >> t;
    while(t--) {
        cin >> n;
        vector<ll> v;
        for(int i=0; i<n; i++) {
            cin >> x;
            v.push_back(x);
        }
        vector<ll> org = v;
        ll min_sum = INT_MAX;
        flag = 0;
        do {
            pair<vector<ll>::iterator, vector<ll>::iterator> mispair = mismatch(v.begin(), v.end(), org.begin(), org.end());
            if(mispair.first == v.end() && mispair.second == org.end() && flag == 1) break;
            sum = 0;
            vector<ll> s = v;
            for(int i=0; i<(n+1/2)-1; i++) {
                a = *s.rbegin(); 
                s.pop_back();
                b = *s.rbegin();
                s.pop_back();
                c = a + b;
                s.push_back(c);
                sum+=c;
                // cout << sum << " ";
            }
            rotate(v.begin(), v.begin()+1, v.end());
            flag = 1;
            // cout << endl;
            min_sum = min(min_sum, sum);
          } while(true);
        cout << min_sum << endl;
    }
    return 0;
}