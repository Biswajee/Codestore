#include <bits/stdc++.h>
#define BLACKPINK ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
int main() {
    BLACKPINK
    int n,m,a, flag=0;  // arr[100005]
    vector<int> A;
    // vector<int>::iterator it;
    cin >> n >> m;
    int count[n+1] = {0};
   // input
    for(int i=0; i < m; i++) {
        cin >> a;
        A.push_back(a);
        count[a]++;
        if(A.size() < n) cout << 0;
        else {
            for(int j=1; j <= n; j++) {
                if(count[j] >= 1) {
                    flag = 0;
                }
                else {
                    flag = 1;
                    break;
                }
            }
            if(flag == 0) {
                cout << 1;
                for (int j = 1; j <= n; j++) {
                    count[j]--;  
                }
            }
            else {
                cout << 0;
            }
        }
    }
    return 0;
}


// A different flavour...
// #include <bits/stdc++.h>
// #define BLACKPINK ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// using namespace std;
// int main() {
//     BLACKPINK
//     int n,m,x, flag;
//     vector<int> A;
//     cin >> n >> m; 
//     int count[n] = {0};
//     for(int i=0; i < m; i++) {
//         flag = 0;
//         cin >> x;
//         A.push_back(x);
//         count[x]++;

//         if(A.size() < n) cout << 0;
//         else {
//             cout << 1;
//             A.clear();
//             for(int i=1; i <= n; i++) {
//                 if(count[i] > 0) {
//                     count[i]--;
//                 }
//                 else {
//                     flag = 1;
//                     break;
//                 }
//             }
//             if(flag == 1) {
//                 cout << 0;
//                 continue;
//             }
//         }
//     }
//     return 0;
// }