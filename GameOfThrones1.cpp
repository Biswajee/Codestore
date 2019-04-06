#include <bits/stdc++.h>
#include <map>
#include <string.h>
using namespace std;
int main() {
  string str;
  cin >> str;
  map<char, int> mp;

  for (int i = 0; i < str.length(); i++) {
    mp[str[i]]++;
  }
  int count = 0;
  for (auto x : mp) {
    if (x.second % 2 != 0)
      count++;
  }
  if (count > 1)
    cout << "NO" << endl;
  else
    cout << "YES" << endl;

  return 0;
}