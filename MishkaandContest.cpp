#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {

    int n,k,x;
    cin >> n >> k;
    vector<int> A;
    
    // insert elements
    for(int i=0; i < n; i++) {
        cin >> x;
        A.push_back(x);
    } 

    for(int i=0; i < n; i++) {
        if(A[0] > k) {
            break;
        } 
        else
            A.erase(A.begin()); // remove first item
    }

    reverse(A.begin(), A.end());
    cout << A.size() << endl;
    for(int i=0; i < A.size(); i++) {
        if(A[0] > k) {
            break;
        } 
        else
            A.erase(A.begin()); // remove first item
    }

    cout << A.size() << endl;
    // Modified Array
    for(auto i = A.begin(); i != A.end(); ++i) {
        cout << *i << " ";
    }
    return 0;
}