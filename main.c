#include <stdio.h>
#include <stdlib.h>

int main() {
    int sayi, i, max, min, fark;

    // İlk sayıyı al ve referans noktası olarak belirle
    printf("1. sayiyi girin: ");
    scanf("%d", &sayi);
    max = sayi;
    min = sayi;

    // Kalan 9 sayıyı döngü ile al
    for(i = 2; i <= 10; i++) {
        printf("%d. sayiyi girin: ", i);
        scanf("%d", &sayi);

        if(sayi > max) {
            max = sayi;
        }
        if(sayi < min) {
            min = sayi;
        }
    }

    fark = max - min;
    
    printf("\n--------------------");
    printf("\nEn Buyuk: %d", max);
    printf("\nEn Kucuk: %d", min);
    printf("\nFark (Range): %d\n", fark);

    return 0;
}
