#include <stdio.h>
#include <stdlib.h>

int main()
{
     int sayi,i,max,min,fark;

    printf("1. sayiyi girin");
        scanf("%d",&max);

        printf("2. sayiyi girin");
        scanf("%d",&min);

    for(i=3;i<=10;i++){
        printf("%d. sayiyi girin",i);
        scanf("%d",&sayi);

        if(max<min){
            min=max;
        }

        else if(max<sayi){
            max=sayi;
        }
        else if(min>sayi){
                min=sayi;
        }




    }
    printf("max:%d\n",max);
    printf("min:%d\n",min);


    fark=max-min;
    printf("fark:%d\n",fark);

}
