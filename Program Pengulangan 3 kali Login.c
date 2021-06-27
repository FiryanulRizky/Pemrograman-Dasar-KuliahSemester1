#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int pin,i;
    printf("Program Pengulangan 3 kali Login\n");
    printf("================================\n\n");

    for (i=1;i<=3;i++)
    {
        printf("Login Attemp : %d\n",i);
        printf("Enter your pin number : ");
        scanf("%d",&pin);
        if (pin == 1234)
        {
            printf("\nLogin Success !!\n\n");
        }
        else {
            printf("\nLogin Salah\n\n");
        }
    }
    return 0;
}
