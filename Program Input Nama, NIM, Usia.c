#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
    char nama[100];
    long int nim;
    int usia;

    printf("Program Sederhana Input Nama, NIM & Usia\n");
    printf("==================================\n\n");
    printf("Masukkan Nama Anda : ");fflush(stdin);
    scanf("%s",&nama);fflush(stdin);
    printf("Masukkan NIM Anda : ");fflush(stdin);
    scanf("%ld",&nim);fflush(stdin);
    printf("Masukkan Usia Anda : ");fflush(stdin);
    scanf("%d",&usia);fflush(stdin);

    system("cls");
    printf("Hasil dari Masukan Anda\n");
    printf("=======================\n\n");
    printf("Nama Anda adalah  %s\n",nama);fflush(stdin);
    printf("NIM Anda adalah  %ld\n",nim);fflush(stdin);
    printf("Usia Anda adalah %d tahun\n",usia);fflush(stdin);

    return 0;
}
