#include <bits/stdc++.h>
#define BLACKPINK ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int
using namespace std;

int main() {
    BLACKPINK
    ll t,n;
    cin >> t;
    while(t--) {
        cin >> n;
        int a[n+1], d[n+1];     // attack array & defence array
        for(int i=1; i<=n; i++) {
            cin >> a[i];
        }
        a[0] = a[n];
        a[n+1] = a[1];
        for(int i=1; i<=n; i++) {
            cin >> d[i];
        }
        d[0] = d[n];
        d[n+1] = d[1];

        int maxdefence = 0;
        for(int i=1; i<=n; i++) {
            if(d[i] > (a[i-1] + a[i+1])) {
                maxdefence = max(maxdefence, d[i]);
            }
        }

        if(maxdefence == 0) cout << -1 << endl;
        else cout << maxdefence << endl;

    }
    return 0;
}