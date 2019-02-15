/*
You have N toys, and M toy boxes. Initially all boxes are empty, and each box 
can contain only one toy. Each toy has a price and a box number assigned to it. 
If you want to choose a toy, you must put it in its assigned box, and of course 
that box can’t be used for any other toys. You need choose some toys (with their 
boxes) such that summation of their price is maximized.
*/
#include <bits/stdc++.h>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    long long int n, m;
    cin >> n >> m;
    long long int p, b;
    vector<pair<int, int>> prices;
    for(int i=0; i<n; i++) {
        cin >> p >> b;
        prices.push_back(make_pair(p,b));
    }
    sort(prices.begin(), prices.end());
    reverse(prices.begin(), prices.end());

    long long int max_price = 0;
    vector<int> box(m);
    for(auto a : prices) {
        if(find(box.begin(), box.end(), a.second) == box.end()) {
            max_price += a.first;
            box.push_back(a.second);
        }
    }
    cout << max_price << endl;

    return 0;
}