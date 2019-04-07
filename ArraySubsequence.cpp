/* C++ program to print all possible array subsequence */
#include <bits/stdc++.h>
using namespace std;
void printSubsequence(int arr[], int n) {
    unsigned int opsize = pow(2, n);
    for(int counter=1; counter<opsize; counter++) {
        for(int j=0; j<n; j++) {
            if(counter & (1<<j))
                cout << arr[j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int arr[] = {1, 2, 3, 4};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << "All non-empty subsequence:" << endl;
    printSubsequence(arr, n);
    return 0;
}