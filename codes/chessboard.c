#include <stdio.h>

int main() {
    int n, i, l, r, u, d;
    
    printf("\nEnter position of Queen : ");
    scanf("%d", &n);
    
    l =(n)%8;
    r =8-l;
    u =(n)/8;
    d = 7-u;
    printf("\nAll the trajectories of the Queen from position %d:\n", n);
     printf("\nLeft:");
  for (i =l-1;i>=0;i--) {
      
        printf("%d ",n-i);
    }
    printf("\nRight:");
    for (i=1;i<= r;i++) {
      
        printf("%d ",n+i);
    }
    printf("\nUpward:");
    for (i = u;i>0;i--) {
      
        printf("%d ",n-i*8);
    }
    printf("\nDownward:");
    for (i= 1;i<=d;i++) {
      
        printf("%d ",n+i*8);
    }
    
    printf("\nUpward-Left:");
    if(n%8!=1){
     for (i=1;i<=u&&i<=l;i++){
        printf(" %d",n-i*9);
    }
}
    return 0;
}
