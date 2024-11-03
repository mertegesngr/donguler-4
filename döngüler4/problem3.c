#include <stdio.h>

int main() {
    int x;  // Kullanıcının girdiği değeri tutacak değişken

    printf("Bir tam sayı girin: ");
    scanf("%d", &x);  // Kullanıcıdan bir tam sayı alır
    printf("\n");

    // Dış döngü: Satır sayısını kontrol eder
    for (int i = 1; i <= x; i++) {

        // Boşlukları yazdırma döngüsü
        for (int j = 1; j <= x - i; j++) {
            printf(" ");  // Üçgenin ortalanması için boşluk ekler
        }

        // Yıldızları yazdırma döngüsü
        for (int k = 1; k <= (2 * i - 1); k++) {
            printf("*");  // Yıldız karakterlerini yazdırır
        }

        printf("\n");  // Bir satır tamamlandıktan sonra alt satıra geçer
    }

    return 0;
}
