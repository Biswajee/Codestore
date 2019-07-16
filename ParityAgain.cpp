// #include <bits/stdc++.h>
// #include <set>
// #include <algorithm>
// #define ll long long int
// #define BLACKPINK ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
// using namespace std;
// // calculate xor of numbers...
// ll cal_xor(ll x, ll y) { 
//    return (x | y) & (~x | ~y); 
// } 

// // number of 1's in bin rep...
// ll bin_one_count(ll n) {
//     string s = std::bitset<8>(n).to_string();
//     ll c = count(s.begin(), s.end(), '1');
//     return c;
// }

// int main() {
// 	BLACKPINK
// 	ll t, q, x, out;
// 	cin >> t;
// 	while(t--) {
// 	    set<ll> s;
// 	    vector<ll> v;
// 	    cin >> q;
// 	    while(q--) {
// 	        cin >> x;
// 	        s.insert(x);
// 	        v.push_back(x);
// 	        for(auto a : s) {
// 	            if(a != x) {
//     	            out = cal_xor(a, x);
//     	            s.insert(out);
// 	            }
// 	        }
// 	        ll E = 0, O = 0;
// 	        for(auto a : s) {
// 	           // cout << "array : " << a << endl;
// 	            ll count = bin_one_count(a);
// 	            if(count%2) {
// 	                O++;
// 	            } else {
// 	                E++;
// 	            }
// 	        }
// 	        cout << E << " " << O << endl;
// 	    }
// 	}
// 	return 0;
// }



#include <bits/stdc++.h>
#include <algorithm>
#include <set>
#include <map>
#define ll long long int
#define BLACKPINK ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

// number of 1's in bin rep...
ll bin_one_count(ll n) {
    return __builtin_popcount(n);
}

int main() {
	BLACKPINK
	ll t, q, x, out, count;
    static map<ll, pair<ll, ll>> mp;
    set<ll> s={0};
	cin >> t;
	while(t--) {
	    cin >> q;
	    while(q--) {
	        cin >> x;
	        if(mp.find(x) != mp.end()) {
    	        cout << mp[x].first << " " << mp[x].second << "\n";
                continue;    	   
    	    }
            ll E = 0, O = 0;
	        s.insert(x);
	        for(auto a : s) {
	            if(a != x) {
    	            out = (a | x) & (~a | ~x);
    	            s.insert(out);
	            }
	        }
	        for(auto a : s) {
	            // cout << "array : " << a << endl;
	            count = bin_one_count(a);
	            if(count%2==0) {
	                E++;
	            } else {
	                O++;
	            }
	        }
            mp[x] = make_pair(E,O);
            cout << E << " " << O << "\n";
	    }
	}
	return 0;
}