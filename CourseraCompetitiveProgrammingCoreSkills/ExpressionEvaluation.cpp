#include <iostream>
#define BLACKPINK ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
bool isNumber(char *a) {
    for(int i=0; i<9; i++) {
        if(atoi(a)==i) return true;
    }
    return false;
}

int main() {
    string str;
    long long res = 0;
    cin >> str;
    for(int i=0; i<str.length(); i++) {
        if(isNumber(&str[i])) res+=atoi(&str[i]);
        else {
            
        } 
    }
}