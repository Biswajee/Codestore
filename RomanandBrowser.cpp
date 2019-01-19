#include <bits/stdc++.h>
#define BLACKPINK ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

int main() {
       BLACKPINK

       int n , k; 
       cin >> n >> k;
       vector<int> tabs(n+1); 
       int ans = INT_MIN;

       for (int i = 1 ; i <= n ; i++) 
            cin >> tabs[i];

       for (int i = 1 ; i <= k ; i++) {
              vector<int> temp(tabs); 
              temp[0] = 0; 
              for (int j = i; j <= n; j=j+k) {
                  temp[j] = 0;
              } 

              int check = accumulate(temp.begin() , temp.end() , 0); 
              ans = max(ans , abs(check));
       }
       cout << ans;
}


// int main() {
//     BLACKPINK

//     int n,k,x,b,c,m,e=0,s=0;
//     unordered_map<int,int> U;
//     cin >> n >> k;
//     for(int i=0; i < n; i++) {
//         cin >> x;
//         U[i] = x;
//     }
//     m = 0;
//     for(int b=0; b <= n; b++) {
//         for(int i=0; i <= 100; i++) {
//             c = b + (i*k);
//             U.erase(c);
//         }
//         for(auto j: U) {
//             cout << j.first << " " << j.second << endl;
//             if(j.second == 1)
//                 e++;
//             if(j.second == -1)
//                 s++;
//         }
//         m = max(m, abs(e-s));
//         e = 0, s = 0;
//     }
//     cout << m << endl;
//     return 0;
// }