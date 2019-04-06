#include <bits/stdc++.h>
#include <string.h>
#include <vector>
#include <map>
#define BLACKPINK ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int

using namespace std;

vector<string> getSubstr(string s) {
    vector<string> result;
    for(int i=0; i<s.length(); i++) {
        for (int len = 1; len <= s.length() - i; len++) 
            result.push_back(s.substr(i, len));
    }
    return result;
}

int main() {
    BLACKPINK
    ll t;
    string x, str;
    int n, strand, start, end;
    cin >> t;
    vector<string> genes(t);
    vector<int> health(t);
    vector<string> dna, sublist;
    vector<int> values;
    for(int i=0; i<t; i++) {
        cin >> x;
        genes.push_back(x);
    }
    for(int i=0; i<t; i++) {
        cin >> n;
        health.push_back(n);
    }
    cin >> strand;

    for(int i=0; i<strand; i++) {
        cin >> start >> end >> str;
        dna.push_back(str.substr(start, end));
    }

    int next = 0;
    map<string, int> mp;
    for(auto c: genes) {
        mp[c] = *(health.begin() + next);
        next++;
    }


    // Print the map....
    // for(auto a: mp) {
    //     cout << a.first << " " << a.second << endl;
    // }
    // Print the dna vector
    // for(auto a: dna) cout << a << endl;

    for(auto s : dna) {
        sublist = getSubstr(s);
    
        int sum = 0;
        for(auto i: sublist) {
            if(mp.find(i) != mp.end()) {
                sum += mp[i];
            }
            else {
                sum += 0;
            }
        }

        values.push_back(sum);
        sum = 0;
        sublist.clear();
    }
    // Print values vector containing sum...
    // for(auto i: values) cout << i << " ";
    // cout << endl;
    cout << *min_element(values.begin(), values.end()) << " " << *max_element(values.begin(), values.end()) << endl;

    return 0;
}