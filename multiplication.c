#include<stdio.h>
int main()
{
	int n,i,aa;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	aa=n*i;
	printf("%d*%d=%d\n",n,i,aa);
	}
	return 0;
}
