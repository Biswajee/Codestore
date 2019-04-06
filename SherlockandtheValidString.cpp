#include <bits/stdc++.h>
#include <algorithm>
#include <string.h>
#include <math.h>
#include <vector>
#include <map>
using namespace std;
int main() {
  string str;
  cin >> str;
  map<char, int> mp;

  for (int i = 0; i < str.length(); i++) {
    mp[str[i]]++;
  }
  int maxm = 0, minm = INT_MAX;
  for (auto x : mp) {
      maxm = max(maxm, x.second);
      minm = min(minm, x.second);
  }
//   cout << maxm << " " << minm << endl;
  if(maxm == minm) {
      cout << "YES" << endl;
  }
  else {
      int count = 0;
      for(auto x: mp) {
        //   cout << x.first << " : " << x.second << endl;
          if(!(maxm-1 == x.second)) {
              count++;
          }
      }
    //   cout << "count : " << count << endl;
      if(count > 1 && !(mp.size()-count == 1)) cout << "NO" << endl;
      else cout << "YES" <<endl;
  }
  return 0;
}