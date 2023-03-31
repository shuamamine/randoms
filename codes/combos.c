#include <stdio.h>                                                                                                                                 
int main() 
{
int i, j, k;                                                                                                                         
for(i=1,j=1,k=1; k<=3;)
{
printf("%d%d%d\n",i,j,k);
i+=1;
if(i > 3)
{
j+=1;
i=1;
}
if(j > 3)
{
k+=1;
j=1;
}
}
return 0;  
}  
