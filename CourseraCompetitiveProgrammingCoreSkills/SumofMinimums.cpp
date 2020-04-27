#include <iostream>
#include <math.h>
#include <vector>
#define ll long long
#define BLACKPINK ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

int main() {
    BLACKPINK
    ll n, x, sum=0;
    cin >> n;
    vector<ll> arr, temp;
    static vector<vector<ll>> arr_m;
    // ll arr[n], arr_m[LARGE][LARGE];
    // memset(arr_m,0,sizeof(arr_m));
    for(ll i=0; i<n; i++) {
        cin >> x;
        arr.push_back(x);
    }
    for(ll i=0; i<n; i++) {
        for(ll j=0; j<n; j++) {
            temp.push_back(0);
        }
        arr_m.push_back(temp);
        temp.clear();
    }
    
    for(ll i=0; i<n; i++) {
        arr_m[i][i] = arr[i];
        sum+=arr_m[i][i];
    }

    for(ll i=0; i<n; i++) {
        for(ll j=i+1; j<n; j++) {
            arr_m[i][j] = min(arr_m[i][j-1], arr[j]);
            sum+=arr_m[i][j];
        }
    }
    cout << sum << endl;
    return 0;
}