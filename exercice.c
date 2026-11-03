#include <stdio.h>

int main() {
    int a;

    printf("Entrer un nombre : ");

    scanf("%d", &a);

    if (a > 0) {
        
        printf("Positif");
    }
    else if (a == 0) {
        printf("nul");
    }

    return 0;
}