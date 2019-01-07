#include <bits/stdc++.h>
#define blackpink ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int
using namespace std;

int main() {
    blackpink
    
    ll n,m;    
    cin >> n >> m;
    ll arr[n], brr[m];
    
    for(int i=0; i < n; i++) {
        cin >> arr[i];
    }
    for(int i=0; i < m; i++) {
         cin >> brr[i];   
    }
    
    map<long long int, pair<long long int, long long int>> sum;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            sum[arr[i] + brr[j]] = make_pair(i,j);
        }
    }
    int count = n+m-1;
    map<long long int, pair<long long int, long long int>>:: iterator it;
    for(it = sum.begin(); it != sum.end(); ++it) {
        cout << it->second.first << " " << it->second.second << "\n";
        count--;
        if(count == 0) {
            break;
        }
    } 


    return 0;
}