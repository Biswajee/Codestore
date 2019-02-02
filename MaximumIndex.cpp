// Really tricky bruteforce with strict time limits ! 

#include <bits/stdc++.h>
#define BLACKPINK ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

int main() {
    BLACKPINK
    int t,n;
    cin >> t;
    while(t--) {
        cin >> n;
        int arr[n];
        for(int i=0; i<n; i++) cin >> arr[i];

        int m=0;
        for(int i=0; i<n; i++) {
            for(int j=n-1; j>=0; j--) {
                if(i>=j) break;
                if((j-i) < m) break;
                if(arr[i] <= arr[j]) {
                    m = max(m, (j-i));
                }
            }
        }
        cout << m << endl;
    }
    return 0;
}