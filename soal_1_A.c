#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() {
int n;
    scanf("%d", &n);
    int x[n];
    int total = 0;
    int max = 0;
    for (int i = 0; i < n; i++) {
        scanf("%d", &x[i]);
        total += x[i];
        if (x[i] > max) {
            max = x[i];
        }
    }
    int count = 0;
    int days[n]; 
    for (int i = 0; i < n; i++) {
        if (x[i] == max) {
            days[count] = i + 1; 
            count++;
        }
    }
    double percentage = ((double)(max * count) / total) * 100; 
    printf("Max : %d\n", max);
    printf("Count : %d\n", count);
    printf("days :");
    for (int i = 0; i < count; i++) {
        printf(" %d", days[i]);
    }
    printf("\n");
    printf("Percentage : %.3f%%\n", percentage);
    return 0;
}