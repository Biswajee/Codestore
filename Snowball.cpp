#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int w,h,u1,u2,d1,d2;

    cin >> w >> h;
    cin >> u1 >> d1;
    cin >> u2 >> d2;
    for(int i=h; i>=0; i--) {
        w = w + i;
        if(i == d1) {
            w = w - u1;
            if (w < 0) { w = 0;}
            // i = i - d1; 
        }

        if(i == d2) {
            w = w - u2;
            if (w < 0) { w = 0;}
            // i = i - d2;
        }
        if(i == 0) {
            cout << w;
            break;
        }
    }

    return 0;
}