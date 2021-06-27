#include<stdio.h>
#include<conio.h>

struct hari
{
    int d,m,y;
}d1,d2,d;

void main()
{
    int tahun,n1,n2,i,selisih;
    int bulan[12]={31,28,31,30,31,30,31,31,30,31,30,31};

    printf("Masukkan tanggal awal (d m y, misal 11 11 2018) : ");
    scanf("%d %d %d",&d1.d,&d1.m,&d1.y);
    printf("\nMasukkan tanggal tujuan (d m y, misal 21 12 2018) : ");
    scanf("%d %d %d",&d2.d,&d2.m,&d2.y);
    tahun = d.y;
    if(d.m<=2)
    {
        tahun--;
    }
    else
    {
        tahun = tahun / 4 - tahun / 100 + tahun / 400;
    }
    n1 = d1.y*365 + d1.d;
    for(i=0;i<d1.m -1;i++)
    {
        n1+=bulan[i];
        n1+=tahun;
    }
    n2 = d2.y*365 + d2.d;
    for(i=0;i<d2.m -1;i++)
    {
        n2+=bulan[i];
        n2+=tahun;
    }
    selisih = n2-n1;
    printf("\nSelisih hari = %d hari lagi\n",selisih);

    return 0;
}
