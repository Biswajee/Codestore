#include <iostream>
#include <vector>
#include <algorithm>
#define MOD 1000000007
#define ll long long
#define BLACKPINK ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
int main() {
    BLACKPINK
    ll t,n,x;
    cin >> t;
    while(t--) {
        cin >> n;
        ll arr[n]={0};
        for(ll i=0; i<n; i++) {
            cin >> x;
            arr[i]=x%MOD;
        }

        sort(arr, arr+n, greater<int>());

        ll maxprofit=0, tempprofit=0;
        for(ll i=0; i<n; i++) {
            if(arr[i]-i > 0) tempprofit=arr[i]-i;
            else tempprofit=0;
            maxprofit+=(tempprofit%MOD);
        }
        cout << maxprofit%MOD << endl;
    }
    return 0;
}