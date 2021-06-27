#include <stdio.h>
int main()
{
int D[20],temp,a,b,n=10;
printf("Program Sederhana Mengurutkan 10 Elemen Angka\n");
printf("=============================================\n\n");
printf("\nMasukkan %d elements : \n",n);
for(a=0;a<n;a++){
printf("\nInput Nilai [%d] : ",a);
scanf("%d",&D[a]);
}
printf("\nSebelum diurutkan : \n");
for(a=0;a<n;a++){printf("%d ",D[a]);}
for(a=0;a<(n-1);a++){ for(b= a+1;b<n;b++){
if(D[a]>D[b]){
temp=D[a];
D[a]=D[b];
D[b]=temp;
}
}
}
printf("\n\nHasil urutan dari terkecil dan terbesar : \n");
for(a=0;a<n;a++){printf("%d ",D[a]);}
printf("\n");
}

