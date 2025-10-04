#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() {
int n,i,j;
    scanf("%d", &n);
    for( i = 1; i < n; i++){
        for( j = 0; j < n-i-1; j++){
            printf(" ");
        }
        for( j = 0; j < 2*i-1; j++){
            printf("*");
        }
        printf("\n");
    }
    for( j = 0; j < n-2; j++){
        printf(" ");
    }
    printf("*");
    return 0;
}