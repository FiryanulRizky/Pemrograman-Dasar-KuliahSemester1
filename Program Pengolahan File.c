#include <stdio.h>
#include <conio.h>
#include <string.h>
#define CTRL_Z 26

int main ()
{
    kembali:
    system("cls");
    char nama[100],kelamin[100];
    int umur,pil;
    printf("Program Pengolahan File\n");
    printf("=======================\n\n");
    printf("Pilihan Menu : \n");
    printf("1. Menciptakan File\n");
    printf("2. Baca File\n");
    printf("3. Edit File\n");
    printf("4. Simpan File\n\n");
    printf("Ketik Pilihan : ");
    scanf("%d",&pil);
    switch(pil)
    {
        case 1 :
        printf("\nMasukkan nama : ");
        scanf("%s",&nama);
        printf("Masukkan Jenis Kelamin : ");
        scanf("%s",&kelamin);
        printf("Masukkan umur : ");
        scanf("%d",&umur);

        FILE *keluaran=fopen("test.txt","w");
        fprintf(keluaran," Nama  JK  UMUR \n| %s | %s | %d |",nama,kelamin,umur);
        fclose(keluaran);
        printf("Sukses menambah data !\n");
        getchar();
        break;

        case 2 :
        printf("\nData Yang Tertulis dalam File Adalah : \n");
        FILE *in=fopen("test.txt","r");

           fscanf(in,"%s",&nama);
           fscanf(in,"%s",&kelamin);
           fscanf(in,"%d",&umur);
           printf("+ NAMA + JK + UMUR +\n");
           printf("| %s | %s | %d |",nama,kelamin,umur);

	fclose(in);
	getchar();
    break;
        default : printf("Tidak Sesuai Menu\n");break;return 0;
    }
    printf("\nKembali Ke Menu ?\n");
    printf("[1] Ya\n");
    printf("[2] Tidak\n\n");
    printf("Ketik Pilihan : ");
    scanf("%d",&pil);
    if(pil==1)
    {
        goto kembali;
    }
    else {
        printf("\nTerimakasih !\n");
    }
}
