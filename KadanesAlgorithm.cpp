#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        long long int n;
        cin >> n;
        long long int arr[n];
        for(long long int i=0; i<n; i++) {
            cin >> arr[i];
        }

        long long int max_so_far = arr[0], max_ending_here = arr[0];
        for(long long int i=0; i<n; i++) {
            max_ending_here = max(arr[i], max_ending_here + arr[i]);
            max_so_far = max(max_so_far, max_ending_here);
        }

        cout << max_so_far << endl;
    }
    return 0;
}

// Alternative solution ... 
#include <iostream>
using namespace std;

int main() {
    int t,n,v;
    int sum = 0, maxv = -9999999;
    cin >> t;
    while(t--) {
        cin >> n;
        for(int i=0; i<n; i++) {
            cin >> v;
            sum = sum + v;
            sum = (sum > v) ? sum : v;
            maxv = (maxv > sum) ? maxv : sum;
        }
        cout << maxv << endl;
    }
    return 0;
}