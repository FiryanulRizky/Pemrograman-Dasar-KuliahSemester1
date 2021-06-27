#include <stdio.h>

int main ()
{
    int awal,akhir,kelipatan,i,j,t,a;

    printf("Menu : \n");
    printf("\n1. Bintang\n");
    printf("2. Menurun\n");
    printf("\nPilih : ");
    scanf("%d",&a);

    if(a==1)
    {
        printf("\nMasukkan Tinggi : ");
        scanf("%d",&t);
        for(i=1;i<=t;i++)
        {
            for(j=1;j<=i;j++)
            {
                printf(" * ");
            }
            printf("\n");
        }
    }
    else if (a==2)
    {
        printf("\nMasukkan Bilangan Awal : ");
        scanf("%d",&awal);
        printf("Masukkan Bilangan Akhir : ");
        scanf("%d",&akhir);
        printf("Masukkan Kelipatan : ");
        scanf("%d",&kelipatan);

        while(awal>=akhir)
        {
            printf("%d",awal);
            awal=awal-kelipatan;
        }
        while(awal<=akhir)
        {
            printf("%d",awal);
            awal=awal+kelipatan;
        }
    }
    else
    {
        printf("\nInput Salah");
    }
    return 0;
}
