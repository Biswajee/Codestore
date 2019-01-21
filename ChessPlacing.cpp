#include <iostream>
#include <algorithm>
#include <vector>
#define BLACKPINK ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

using namespace std;

int main() {
    BLACKPINK
    
    int n,x;
    cin >> n;
    vector<int> A(n/2);
    for(int i=0; i < (n/2); i++) {
        cin >> A[i];
    }
    sort(A.begin(), A.end());

    int res1 = 0, res2 = 0;
    for(int i=0; i < n/2; i++) {
        res1 += abs(A[i] - (i*2 + 1));
        res2 += abs(A[i] - (i*2 + 2));
    }

    cout << min(res1, res2) << endl;
    return 0;
}