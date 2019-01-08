#include <bits/stdc++.h>
#define blackpink ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int
using namespace std;

int main() {
    blackpink
    
    ll n,m,stop=0;    
    cin >> n >> m;
    pair<ll,ll> arr[n], brr[m];
    
    for(int i=0; i < n; i++) {
        cin >> arr[i].first;
        arr[i].second=i;
    }
    
    for(int i=0; i < m; i++) {
         cin >> brr[i].first;
        brr[i].second=i;  
    }
    sort(arr,arr+n);
    sort(brr,brr+m);
    
    
    map<ll,ll> mp;
    std::vector<pair<ll,ll>> num ;
    ll cc= n+m-1;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            ll temp=arr[i].first+brr[j].first;
            if(mp[temp]==0 && cc>0){
                num.push_back({arr[i].second,brr[j].second});
                mp[temp]++;
                cc--;
            }
            if(cc<=0)break;
            
            temp=arr[n-i-1].first+brr[m-j-1].first;
            if(mp[temp]==0 && cc>0){
                num.push_back({arr[n-i-1].second,brr[m-j-1].second});
                mp[temp]++;
                cc--;
            }
            if(cc<=0)break;
        }
        if(cc<=0)break;
    }
    for(auto i:num)cout<<i.first<<' '<<i.second<<endl;


    return 0;
}

















// #include <bits/stdc++.h>
// #define blackpink ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #define ll long long int
// using namespace std;

// int main() {
//     blackpink
    
//     ll n,m,stop=0;    
//     cin >> n >> m;
//     ll arr[n], brr[m];
    
//     for(int i=0; i < n; i++) {
//         cin >> arr[i];
//     }
//     for(int i=0; i < m; i++) {
//          cin >> brr[i];   
//     }
    
//     map<ll, pair<ll, ll>> sum;
//     ll k = 0;
//     for(int i = 0; i < n; i++) {
//         for(int j = 0; j < m; j++) {
//             k = arr[i] + brr[j];
//             if(sum.find(k) == sum.end())
//                 sum[k] = make_pair(i,j);
//         }
//     }

//     ll count = n+m-1;
//     map<ll, pair<ll, ll>>:: iterator it;
//     for(it = sum.begin(); it != sum.end(); ++it) {
//         cout << it->second.first << " " << it->second.second << "\n";
//         count--;
//         if(count == 0) {
//             break;
//         }
//     } 
//     return 0;
// }