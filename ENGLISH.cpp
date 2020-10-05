#include <bits/stdc++.h>
#include <vector>
#include <math.h>
#define BLACKPINK ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int
using namespace std;

ll LengthLCP(string x, string y) 
{ 
    ll arr[26]={0}, i, c = 0, first_word, sec_word; 
       
    first_word = x.length();
    sec_word = y.length(); 
       
    for (i=0 ;i<sec_word ; i++) 
    { 
        arr[y[i] - 97] += 1; 
    } 
    for (i=0 ;i<first_word ; i++) 
    { 
        if (arr[x[i] - 97] > 0){ 
            c += 1; 
            arr[x[i] - 97] -= 1; 
        } 
        else break; 
    } 
    return c; 
} 

ll LengthLCS(string rose1, string rose2) {
    ll len1 = rose1.size()-1;
    ll len2 = rose2.size()-1;
    ll k=0;
    while(len1 >= 0 && len2 >= 0 && rose1[len1] == rose2[len2]) {
        len1--;
        len2--;
        k++;
    }
    return rose1.substr(rose1.size()-k,k).length();
}


int main() {
    BLACKPINK
    ll t,n;
    string x;
    cin >> t;
    while(t--) {
        cin >> n;
        vector<string> v;
        for(ll i=0;i<n;i++) {
            cin >> x;
            v.push_back(x);
        }

        ll len = 0, prefix = 0, suffix = 0;
        ll bstan = 0;   // beauty of stanza
        ll bverse = 0;  // beauty of verse
        if(n%2 == 0) {
            sort(v.begin(), v.end(), greater<string>());   // group words
            for(ll i=0; i<n; i+=2) {
                string temp = v[i+1];
                prefix = LengthLCP(v[i],temp);
                suffix = LengthLCS(v[i], temp);
                // cout << "p : " << prefix << " " << "s : " << suffix << endl;
                bstan = pow(min(prefix, suffix),2);
                bverse+=bstan;
            }
            cout << bverse << endl;
        } else {
            sort(v.begin(), v.end());   // group words
            for(ll i=0; i<n; i+=2) {
                string temp = v[i+1];
                prefix = LengthLCP(v[i],temp);
                suffix = LengthLCS(v[i], temp);
                // cout << "p : " << prefix << " " << "s : " << suffix << endl;
                bstan = pow(min(prefix, suffix),2);
                bverse+=bstan;
            }
            cout << bverse << endl;
        }
    }
    return 0;
}