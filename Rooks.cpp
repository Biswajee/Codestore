#include <bits/stdc++.h>

using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, k;
        cin >> n >> k;
        int r[k], c[k];
        for(int i=0; i<k; i++) {
            cin >> r[i] >> c[i];
        }
        int identical=0;
        for(int i=0; i<k; i++) {
            if(r[i] == c[i]) identical++;
        }
        if(identical > 0) {
            cout << n - k << " "; 
            for(int i=0; i<n; i++) {
                if(r[i] == i+1 && c[i] == i+1){}
                else cout << i+1 << " " << i+1  << " ";
            }
        }

    }
    return 0;
}