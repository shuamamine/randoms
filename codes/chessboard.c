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
   
