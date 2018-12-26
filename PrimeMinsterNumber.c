#include <stdio.h>
int main(){
	int a,b,i,j,k,copy,x,sum,count,sumcount;
	scanf("%d %d", &a, &b);

	for(i=a; i <= b; i++) {
	    sumcount=0;
	    sum=0;
	    count=0;

	    for(j=2;j<i;j++) {
        if(i%j==0) {
            count++;
            break;
        }
    }

    if(count == 0) {
        copy = i;

        while(copy>0) {
            x = copy%10;
            sum = sum + x;
            copy = copy/10;
        }


	    for(k=2;k<sum;k++) {
        if(sum%k==0) {
            sumcount++;
            break;
        }
	    }
        if(sumcount==0)
        printf("%d ",i);
	}
}
return 0;
}