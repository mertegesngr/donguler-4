#include <stdio.h> 

int main (){

    int x;  // Kullanıcının girdiği değeri tutacak değişken

    printf("Bir değer girin: "); 
    scanf("%d", &x);  // Kullanıcıdan bir değer alır
    printf("\n");

    // Dış döngü: Satır sayısını kontrol eder
    for(int j = 1; j <= x; j++) {

        // İç döngü: Sütun sayısını kontrol eder
        for(int i = 1; i <= x; i++) {
            printf("*");  // Yıldız karakterini yazdırır
        }

        printf("\n");  // Bir satır tamamlandıktan sonra bir alt satıra geçer
    }

    return 0;
}
