#include <stdio.h>
#include <math.h>
int main()
{ 
    int x,i,sum=0,c=0,n;
    printf("enter value of x\n");
    scanf("%d", &x);
    sum = (x*x)+x+41;
    for(int i = 2;i<=sqrt(sum);i++)
    {
     if(sum%i==0)
        {
         c++;
         break;
        }
    }
        if(c!=2&&x==41)
        {
            printf("x=41 is when the theorem is false") ;     
        }
        else
        {
            printf("Euler's formula is true");
        }
    
return 0;
}
