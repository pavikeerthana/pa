#include <stdio.h>

int main(void) 

{

int s,end,i=0;

printf("enter the  starting number");

scanf("%d",&s);

printf("enter the ending number");

scanf("%d",&end);

for(i=s+1;i<=end;i++)

{

if(i%2==0)

{

printf("%d",i);

}

}

return 0;

}
