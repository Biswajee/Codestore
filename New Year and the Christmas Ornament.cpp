#include<bits/stdc++.h>
using namespace std;

int main() {
	int y,r,b,mini=0,res=0;
	scanf("%d%d%d", &y, &b, &r);
	
	mini = min(min(y,b-1),r-2);
//	printf("%d ", mini);
	
	if(mini==y) {
		res = y + (y+1) + (y+2);
	}
	else if(mini==(b-1)) {
		res = (b-1) + (b) + (b+1);
	}
	else if(mini==(r-2)) {
		res = (r-2) + (r-1) + (r);
	}
	
	printf("%d\n", res);
	return 0;
}
