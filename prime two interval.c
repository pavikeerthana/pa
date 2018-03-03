#include<stdio.h>
int main()
{
int n,a,b,i,c;
printf("enter the two limits");
scanf("%d%d",&a,&b);
for(i=a;i<b;i++)
{
c=0;
for(n=2;n<i;n++)
{
if(i%n==0)
c++;
}
if(c==0)
printf("%d\n",i);
}
}
