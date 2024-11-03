#include <stdio.h>

int main() {
    int x, num = 1;  // Kullanıcıdan alınan değeri tutacak değişken ve sayıları yazdırmak için başlangıç değeri

    printf("Bir tam sayı girin: ");
    scanf("%d", &x);  // Kullanıcıdan bir tam sayı alır
    printf("\n");

    // Dış döngü: Satır sayısını kontrol eder
    for (int i = 1; i <= x; i++) {
        // İç döngü: Her satırda 'i' kadar sayıyı yazdırır
        for (int j = 1; j <= i; j++) {
            printf("%d ", num);  // Ardışık sayıyı yazdırır
            num++;  // Bir sonraki sayıya geçer
        }
        printf("\n");  // Bir satır tamamlandıktan sonra alt satıra geçer
    }

    return 0; 
}
