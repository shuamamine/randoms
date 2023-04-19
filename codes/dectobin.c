#include<stdio.h>
 int main()
 {
     int dec, bin=0, rem, i=1;

     printf("Enter Decimal number: ");
     scanf("%d",&dec);

     while(dec!=0)
     {
         rem = dec % 2;
         bin += (rem*i); // bin = bin + rem*i
         dec /= 2; //dec = dec / 2
         i *= 10; //i=i*10
     }

     printf("Binary= %d\n",bin);

     return 0;
 }
