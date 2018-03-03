#include<stdio.h>
int main()
{
int n,mm,i;
scanf("%d %d",&n,&mm);
for(i=n;i<=mm;i++)
{
if(i%2!=0)
printf("%d\n",i);
}
return 0;
}
