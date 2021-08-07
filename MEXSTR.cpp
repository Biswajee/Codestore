/**
 * You are given a binary string S.
 * Chef defines MEX(S) as the smallest non-negative integer,
 * such that its binary representation is not a subsequence of S.
 * 
 * ---------------------------------------------------------------
 * 
 * Simple Cases:
 * S = '000000...'; MEX(S) = '1'
 * There's no 1 in the string so the smallest subsequence not in the string is '1'
 * 
 * S = '111111...'; MEX(S) = '0'
 * There's no 0 in the string so the smallest subsequence not in the string is '0'
 * 
 * ? What is the maximum length 'x' such that all x-length binary strings are present in S.
 * 
 * We count the pairs of 0 and 1 in the string from the RHS (Consider len[i] to be count array)
 * Consider, S = 1001011
 * 
 * S       1 0 0 1 0 1 1
 * len[i]  2 2 1 1 0 0 0
 *         --- --- -----
 **/
#include <iostream>
#include <vector>
#define int long long int
using namespace std;

int main() {
  int t; string s;
  cin >> t;
  while(t--) {
    cin >> s;
    int n = s.length();

    // Initialized two vectors to store the positions of next 0s and 1s
    vector<int> next0(n, -1), next1(n, -1);
    int n0=-1, n1=-1; 

    // Iterate on the string from right to left
    for(int i=n-1; i>=0; i--) {

    }
  }
  return 0;
}