#include <stdio.h>

int main() {
    int x, num = 1;

    printf("Bir tam sayı girin: ");
    scanf("%d", &x);
    printf("\n");

    for (int i = 1; i <= x; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", num);
            num++;
        }
        printf("\n");
    }

    return 0;
}
