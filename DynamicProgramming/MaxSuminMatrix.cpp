/*
    We have a matrix of N rows and M columns,
    where N, M < 1000
    We have to start at (0,0) and reach (n,m). We can only move right 
    or down and we have to print the maximum sum path obtained. 
*/

#include <bits/stdc++.h>

using namespace std;

const int N = 1003;
int n, m, a[N][N], dp[N][N];

int go(int i, int j) {
    return 0;
} 


int main() {
    int i, j;
    cin >> n >> m;

    for(int i=0; i < n; i++) {
        for(int j=0; j < m; j++) {
            cin >> a[i][j];
        }
    }
    return 0;
}