#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool specialChar(char c) {
    int ascii = int(c);
	if((ascii>=65 && ascii<=90) || (ascii>=97 && ascii<=122) || (ascii>=48 && ascii<=57)) 
	    return false;
	return true;
}


int main() {
	int t;
	string str, temp;
	cin >> t;
	while(t--) {
	    temp="";
	    cin >> str;
	    for(char c : str) {
	        if(!specialChar(c)) temp+=c;
	    }
	    reverse(temp.begin(), temp.end());
        // cout << "temp : " << temp << endl;
	    for(int i=0, j=0; i<str.length(); i++) {
	        if(specialChar(str[i])) { cout << str[i]; }
            else { cout << temp[j]; j++; }
	    }
	    cout << endl;
	}
	return 0;
}