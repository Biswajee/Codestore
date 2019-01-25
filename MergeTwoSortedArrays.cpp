// GFG Hard with really simple solution !

#include<bits/stdc++.h>
using namespace std;

int main() {
    long long int t,x,y;
    cin >> t;
    while(t--) {
        cin >> x >> y;
        long long int crr[x+y];
        for(long long int i=0; i<(x+y); i++) {
            cin >> crr[i];
        }
        sort(crr, crr+x+y);
        for(long long int i=0; i<(x+y); i++) {
            cout << crr[i] << " ";
        }
        cout << endl;
    }
    return 0;
}

// #include<bits/stdc++.h>
// using namespace std;
// 
// int main() {
//     long long int t,x,y;
//     cin >> t;
//     while(t--) {
//         cin >> x >> y;
//         int arr[x], brr[y];
//         for(long long int i=0; i<x; i++) {
//             cin >> arr[i];
//         }
//         for(long long int i=0; i<y; i++) {
//             cin >> brr[i];
//         }
//         // sort(arr, arr+x);
//         // sort(brr, brr+y);
//         for(long long int i=0,j=0; (i+j)<(x+y);) {
//             if(arr[i] > brr[j]) {
//                 cout << brr[j] << " ";
//                 j++;
//             } else if(arr[i] < brr[j]) {
//                 cout << arr[i] << " ";
//                 i++;
//             } else {
//                 cout << arr[i] << " " << brr[j] << " ";
//                 i++;
//                 j++;
//             }
//         }
//         cout << endl;
//     }
//     return 0;
// }