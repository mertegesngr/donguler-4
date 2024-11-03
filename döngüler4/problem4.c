#include <stdio.h>

int main() {
    int x;  // Kullanıcıdan alınan değeri tutacak değişken
    int i = 1;

    printf("Bir tam sayı girin: ");
    scanf("%d", &x);
    printf("\n");

    // Üst kenar
    for (int i = 1; i <= x; i++) {
        printf("*");  // Üst kenarı çizmek için 'x' kadar yıldız yazdırır
    }
    printf("\n");

    // Yan kenarlar
    for (int c = 1; c <= x - 2; c++) {  // Orta kısımlar için döngü (üst ve alt kenar hariç)
        printf("*");  // Sol kenarı çizmek için yıldız yazdırır

        for (int f = 1; f < x - 1; f++) {
            printf(" ");  // Kare şeklini oluşturmak için boşluklar ekler
        }

        printf("*");  // Sağ kenarı çizmek için yıldız yazdırır
        printf("\n");
    }

    // Alt kenar (Eğer x > 1 ise, çizdir)
    if (x > 1) { 
        for (int i = 1; i <= x; i++) {
            printf("*");  // Alt kenarı çizmek için 'x' kadar yıldız yazdırır
        }
    }

    return 0;
}
