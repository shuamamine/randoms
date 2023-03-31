#include <stdio.h>                                                                                                                                 
int main() 
{
int i, j, k;                                                                                                                         
for(i=1,j=1,k=1; i<=3;)
{
printf("%d%d%d\n",i,j,k);
k+=1;
if(k > 3)
{
j+=1;
k=1;
}
if(j > 3)
{
i+=1;
j=1;
}
}
return 0;  
}  
