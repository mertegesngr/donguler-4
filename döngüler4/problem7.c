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
            if (j % 2 == 1) {  // Eğer j tek sayı ise
                printf("1");  // '1' yazdırır
            }
            if (j % 2 == 0) {  // Eğer j çift sayı ise
                printf("0");  // '0' yazdırır
            }
        }
        printf("\n");  // Bir satır tamamlandıktan sonra alt satıra geçer
    }

    return 0; 
}
