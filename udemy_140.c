/*
Asagida verilen ekran gortinttistintin elde edilmesini saglayan programini 
fonksiyon/fonksiyonlar kullanarak yaziniz

Ornek:
------------------------------
Satir sayisini giriniz:4
           c
          ccc
         ccccc
        ccccccc
         +++++
          +++
           +
------------------------------
*/
#include <stdio.h>
void Baklava_Dilimi(int satir)
{
	int bosluk=satir*2;
	int i,j,k;
	for(i=0;i<satir;i++)
	{
		for(j=0;j<bosluk;j++)
		{
			printf(" ");
		}
		for(k=0;k<(2*i-1);k++)
		{
			printf("c");
		}
		bosluk--;
		printf("\n");
		
	}
	for(i=satir;i>0;i--)
	{
		for(j=0;j<bosluk;j++)
		{
			printf(" ");
		}
		for(k=0;k<(2*i-1);k++)
		{
			printf("+");
		}
		bosluk++;
		printf("\n");
	}
}
int main()
{
	int satir_sayisi;
	printf("Kac adet satir olsun: ");
	scanf("%d",&satir_sayisi);
	Baklava_Dilimi(satir_sayisi);
	return 0;
}
