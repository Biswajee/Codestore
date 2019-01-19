#include <bits/stdc++.h>
#define BLACKPINK ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
int main() {
    BLACKPINK
    int n,m,a, flag=0;  // arr[100005]
    // vector<int> res;
    // vector<int>::iterator it;
    cin >> n >> m;
    int count[n+1] = {0};
   // input
    for(int i=0; i < m; i++) {
        cin >> a;
        // arr[i] = a;
        count[a]++;
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
    return 0;
}