#include <stdio.h>

int main ()
{
    int kelipatan,kesamping,batas,i,j;
    printf("Masukkan Kelipatan : ");
    scanf("%d",&kelipatan);
    printf("Masukkan Kesamping : ");
    scanf("%d",&kesamping);
    printf("Masukkan Batas : ");
    scanf("%d",&batas);

    for(i=1;i<=batas;i=i+kelipatan)
    {
        for(j=1;j<=kesamping;j++)
        {
            printf("%d ",i);
        }
        printf("\n");
    }
    return 0;
}
