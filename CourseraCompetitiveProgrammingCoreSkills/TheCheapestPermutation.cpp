#include <iostream>
#include <map>
#include <math.h>
#define BLACKPINK ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
int main() {
    BLACKPINK
    int minm = INT_MAX,n,sum=0;
    cin >> n;
    int v[n][n];
    map<int, int> mp;
    for(int i=0; i<n; i++) {
        sum = 0;
        for(int j=0; j<n; j++) {
            cin >> v[j];
            sum+=v[j];
        }
        minm = min(minm, sum);
        mp[minm]=i+1;
    }
    for(int i=1; i<=n; i++) {
        if(i!=mp[minm])
            cout << i << " ";
    }
    return 0;
}