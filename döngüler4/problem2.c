#include <stdio.h>

int main (){

    int x;  // Kullanıcıdan alınan değeri tutacak değişken

    printf("Bir tam sayı girin: ");
    scanf("%d", &x);  // Kullanıcıdan bir tam sayı alır
    printf("\n");

    // Dış döngü: Satır sayısını kontrol eder
    for (int i = 1; i <= x; i++) {

        // İç döngü: Her satırda satır numarasına bağlı olarak yıldız sayısını belirler
        for (int j = 1; j <= i; j++) {
            printf("*");  // Yıldız karakterini yazdırır
        }

        printf("\n");  // Bir satır tamamlandıktan sonra alt satıra geçer
    }

    return 0;
}
