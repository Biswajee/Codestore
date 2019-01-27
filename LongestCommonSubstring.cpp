/*
 Given two strings ‘X’ and ‘Y’, find the length of the longest common substring.

Input:
First line of the input contains no of test cases  T,the T test cases follow.
Each test case consist of 2 space separated integers A and B denoting the size of string X and Y respectively
The next two lines contains the 2 string X and Y.

Output:
For each test case print the length of longest  common substring of the two strings .

Constraints:
1<=T<=200
1<=size(X),size(Y)<=100
*/

#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int xlen, ylen;
        string x,y;
        cin >> xlen >> ylen >> x >> y;
        static int dp[100][100]; 
        dp[0][0] = 0;
        for(int i=1; i<=xlen; i++) {
            for(int j=1; j<=ylen; j++) {
                if(x[i-1] == y[j-1]) {
                    dp[i][j] = dp[i-1][j-1] + 1;
                } else {
                    dp[i][j] = 0;
                }
            }
        }

        // Printing the matrix...
        // for(int i=0; i<xlen; i++) {
        //     for(int j=0; j<ylen; j++) {
        //         cout << dp[i][j] << " ";
        //     }
        //     cout << endl;
        // }
        // cout << "\nRest of program..." << endl;

        int max = 0;
        for(int i=1; i<=xlen; i++) {
            for(int j=1; j<=ylen; j++) {
                if(dp[i][j] > max) max = dp[i][j];
            }
        }
        cout << max << endl;
    }
    return 0;
}