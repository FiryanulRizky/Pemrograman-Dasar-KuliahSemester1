#include <stdio.h>
#define MAX_PESAN 160

char matrix [13][13],pesan[MAX_PESAN],*ppesan;
int jum_pesan,jum_matrix,baris,kolom=0;
int i,j,batas_kanan,batas_kiri,batas_atas,batas_bawah;

int main()
{
    printf("Program Sederhana Enkripsi Sandi\n");
    printf("================================\n\n");
	printf("\nMasukan pesan yang akan disandikan:\n\n\t");
	gets(pesan);
	ppesan=&pesan;
	jum_pesan=strlen(pesan);
	if(jum_pesan>MAX_PESAN)
	{
		printf("\n\nPesan yang dimasukan terlalu panjang! 	Silahkan ulangi lagi\n\n");
		main();
	}
	else if (jum_pesan==0)
	{
		printf("Tidak ada pesan yang anda masukan, silahkan 	ulangi lagi!\n\n");
		main();
	}
	for(i=0;i<7;i++)
	{
		if(i==0)
		{
			baris=kolom=6;
			isi_matrix(0,"tengah");
		}
		else
		{
			batas_kanan = batas_bawah = 6+i;
			batas_kiri = batas_atas = 6-i;

			baris=7-i;
			kolom=batas_kanan;

			isi_matrix(batas_bawah,"bawah");
			isi_matrix(batas_kiri,"kiri");
			isi_matrix(batas_atas,"atas");
			isi_matrix(batas_kanan,"kanan");
		}
	}
	printf("\n\n\n======================== Matrix Enkripsi ===============================\n\n");
	for(i=0;i<13;i++)
	{
		printf(" ");
		for(j=0;j<13;j++)
		{
			printf("%c ",matrix[i][j]);
		}
		printf("\n\n");
	}
	printf("\n\n\n==============================================	=============================\n\n");

	printf("Hasil yang telah disandikan : \n");
	for(i=0;i<13;i++)
	{
		for(j=0;j<13;j++)
		{
			if(matrix[i][j]!= ' ')
			printf("%c",matrix[i][j]);
		}
	}

}

void isi_matrix(int batas,char arah[5])
{
	while(0==0)
	{
		if(jum_matrix<=jum_pesan)
		{
			if(*ppesan== ' '||*ppesan == '\0')
			matrix[baris][kolom]= '_';
			else
			matrix[baris][kolom]=*ppesan;

			ppesan++;
		}
		else
		{
			if(jum_matrix<MAX_PESAN)
			matrix[baris][kolom]= '_';
			else
			matrix[baris][kolom]= ' ';
		}
		jum_matrix++;

		if(arah=="tengah")break;
		else if(arah=="bawah")
		{
			baris++;
			if(baris>batas)
			{
				baris--;
				kolom--;
				break;
			}
		}
		else if(arah=="kiri")
		{
			kolom--;
			if(kolom<batas)
			{
				baris--;
				kolom++;
				break;
			}
		}
		else if(arah=="atas")
		{
			baris--;
			if(baris<batas)
			{
				baris++;
				kolom++;
				break;
			}
		}
		else if(arah=="kanan")
		{
			kolom++;
			if(kolom>batas)
			{
				break;
			}
		}
	}
}
