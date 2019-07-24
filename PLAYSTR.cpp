#include <bits/stdc++.h> 
#define ll long long int
#define BLACKPINK ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std; 

int main() 
{ 
    BLACKPINK
    ll t,n;
    string s1,s2;
    cin >> t;
    while(t--) {
        ll one=0, zero=0, onee=0, zeroo=0;
        cin >> n;
        cin >> s1 >> s2;
        for(auto x : s1) {
            if(x == '1')
                one++;
            else
                zero++;
        }
        for(auto x: s2) {
            if(x == '1')
                onee++;
            else
                zeroo++;
        }
        if(one == onee && zero == zeroo) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0; 
} 