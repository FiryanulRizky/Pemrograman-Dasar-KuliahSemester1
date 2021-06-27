#include <stdio.h>

int main()
{
    int i,num,angka,x=0,y=angka;
    printf("Program Menentukan Bilangan Terbesar dan Terkecil\n");
    printf("==================================================\n\n");
    printf("Masukan Banyaknya Bilangan yang Anda inginkan : ");
    scanf("%d",&num);

    for(i=1;i<=num;i++)
    {
        printf("\nMasukan Bilangan %d : ",i);
        scanf("%d",&angka);
        if(angka>x)
        {
            x=angka;
        }
        if(angka<y)
        {
            y=angka;
        }

    }
    printf("\nBilangan terbesar adalah %d",x);
    printf("\nBilangan Terkecil adalah %d\n",y);
    return 0;
}
