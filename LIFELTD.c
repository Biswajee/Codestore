#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	for(int i=0;i<t;i++)
	{
		char a[3],b[3],c[3];
		scanf("%s",a);
		scanf("%s",b);
		scanf("%s",c);


		if( a[0]=='l' && b[0]=='l' && b[1]=='l')
		{
			printf("yes\n");
			continue;
		}
		if(a[1]=='l' && b[1]=='l' && b[2]=='l')
		{
			printf("yes\n");
			continue;
		}
		if(b[0]=='l' && c[0]=='l' && c[1]=='l')
		{
			printf("yes\n");
			continue;
		}
		if(b[1]=='l' && c[1]=='l' && c[2]=='l')
		{
			printf("yes\n");
			continue;
		}
		printf("no\n");
	}
	return 0;
}
