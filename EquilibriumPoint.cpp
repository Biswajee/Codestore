/*
Given an array A of N positive numbers. The task is to find the position where equilibrium first occurs in the array. Equilibrium position in an array is a position such that the sum of elements below it is equal to the sum of elements after it.

Input:
The first line of input contains an integer T, denoting the number of test cases. Then T test cases follow. First line of each test case contains an integer N denoting the size of the array. Then in the next line are N space separated values of the array A.

Output:
For each test case in a new  line print the position at which the elements are at equilibrium if no equilibrium point exists print -1.

Constraints:
1 <= T <= 100
1 <= N <= 106
1 <= Ai <= 108

Example:
Input:
2
1
1
5
1 3 5 2 2

Output:
1
3
*/

#include <bits/stdc++.h>
#include <vector>
#define ll long long int
#define BLACKPINK ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

int go(ll a[], int x, int n) {
    ll jennie = 0, jisoo = 0; 
    for(int i=0; i<x; i++) {
        jennie += a[i];
    }
    for(int i=x+1; i<n; i++) {
        jisoo +=a[i];
    }

    if(jennie == jisoo) return 1;
    else return 0;
}


int main() {
    BLACKPINK
    ll t,n;
    cin >> t;
    while(t--) {
        cin >> n;
        ll arr[n];
        memset(arr,0,n);
        int flag=0,res=0;
        for(int i=1; i<=n; i++) {
            cin >> arr[i];
        }
        ll before=0, after=0;
        if(n==1) cout << 1 << endl;
        else {
            for(int i=0; i<n; i++) {
                res = go(arr, i, n);
                if(res == 1) { cout << i+1 << endl; flag = 1; break; }
            }
            if(flag == 0) cout << -1 << endl;
        }
    }
 }