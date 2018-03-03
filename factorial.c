#include <stdio.h>
#include<math.h>
int main(void) 
{
int n,po=1;
scanf("%d",&n);
for(int i=1;i<=n;i++)
{
po=po*i;	
}
printf("%d",po);

	return 0;
}
