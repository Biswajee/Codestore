#include <bits/stdc++.h>
#include <unordered_map>
#include <vector>
#define ll long long
using namespace std;

int main() {
    ll t,n;
    cin >> t;
    while(t--) {
        cin >> n;
        vector<ll> v(n); 
        vector<bool> visited(n+2);
        unordered_map<int, int> mp1;
        unordered_map<int, int> mp2;
        
        for(ll i=0; i<n; i++) cin >> v[i];
        for(ll i=1; i<=n; i++) {
            if(visited[i]==false && visited[i-1]==false && visited[i+1]==false) {
                visited[i]=true;
                mp1[v[i-1]]++;
            }
        }

        visited.clear();
        for(ll i=n-1; i>=0; i--) {
            if(visited[i]==false && visited[i-1]==false && visited[i+1]==false) {
                visited[i]=true;
                mp2[v[i-1]]++;
            }
        }


        ll mmax = -1;
        for(auto x: mp2) {
            cout << x.first << " : " << x.second << endl;
        }
        cout << endl;
        // cout << dish_id << endl;
    }
    return 0;
}








// #include <bits/stdc++.h>
 
// using namespace std;
 
// int main()
// {
//     int t;
//     cin >> t;
 
//     while(t--)
//     {
//         int n;
//         cin >> n;
 
//         vector <int> v[1001];
 
//         for(int i=0;i<n;i++)
//         {
//             int x;
//             cin >> x;
 
//             v[x].push_back(i);
//         }
 
//         int curr = 0;
//         int ans = -1;
 
//         for(int i=1;i<=1000;i++)
//         {
//             if(v[i].empty())
//                 continue;
 
//             int cnt = 0;
//             int prev = -1;
 
//             for(int j:v[i])
//             {
//                 if(j > prev)
//                 {
//                     cnt++;
//                     prev = j + 1;
//                 }
//             }
 
//             if(curr < cnt)
//             {
//             	curr = cnt;
//             	ans = i;
//             }
//         }
 
//         cout << ans << endl;
//     }
// } 
