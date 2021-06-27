#include <stdio.h>

int main ()

{
    int angka,i,a;
    printf("masukkan angka :");
    scanf("%d",&angka);

    for(i=0;i<=angka;i++)
    {
        for(a=1;a<=i;a++)
            {
            printf("%d",a);
        }
           printf("\n");
    }
    return 0;
}
