#include <stdio.h>

int Luas (int x,int y);

main()
{
    int p,l,L;
    printf("panjang = ");
    scanf("%d",&p);
    printf("lebar = ");
    scanf("%d",&l);
    L=Luas(p,l);
    printf("Luas persegi panjang = %d",L);
}

int Luas (int x, int y) {
return (x*y);
}
