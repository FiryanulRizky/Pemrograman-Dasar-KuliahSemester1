#include <stdio.h>

int main ()
{
    int awal,akhir,i,j,k;
    printf("Masukkan Angka Awal : ");
    scanf("%d",&awal);
    printf("Masukkan Angka Akhir : ");
    scanf("%d",&akhir);

    for(i=awal;i<=akhir;i++)
    {
        printf("%d",i);
        for(j=0;j<=i;j++)
        {
            printf("*");
        }
            printf("\n");
    }

    return 0;
}
