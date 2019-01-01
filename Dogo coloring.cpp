// O(N^2) Approach

# include <stdio.h>
int main() {
	long long int n,i,j, count[26], flag=0;
	char str[100000];
	scanf("%d", &n);
	scanf("%s", str);
	
	if(n==1) {
		printf("Yes\n");
	}
	else {
		for(i=0; i<n; i++) {
			for(j=0; j<i; j++) {
				if(str[i]==str[j])
				count[i]++;
			}
		}
		
		for(i=0; i<n; i++) {
			if(count[i]>0) {
				printf("Yes\n");
				flag = 1;
				break;
			}
		}
		if(flag == 0)
		printf("No\n");
	}
}
