#include <bits/stdc++.h>
#include <algorithm>
#include <vector>
#define ll long long int
#define BLACKPINK ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

int coprime(int a, int b) {    
    return (__gcd(a, b) == 1)?1:0; 
} 

set<int> coprimeset(int arr[], int n) {  
    int count = 0; 
    set<int> s; 
    for (int i = 0; i < n; i++) {  
        for (int j = i+1; j < n; j++) {
            if (coprime(arr[i], arr[j])) {
                s.insert(arr[i]);
                s.insert(arr[j]); 
            }          
        }
    }
    return s; 
}

// int main() {
//     int t,n;
//     cin >> t;
//     while(t--) {
//         cin >> n;
//         int arr[n];
//         for(int i=0; i<n; i++) {
//             cin >> arr[i];
//         }
//         set<set<int>> s;
//         set<int> res = coprimeset(arr, n);
//         for(int x : res) cout << x << endl;
//     }
//     return 0;
// }

void solve() {
    ll t,n;
    cin >> t;
    while(t--) {
        cin >> n;
        if(n<=4) {
            cout << 1 << endl;
            cout << n << " ";
            for(int i=0; i<n; i++) cout << i+1 << " ";
        } 
        else {
            ll k=4;
            cout << (ll)(n/2) << endl;
            cout << 3 << " " << 1 << " " << 2 << " " << 3 << "\n";
            for(ll i=k; i<n; i+=2) {
                if((n-k) >= 1) {
                    cout << 2 << " "<< i << " " << i+1 << "\n";
                }
            }
            if(!(n&1)) cout << 1 << " " << n << "\n";
        }

    }
}


// int main() {
//     BLACKPINK
//     int t,n;
//     cin >> t;
//     while(t--) {
//         int n;
//         cin >> n;
//         string s="";
//         if(n == 1) {
//             s.append("1");
//             s.append("\n");
//             s.append("1");
//             s.append(" ");
//             s.append("1");
//             s.append("\n");
//         } else {
//             s.append(to_string(n/2)+"\n");
//             if(n%2==0) {
//                 for(int i=1; i<n; i+=2) { 
//                     s.append(2+" "+to_string(i));
//                     s.append(" "+to_string(i+1));
//                     s.append("\n");
//                 }
//             }
//             else {
//                 s.append("3");
//                 s.append(" ");
//                 s.append("1");
//                 s.append(" ");
//                 s.append("2");
//                 s.append(" ");
//                 s.append("3");
//                 s.append("\n");
//                 for(int i=4; i<n; i+=2) {
//                     s.append("2");
//                     s.append(" ");
//                     s.append(to_string(i));
//                     s.append(" ");
//                     s.append(to_string(i+1));
//                     s.append("\n");
//                 }
//             }
//             // cout << s.length() << endl;
//         }
//         cout << s << endl;
//     }
//     return 0;
// }


int main() {
    BLACKPINK
    solve();
    return 0;
}