/*
Given an array A of positive integers. Your task is to sort them in such a way that the first part of the array contains odd numbers sorted in descending order, rest portion contains even numbers sorted in ascending order.

Input:
The first line of input contains an integer T denoting the number of test cases. Then T test cases follow. Each test case contains an integer N denoting the size of the array. The next line contains N space separated values of the array.

Output:
For each test case in a new line print the space separated values of the modified array.

Constraints:
1 <= T <= 103
1 <= N <= 107
0 <= Ai <= 1018

Example:
Input:
2
7
1 2 3 5 4 7 10
7
0 4 5 3 7 2 1

Output:
7 5 3 1 2 4 10
7 5 3 1 0 2 4
*/

#include <iostream>
#include <algorithm>
#include <vector>
#define BLACKPINK ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

int main() {
    BLACKPINK
	int t,n,x;
	cin >> t;
	while(t--) {
	    cin >> n;
	    vector<int> even, odd;
	    for(int i=0; i<n; i++) {
	        cin >> x;
	        if(x%2 !=0) odd.push_back(x);
	        else even.push_back(x);
	    }
	    sort(odd.begin(), odd.end());
	    reverse(odd.begin(), odd.end());
	    sort(even.begin(), even.end());

    	for(auto i: odd) cout << i << " ";
    	for(auto i: even) cout << i << " ";
    	cout << endl;
	}
	return 0;
}