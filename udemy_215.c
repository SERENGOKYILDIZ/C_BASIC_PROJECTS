/*

*/
#include <stdio.h>
typedef struct{
	char ad[20];
	char soyad[20];
	int yas;
}oyuncu;
typedef struct{
	char takimAdi[10];
	oyuncu Oyuncu1;
	oyuncu Oyuncu2;
}ekip;
void Oyuncu_Ata(oyuncu *oyuncuk)
{
	fflush(stdin);
	printf("-Oyuncu adi ne olsun:     ");
	gets(oyuncuk->ad);
	printf("-Oyuncu soyadi ne olsun:  ");
	gets(oyuncuk->soyad);
	printf("-Oyuncu yasi ne olsun:    ");
	scanf("%d",&oyuncuk->yas);
}
void Ekip_Ata(ekip *ekipcik)
{
	fflush(stdin);
	printf("-Ekip adi ne olsun:       ");
	gets(ekipcik->takimAdi);
	printf("-OYUNCU 1-\n");
	Oyuncu_Ata(&ekipcik->Oyuncu1);
	printf("-OYUNCU 2-\n");
	Oyuncu_Ata(&ekipcik->Oyuncu2);
}
void Ekipleri_Basir(ekip ekipcik[], int N)
{
	int i;
	for(i=0;i<N;i++)
	{
		printf("==========================\n\n");
		printf("\t--%d.TAKIM--\n\n",i+1);
		printf("\t TAKIM ADI: %s\n\n",ekipcik[i].takimAdi);
		printf("\t OYUNCU 1\n");
		printf("\t ADI:    %s\n",ekipcik[i].Oyuncu1.ad);
		printf("\t SOYADI: %s\n",ekipcik[i].Oyuncu1.soyad);
		printf("\t YASI:   %2d\n\n",ekipcik[i].Oyuncu1.yas);
		printf("\t OYUNCU 2\n");
		printf("\t ADI:    %s\n",ekipcik[i].Oyuncu2.ad);
		printf("\t SOYADI: %s\n",ekipcik[i].Oyuncu2.soyad);
		printf("\t YASI:   %2d\n",ekipcik[i].Oyuncu2.yas);
		printf("\n==========================\n\n");
	}	
}
int main()
{
	int N;
	printf("Kac adet takim olsun: ");
	scanf("%d",&N);
	ekip Ekipler[N];
	int i;
	for(i=0;i<N;i++)
	{
		printf("====================================================\n\n");
		printf("\t--%d.TAKIM ATAMASI--\n\n",i+1);
		Ekip_Ata(&Ekipler[i]);
		printf("====================================================\n\n");
	}
	Ekipleri_Basir(Ekipler, N);
	return 0;
}
