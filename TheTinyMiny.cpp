#include <bits/stdc++.h>
#include <algorithm>
#include <string>

#define BLACKPINK ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

using namespace std;

int main() {
    BLACKPINK
    int t;
    cin >> t;
    while(t--) {
        long long int n,a,ans;
        string y = "";
        cin >> n >> a;
        for(int i=1; i<=a; i++) {
            ans = pow(n, i);
            y = y + to_string(ans);
        }
        // cout << y << endl;
        y.erase(std::remove(y.begin(), y.end(), '0'), y.end());
        
        sort(y.begin(), y.end());

        cout << y << endl;
    }
    return 0;
}