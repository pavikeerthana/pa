#include<stdio.h>
int main()
{
int n,p,i,a,temp=0;
scanf("%d",&n);
p=n;
for(i=0;p!=0;i++)
{
    a=p%10;
    temp=temp*10 + a;
    p=p/10;
}
if(n==temp)
    printf("palindrome");
return 0;
}
