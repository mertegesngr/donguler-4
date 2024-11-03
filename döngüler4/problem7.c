#include <stdio.h>

int main() {
    int x;  // Kullanıcıdan alınan değeri tutacak değişken

    printf("Bir sayı girin: ");
    scanf("%d", &x);  // Kullanıcıdan bir tam sayı alır
    printf("\n");

    // Dış döngü: Satır sayısını kontrol eder
    for (int i = 1; i <= x; i++) {
        // İç döngü: Her satırda 'i' kadar değer yazdırır
        for (int j = 1; j <= i; j++) {
            // Eğer j'nin durumu (tek veya çift) ile i'nin durumu aynıysa
            if (j % 2 == i % 2) {  
                printf("1");  // '1' yazdırır
            } else {  // Eğer j'nin durumu farklıysa
                printf("0");  // '0' yazdırır
            }
        }
        printf("\n");  // Bir satır tamamlandıktan sonra alt satıra geçer
    }

    return 0; 
}
