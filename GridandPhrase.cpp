#include <bits/stdc++.h>
#define BLACKPINK ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

int main() {
    BLACKPINK
    int n,m,count=0;
    cin >> n >> m;


    char arr[n][m]={'0'};
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            cin >> arr[i][j];
        }
    }

    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            if(arr[i][j] == 's') {
                if(arr[i][j+1] == 'a' && arr[i][j+2] == 'b' && arr[i][j+3] == 'a') {
                    if(i<n && j+1<m && j+2 <m && j+3<m) {
                        // cout << "cond 1" << endl;
                        count++;
                    }
                }
                if(arr[i+1][j+1] == 'a' && arr[i+2][j+2] == 'b' && arr[i+3][j+3] == 'a') {
                    if(i+1<n && i+2<n && i+3<n && j+1<m && j+2<m && j+3<m) {
                        // cout << " cond 2" << endl;
                        count++;
                    }
                }
                if(arr[i+1][j] == 'a' && arr[i+2][j] == 'b' && arr[i+3][j] == 'a') {
                    if(j<m && i+1<n && i+2<n && i+3<n) {
                        // cout << "cond 3" << endl;
                        count++;
                    }
                }
                if(arr[i-1][j+1] == 'a' && arr[i-2][j+2] == 'b' && arr[i-3][j+3] == 'a') {
                    if(i-1>=0 && i-2>=0 && i-3>=0 && j+1<m && j+2<m && j+3<m) {
                        // cout << "cond 4" << endl;
                        count++;
                    }
                }
            }
        }
    }


    // for(int i=0; i<10; i++) {
    //     for(int j=0; j<10; j++) {
    //         cout << arr[i][j] << "  ";
    //     }
    //     cout << endl;
    // }

    // cout << endl;
    cout << count << endl;
    return 0;
}