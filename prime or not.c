#include<stdio.h>
int main()
{
int a,n,c=0;
scanf("%d",&a);
for(n=2;n<a;n++)
{
if(a%n==0)
c++;
}
if(c==0)
printf("prime number\n");
else
printf("not a prime number\n");
}
