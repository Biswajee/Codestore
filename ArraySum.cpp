#include <bits/stdc++.h>
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

string findsum(string str1, string str2) {
    if(str1.length() > str2.length())
    swap(str1,str2);

    string str = "";
    int n1 = str1.length(), n2 = str2.length();

    // reverse the strings...
    reverse(str1.begin(), str2.end());
    reverse(str2.begin(), str2.end());

    int carry = 0;

    for(int i=0; i<n1; i++) {
        int sum = (str1[i]-48) + (str2[i]-48) + carry;
        str.push_back(sum%10 + 48);
        carry = sum/10;
    }

    // add remaining carry
    if(carry)
    str.push_back(carry + 48);

    // reverse resultant string
    reverse(str.begin(), str.end());
    return str;
}


int main(int argc, const char* argv[]) {
  string str1,str2;
  cin >> str1;
  cin >> str2;
  std::cout << findsum(str1,str2) << endl;
  return 0;
}