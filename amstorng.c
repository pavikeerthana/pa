#include<stdio.h>
void main()
{
int n,m,s=0,p,i;
scanf("%d",&n);
p=n;
for(i=0;n>0;i++)
{
m=n%10;
s=s+m*m*m;
n=n/10;
}
if(s==p)
printf("armstrong number");
else
printf("not armstrong number");
return 0;
}
