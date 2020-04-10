#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>
#define ll long long
#define BLACKPINK ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

// void showstack(stack<int> s) {
//     cout << endl << "Stack contents : " << endl;
//     while(!s.empty()) {
//         cout << s.top() << endl;
//         s.pop();
//     }
// }

// int main() {
//     int t,n,x;
//     cin >> t;
//     while(t--) {
//         cin >> n;
//         stack<int> s;
//         vector<int> v;
//         for(int i=0; i<n; i++) {
//             cin >> x;
//             if(x==0) s.push(0);
//             if(x==1) {
//                 v.push_back(s.size());
//                 while(!s.empty()) s.pop();
//             }
//         }
//         // showstack(s);
//         int flag=0;
//         for(int a : v) {
//             if(a<5) {
//                 flag=1;
//                 break;
//             }
//         }
//         if(flag==1) cout << "NO" << endl;
//         else cout << "YES" << endl;
//         // for(int a : v) cout << a << " ";
//     }
//     return 0;
// }

// int main() {
//     int t,n;
//     cin >> t;
//     while(t--) {
//         cin >> n;
//         int arr[n], zcount=0;
//         vector<int> v;
//         for(int i=0; i<n; i++) {
//             cin >> arr[i];
//             if(arr[i]==0) zcount++;
//             if(arr[i]==1) {
//                 v.push_back(zcount);
//                 zcount=0;
//             }
//         }
//         int flag = 0;
//         for(int i=0; i<n-2; i++) {
//             if(arr[i]==arr[i+1]) flag=1;

//         }
//         if(*min_element(v.begin(), v.end())==0 && arr[n-1]==1) flag=1;
//         if(flag==1) cout << "NO" << endl;
//         if(flag==0) cout << "YES" << endl; 
//     }
//     return 0;
// }


int main() {
    BLACKPINK
    int  t,n,x; 
    cin >> t;
    while(t--) {
        cin >> n; 
        int prev=-6, fucked=0;
        for(int i=0; i<n; i++) {
            cin >> x;
            if(x==1) {
                if(i-prev < 6) fucked=1;
                prev=i;
            }
        }
        if(!fucked) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}