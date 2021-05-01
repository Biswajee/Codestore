/**
 * Given the number of children and number of candies, assign
 * each child a single candy according to a preference array.
 * Find the total number of ways to distribute the N candies
 * among N childrens satisfying the children's preferences.
 * We'll use dynamic programming and bit-masking to solve this
 * problem.
 **/

#include <iostream>
using namespace std;

long long solve(int like[3][3], int N) {
  
  long long dp[(1<<N)] = {0};

  // No candy is assigned to anyone
  dp[(1<<N)-1] = 1;

  for(int mask=(1<<N)-2; mask>=0; mask--) {

    // count set bits
    int temp = mask;
    int k=0;
    while(temp > 0) {
      int lastbit = temp&1;
      k = k + lastbit;
      temp = temp/2;
    }

    for(int i=0; i<N; i++) {
      if(like[k][i] && !(mask & (1<<i))) {
        dp[mask] += dp[mask | (1<<i)];
      }
    }
  }
  return dp[0];
}

int main() {
  int like[3][3] = {{1,1,1},{1,0,1},{1,1,1}};
  cout << solve(like, 3) << endl;
  return 0;
}
/**
 * Total number of masks: (1 << N-1)
 * Masks are of the form: 111, 011, 101, 110...
 * 000 represents no candies are assigned to any person.
 * 111 represents all candies are assigned to person prefering the candy.
 * Number of ways to assign candies for when mask = 111: 1 way (everybody has a candy already).
 **/