#include <bits/stdc++.h>
using namespace std;
int main() {
    long long int n,x,sum=0,count=0;
    cin >> n;
    vector<int> A(n);
    for(int i=0; i<n; i++) {
        cin >> x;
        sum +=x;
        if(sum%2 == 1)
        count += 2;
    }
    if(sum%2 == 0) cout << count << endl;
    else cout << "NO" << endl;

    return 0;
}
