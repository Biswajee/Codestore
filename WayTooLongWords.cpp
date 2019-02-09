#include <bits/stdc++.h>
#define BLACKPINK ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
int main() {
    BLACKPINK
    int t;
    cin >> t;
    while(t--) {
        string x;
        cin >> x;
        if(x.length() >= 11) cout << x[0] << x.length()-2 << x[x.length()-1] << endl;
        else cout << x << endl;
    }
    return 0;
}