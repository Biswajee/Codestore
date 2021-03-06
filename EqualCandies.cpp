/*

You are distributing N candies to K children. You give 1 candy to the first child, 2 candies to the second child,
3 candies to the third child and so on till K children have received the candies. You then start from the first child
again and give him/her K+1 candies, K+2 candies to the second child and so on till all the candies are distributed.

Find number of candies each child gets.

Input Specifications:
Input 1: Number of candies N.
Input 2: Number of children K.

Output Specifications:
Return array A representing the candies all children get where A[i] is the number of candies received by ith child.

*/

#include <iostream>
#include <algorithm>
#define BLACKPINK ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
int main() {
    BLACKPINK

    int n,k;
    cin >> n >> k;
    int candies[n];

    for(int i=1,j=0; i <= k; i++) {
        if(k-i > i) {
            candies[j++] = i;
            k = k-i;
        }
        else if(k-i < i) {
            candies[j++] = k-i;
            break;          // k=0
        }
        else {
            candies[j++] = i;
            break;          // k=0
        }
        if(j-1 > n-1) {
            j=0;
        }
    }
    
    for(int i=0; i <= n; i++) {
        cout << candies[i] << " ";
    }
    return 0;
}

// ERRONEOUS :(