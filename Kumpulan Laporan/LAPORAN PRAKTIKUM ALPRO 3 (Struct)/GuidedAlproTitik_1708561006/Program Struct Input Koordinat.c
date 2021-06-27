#include <stdio.h>
#include <conio.h>
//deklarasi struktur Titik
typedef struct Titik
{
    int x;
    int y;
}Titik;

void main()
{
    Titik T1;
    //definisi struktur Titik
    printf("Program Struct Input Koordinat\n");
    printf("==============================\n\n");
    printf("Masukkan Koordinat X titik awal : ") ;
    scanf("%d",&T1.x);
    printf("Masukkan Koordinat Y titik awal : ") ;
    scanf("%d", &T1.y);
    //Tampil hasil titik yang telah dikerjakan
    printf ("\nTitik yang dimasukkan adalah (%d,%d)",T1.x,T1.y);
    getch();
}
