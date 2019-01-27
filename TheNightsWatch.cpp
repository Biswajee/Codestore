// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int t, n;
//     string s;
//     cin >> t;
//     while(t--) {
//         // map<int, int> mp;
//         int isOne = 0, efilled = 0, ofilled = 0, enfilled = 0, onfilled = 0;
//         cin >> n >> s;
//         for(int i=0; i<n; i++) {
//             // mp[i] = s[i];
//             if(s[i] == '1') {
//                 isOne = 1;
//                 if(i%2 == 0) {
//                     // even filled...
//                     efilled++;
//                 } else {
//                     // odd filled...
//                     ofilled++;
//                 }
//             } else {
//                 if(i%2 == 0) {
//                     enfilled++;
//                 } else {
//                     onfilled++;
//                 }
//             }
//         }
//         //All places are empty...
//         if(isOne == 0) {
//             if(n%2 == 0) cout << n/2 << endl;
//             else cout << (n+1)/2 << endl;
//         }
//         else {
//             if(efilled > 0 && ofilled == 0) {
//                 cout << (n/2) - efilled << endl;
//             } 
//             else if(efilled == 0 && ofilled > 0) {
//                 cout << ((n+1)/2) - ofilled << endl;
//             }
//             else {
//                 cout  << "I don't know" << endl;
//             } 
//         }
//     }
//     return 0;
// }




#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, n;
    string s;
    cin >> t;
    while(t--) {
        // map<int, int> mp;
        int isOne = 0, Ones = 0, Zeroes = 0;
        cin >> n >> s;
        for(int i=0; i<n; i++) {
            // mp[i] = s[i];
            if(s[i] == '1') {
                isOne = 1;
                Ones++;
            }
        }
        //All places are empty...
        if(isOne == 0) {
            if(n%2 == 0) cout << n/2 << endl;
            else cout << (n+1)/2 << endl;
        }
        else {
            //  if(n == 1) { if(s[0] == '0') cout << 1 << endl; else cout << 0 << endl;}
             
             
        }
    }
    return 0;
}