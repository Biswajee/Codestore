#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    int arr[n];
    for(int i=0; i<n; i++) cin >> arr[i];

    sort(arr, arr+n);
    int count = 0;
    for(int i=0; i<n; i++) {
        for(int j=n-1; j>=0; j--) {
            if(arr[j] == (k-arr[i])) {
                count++;
            }
        }
    }
    return 0;
}