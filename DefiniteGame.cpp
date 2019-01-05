#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long int n;
    cin >> n;
    
    if(n == 2) {
        cout << "2";
    }
    else {
        cout << "1";
    }

    // else {
    //     for(long long int i=1; i<n; i++) {
    //         if(n%i != 0) {
    //             n = n - i;
    //         }
    //         if(n == 1)
    //         break;
    //     }
        
    //     cout << n;
    // }
    return 0;
}