#include <iostream>
#define ll long long int
using namespace std;
 
int main() {
	ll white=0,black=0;
	string str;
	for(int i=0; i<8; i++) {
	    cin >> str;
	    for(auto x: str) {
	        // 'q', 'r', 'b', 'n', 'p', 'k'
	        switch(x) {
	            case 'q':
	            black+=9;
	            break;
	            case 'r':
	            black+=5;
	            break;
	            case 'b':
	            black+=3;
	            break;
	            case 'n':
	            black+=3;
	            break;
	            case 'p':
	            black+=1;
	            break;
	            case 'Q':
	            white+=9;
	            break;
	            case 'R':
	            white+=5;
	            break;
	            case 'B':
	            white+=3;
	            break;
	            case 'N':
	            white+=3;
	            break;
	            case 'P':
	            white+=1;
	            break;
	        }
	    }
	}
	if(white == black) cout << "Draw\n";
	else if(white > black) cout << "White\n";
	else cout << "Black\n";
	return 0;
}