#include <bits/stdc++.h>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#define BLACKPINK ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int
using namespace std;

int main() {
    BLACKPINK
    ll t,n;
    cin >> t;
    while(t--) {
        map<char, int> mp;
        vector<string> A;
        set<char> s;
        cin >> n;
        string str[n];
        for(int i=0; i<n; i++) {
            cin >> str[i];
        }

        // Remove duplicates...
        string x;
        for(int i=0; i<n; i++) {
            string y="";
            x = str[i];
            sort(x.begin(), x.end());
            int j=0,k=0;
            while(j < x.length()) {
                if(x[j] == x[j+1]) j++;
                else { y = y + x[j]; k++; j++; }
            }
            A.push_back(y);
        }

        // Printing 
        // for(auto i: A) cout << i << endl; 

        for(auto str: A) {
            for(int i=0; i<str.length(); i++) {
                mp[str[i]]++;
            }
        }
        int count=0;
        for(auto i: mp) {
            if(i.second == n) count++;
        }
        cout << count << endl;

    }
return 0;
}