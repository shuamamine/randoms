#include <stdio.h>                                                          
int main() 
{
int i=1,j=1,k=1; 
while(k<=3)
{
printf("%d%d%d\n",i,j,k);
i++;
if(i > 3)
{
j++;
i=1;
}
if(j > 3)
{
k++;
j=1;
}
}
return 0;  
}   
