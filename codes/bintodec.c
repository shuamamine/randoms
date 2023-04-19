#include<stdio.h>
#include<math.h>
 int main()
 {
     int bin, dec=0, rem, i=0;

     printf("Enter Binary number: ");
     scanf("%d",&bin);

     while(bin!=0)
     {
         rem = bin % 10;
         dec += (rem * pow(2,i));
         bin /= 10;
         i++;
     }

     printf("Decimal = %d ",dec);

     return 0;
 }
