#include<stdio.h>
#include<conio.h>

typedef struct titik
{
    int x;
    int y;
}titik;

void main()
{
    titik T1,T2;
    int dist;

    printf("Program Menentukan Jarak dua titik\n");
    printf("==================================\n\n");
    printf("Masukkan titik koordinat X1 : ");
    scanf("%d",&T1.x);
    printf("Masukkan titik koordinat Y1 : ");
    scanf("%d",&T1.y);
    printf("Masukkan titik koordinat X2 : ");
    scanf("%d",&T2.x);
    printf("Masukkan titik koordinat Y2 : ");
    scanf("%d",&T2.y);

    dist=sqrt(pow((T1.x-T2.x),2)+pow((T1.y-T2.y),2));

    printf("\nJarak 2 titik = %d\n",dist);
    getch();
}
