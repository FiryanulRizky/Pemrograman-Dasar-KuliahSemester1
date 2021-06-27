#include <stdio.h>

int main ()
{
    int a,klpx[5],klpy[5],klpz[5];
    printf("Program Perkalian Array\n");
    printf("=======================\n\n");
    printf("Ketikkan Anggota Kelompok I\n");
    for(a=0;a<5;a++)
    {
        printf("Bil [%d] = ",a+1);
        scanf("%d",&klpx[a]);
    }
    printf("\nKetikkan Anggota Kelompok II\n");
    for(a=0;a<5;a++)
    {
        printf("Bil [%d] = ",a+1);
        scanf("%d",&klpy[a]);
    }
    printf("\nHasil Kelompok III\n");
    for(a=0;a<5;a++)
    {
        klpz[a]=klpx[a]*klpy[a];
        printf("Bil [%d] = %d\n",a+1,klpz[a]);
    }
    return 0;
}
