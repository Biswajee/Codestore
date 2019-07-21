#include <bits/stdc++.h>
#define BLACKPINK ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int
using namespace std;
int main() {
    BLACKPINK
    ll n,x,sum1=0,sum2=0;
    cin >> n;
    for(int i=0; i<n; i++) {
        cin >> x;
        sum1 += x;
    }
    for(int i=0; i<n-1; i++) {
        cin >> x;
        sum2 += x;
    }
    cout << sum1-sum2 << endl;
    
    sum1 = 0;
    for(int i=0; i<n-2; i++) {
        cin >> x;
        sum1 += x;
    }
    
    cout << sum2-sum1 << endl;
    return 0;
}