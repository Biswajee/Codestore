#include <iostream>
#include <algorithm>
#include <vector>
#include <map>

using namespace std;

int main() {
    long long int k,n;
    string str;
    map<char, int> cnt;

    cin >> n;
    cin >> k;
    cin >> str;

    if (k == n) {
        return 0;
    }    

    
    // Count number of occurence of each letter
    for(char c: str) {
        cnt[c]++;
    }

    vector<char> A;

    for(int i=0; i < n; i++) {
        A.push_back(str[i]);
    }


    // Print the vector...
    for(auto i : A)
    cout << i << " ";




    return 0;
}