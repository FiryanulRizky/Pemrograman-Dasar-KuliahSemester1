int main(){

    printf("Program Operasi dengan Nilai\n");
    printf("==============================\n\n");
	int x,a=10,b=4,hasil1,hasil2,hasil3,hasil5,hasila,hasilb,hasilc,hasild,hasile,bilangan1,bilangan2;
	float y,hasil4;
	char z;
	double w;

	x=10;		//nilai x diisi dengan nilai 10//
	y=9.45;		//nilai y diisi dengan nilai 9.45/
	z='A';		//nilai z diisi dengan karakter a//
    w=3.0123456789;	//nilai w diisi dengan nilai 3.0123456789//

	hasila = a+b;
	hasilb = a-b;
	hasilc = a*b;
	hasild = a/b;
	hasile = a%b;

	printf("Masukan Bilangan 1 : ");
	scanf("%d",&bilangan1);
	printf("masukan bilangan 2 : ");
	scanf("%d",&bilangan2);

	hasil1 = bilangan1+bilangan2;
	hasil2 = bilangan1-bilangan2;
	hasil3 = bilangan1*bilangan2;
	hasil4 = bilangan1/bilangan2;
	hasil5 = bilangan1%bilangan2;

    printf("\n\nOperasi Tanpa Nilai\n");
    printf("===================\n\n");
    printf("Hasil Operasi %d dengan %d\n\n",bilangan1,bilangan2);
    printf("+---------------------------------------------+\n");
    printf("|       Operasi        |         Hasil      \n");
    printf("+---------------------------------------------+\n");
    printf("|       Penjumlahan    |          %d        \n",hasil1);
    printf("+---------------------------------------------+\n");
    printf("|       Selisih        |          %d        \n",hasil2);
    printf("+---------------------------------------------+\n");
    printf("|       Perkalian      |          %d        \n",hasil3);
    printf("+---------------------------------------------+\n");
    printf("|       Pembagian      |          %.2f        \n",hasil4);
    printf("+---------------------------------------------+\n");
    printf("|       Modulus        |          %d        \n",hasil5);
    printf("+---------------------------------------------+\n\n");

    printf("\n\nOperasi Dengan Nilai\n");
    printf("===================\n\n");
    printf("Hasil Operasi 10 dengan 14 \n\n");
    printf("+---------------------------------------------+\n");
    printf("|       Operasi        |         Hasil       \n");
    printf("+---------------------------------------------+\n");
    printf("|       Penjumlahan    |          %d         \n",hasila);
    printf("+---------------------------------------------+\n");
    printf("|       Selisih        |          %d         \n",hasilb);
    printf("+---------------------------------------------+\n");
    printf("|       Perkalian      |          %d         \n",hasilc);
    printf("+---------------------------------------------+\n");
    printf("|       Pembagian      |          %d         \n",hasild);
    printf("+---------------------------------------------+\n");
    printf("|       Modulus        |          %d         \n",hasile);
    printf("+---------------------------------------------+\n\n");
	return 0;
}
