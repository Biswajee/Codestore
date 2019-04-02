#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main() {
    int t,n,x;
    vector<int> product;
    cin >> t;
    while(t--) {
        int mul = 1; 
        cin >> n;
        for(int i=0; i<n; i++) {
            cin >> x;
            mul = mul * x;
        }
        product.push_back(mul);
    }
    return 0;
}