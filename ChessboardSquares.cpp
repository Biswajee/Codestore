/*
Find total number of Squares in a N*N chessboard.

Input:
The first line contains an integer T, depicting total number of test cases. 
Then following T lines contains an integer N that is the side of the chessboard.

Output:
Each seperate line showing the maximum number of squares possible.

Constraints:

1 ≤ T ≤ 100
1 ≤ N ≤ 100

Example:

Input :
2
1
2

Output :
1
5
*/
#include <iostream>
using namespace std;

int go(int n) {
    if(n == 1) return 1;
    return n*n + go(n-1);
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        cout << go(n) << endl;
    }
    return 0;
}