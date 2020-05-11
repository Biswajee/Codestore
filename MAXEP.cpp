#include <bits/stdc++.h>
using namespace std;

// int main() {
//     int n,c,in,steps,lg;
//     cin >> n >> c;
//     steps = 1000;
//     for(int i=1; ; i+=steps) {
//         cout << 1 << " " << i << endl;
//         cin >> in;
//         if(in==1) { // broken
//             i=lg;
//             steps = max(1, steps/10);
//             cout << 2 << endl;
//         }
//         if(steps==1) {
//             // interval cannot be reduced further...
//             cout << 3 << " " << i << endl;
//             break;
//         }
//         lg=i;   // last good
//     }
//     return 0;
// }


int main() {
    int n,c;
    cin >> n >> c;
    int cur=1, lg=1, skip=max(1, n/100), bad=n;

    // lambda
    auto dec_skip = [&] {
        skip /= 10;
        skip = max(1, skip);
        cur = min(lg+skip, n);
    };

    while(true) {
        if(cur >=bad) {
            if(skip==1) {
                cout << 3 << " " << cur << endl;
                break;
            }
            dec_skip();
        }
        cout << 1 << " " << cur << endl;
        int in; cin >> in;
        if(in==0) lg=cur, cur+=skip;
        if(in==1) {
            if(skip==1) { cout << 3 << " " << cur << endl; break; }
            else if(cur==1) {
                cout << 3 << " " << 1 << endl;
                break;
            }
            bad = min(bad, cur);
            cout << 2 << endl;
            dec_skip();
        }
    }
    return 0;
}