#include <bits/stdc++.h>
#include <math.h>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

int go(vector<int> A, int n, int total) {
    long q = total/n;
    long s = 0, ss = 0;
    for(int i=0; i<n; i++) {
        if(ss + A[i] < q) {
            s += q - A[i]; 
        }
        else {
            ss -= q - A[i];
            if(ss < 0) s -= ss;
        }
        ss = 0;
    }
    return s;
}


int main() {
    long long int t;
    cin >> t;
    while(t--) {
        string s;
        cin >> s;
        int n = s.length();
        vector<int> V(26);
        for(char c : s) {
            V[int(c) - int('A')]++;
        }
        // for(int i=0; i < 26; i++) cout << V[i] << " ";
        sort(V.begin(), V.end());
        reverse(V.begin(), V.end());
        int l = min(26, n);
        int ans = INT_MAX;
        int res;
        for(int i=1; i<=l; i++) {
            if(n % i == 0) {
                res = go(V, i, n);
                ans = min(ans, res);
            }
        }
        cout << ans << endl;
    }
    return 0;
}