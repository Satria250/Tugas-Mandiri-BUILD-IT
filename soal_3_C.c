#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() {
char kalimat[1000];
char kata[300][100]; 
int jumlahKata = 0;

    fgets(kalimat, sizeof(kalimat), stdin);
    kalimat[strcspn(kalimat, "\t\n")] = '\0';

    char *token = strtok(kalimat, " ");
    while (token != NULL) {
        int duplikat = 0;
        for (int i = 0; i < jumlahKata; i++) {
            if (strcmp(kata[i], token) == 0) {
                duplikat = 1;
                break;
            }
        }
        if (!duplikat) {
            strcpy(kata[jumlahKata], token); 
            jumlahKata++;
        }
        token = strtok(NULL, " \t\n");
    }
    for (int i = 0; i < jumlahKata; i++) {
        printf("%s", kata[i]);
        if (i < jumlahKata - 1) printf(" ");
    }
    return 0;
}