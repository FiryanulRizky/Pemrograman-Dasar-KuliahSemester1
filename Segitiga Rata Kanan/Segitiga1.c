#include <stdio.h>

int main ()

{
    int angka,i,a,j;
    printf("masukkan angka :");
    scanf("%d",&angka);

    for(i=1;i<=angka;i++)
    {
        for(j=i;j<angka;j++)
        {
            printf(" ");
        }
        for(a=1;a<=i;a++)
        {
            printf("%d",a);
        }
        printf("\n");
    }
    return 0;
}
