#include <stdio.h>
int main()
{
int i,a,n,b=0,sum=0,sum1=0;
printf("enter limit\n");
scanf("%d", &n);
i=1;
while(i<=n)
{
printf("enter a number\n");
scanf("%d", &a);
sum=b+a;
b=a;
printf("sum is %d\n", sum);
sum1 = sum1 + a;
i++;
}
printf("total is = %d\n", sum1);
return 0;
}
