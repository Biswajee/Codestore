// Simple approaches are better...

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n,k,count_fwd = 0, count_bk = 0;
    long long int arr[10000];
    cin >> n >> k;

    for(int i=0; i < n; i++) {
        cin >> arr[i];
    }

    for(int i=0; i < n; i++) {
        if(arr[i] > k) {
            break;
        } 
        else
            count_fwd++;
    }

    for(int i=n-1; i>=0; i--) {
        if(arr[i] > k) {
            break;
        }
        else
            count_bk++;
    }

    // Problems solved = (count_fwd + count_bk)
    if(count_fwd != n || count_bk != n)
    cout << (count_fwd + count_bk);
    else if(count_fwd == n)
    cout << count_fwd;
    else
    cout << count_bk;
    
    return 0;
}