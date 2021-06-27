#include <stdio.h>

int main ()
{
    int a,b,i,j;
    float rata;
    printf("Program Penjumlahan dan Pengurangan Matriks\n");
    printf("===========================================\n\n");
    printf("Ketik Jumlah Baris : ");
    scanf("%d",&a);
    printf("Ketik Jumlah Kolom : ");
    scanf("%d",&b);
    int bil1[a][b],bil2[a][b],bil3[a][b],bil4[a][b];

    printf("Ketik Nilai Anggota Kelompok 1\n");
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            printf("Bil Kelompok 1 [%d] [%d] : ",i+1,j+1);
            scanf("%d",&bil1[i][j]);
        }
    }
    printf("Ketik Nilai Anggota Kelompok 2\n");
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            printf("Bil Kelompok 2 [%d] [%d] : ",i+1,j+1);
            scanf("%d",&bil2[i][j]);
        }
    }
    printf("\nPenjumlahan anggota kedua kelompok\n");
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            printf("Bil [%d][%d] = %d\n",i+1,j+1,bil1[i][j]+bil2[i][j]);
        }
    }
    printf("\nPengurangan anggota kedua kelompok\n");
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            if(bil1[i][j]<bil2[i][j])
            {
             printf("Bil [%d][%d] = %d\n",i+1,j+1,bil2[i][j]-bil1[i][j]);
            }
            else
            {
             printf("Bil [%d][%d] = %d\n",i+1,j+1,bil1[i][j]-bil2[i][j]);
            }
        }
    }
    return 0;
}
