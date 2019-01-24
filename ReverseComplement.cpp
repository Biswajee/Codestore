/*
Reverse Complement (100 Marks)
A DNA string is made up of four symbols: A, T, C, and G. Each symbol has a complement:
A and T complement each other.
C and G complement each other.
 
We define the reverse complement of a DNA string to be the string formed by reversing the symbols in the string and taking the complement of each symbol. For example, to find the reverse complement of s = GTCAG, we first reverse GTCAG -> GACTG then we complement each symbol to get CTGAC.

You task is to print the reverse complement of the input string.


Input Format
The only line of input consist of the string s.


Constraints
1 <= |s| <= 1000
Each character s[i] = {A,T,C,G}


Output Format
Print the reverse complement of the given string.
*/

#include <iostream>
#include <algorithm>
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

int main() {
    FAST
    string s,y = "";
    cin >> s;
    reverse(s.begin(), s.end());
    for(char a: s) {
        if(a == 'A') y = y + 'T';
        else if(a == 'T') y = y + 'A';
        else if(a == 'G') y = y + 'C';
        else y = y + 'G';
    }
    cout << y << endl;
    return 0;
}