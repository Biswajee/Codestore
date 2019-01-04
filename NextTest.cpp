#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);

    int n,x;
    vector<int> A;

    cin >> n;
    for(int i=0; i < n; i++) {
        cin >> x;
        A.push_back(x);
    }

    sort(A.begin(), A.end());


    // for(auto k : A) {
    //     cout << k << " ";
    // }

    for(int i=1,j=0; i <= A[n-1] + 1; i++) {
        if(i == A[j]) {
            j++;
        }
        else {
            cout << i;
            break;
        }
    }

    return 0;
}