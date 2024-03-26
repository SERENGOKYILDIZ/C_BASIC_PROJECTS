/*

*/
#include <stdio.h>
#define MusteriSay 5
typedef struct{
	char ad[20];
	char soyad[20];
	int kahvalti;// 0=hyr, 1=evt
	int aksamyemegi;// 0=hyr, 1=evt
	int otel;// 0=otel yok, 1=2 yildizli 2=3 yildizli
	int oda_durum// 0=tek, 1=arkla
}musteri;
void Iki_Yildiz_Secenler(musteri mus[], int N)
{
	printf("--2 Yildizli Secenler--\n");
	int i;
	for(i=0;i<N;i++)
	{
		if(mus[i].otel==1)
		{
			printf("----------------------\n");
			printf("Ad:    %s\n",mus[i].ad);
			printf("Soyad: %s\n",mus[i].soyad);
			printf("----------------------\n\n\n");
		}
	}
}
void Kahvalti_Say(musteri mus[], int N)
{
	printf("--Kahvalti Sayisi--\n");
	int i;
	int sayac;
	for(i=0;i<N;i++)
	{
		if(mus[i].kahvalti==1)
			sayac++;
	}
	printf("Kahvalti sayisi: %d\n",sayac);
}
void Musteri_Odenecek_Tutar(musteri mus, int *Tutar)
{
	int yemek_top;
	int otel_top;
	if(mus.kahvalti)
		yemek_top+=15;
	if(mus.aksamyemegi)
		yemek_top+=35;
	if(mus.otel>0)
		yemek_top*=2;
		
	if(mus.otel==1)
		otel_top=75;
	if(mus.otel==2)
		otel_top=100;
		
	*Tutar=yemek_top+otel_top;
}
int main()
{
	musteri Musteriler[MusteriSay]={
		{
			"Semi Eren",
			"Gokyildiz",
			1,
			0,
			2,
			0
		},
		{
			"Ece",
			"Hekim",
			1,
			1,
			0,
			0
		},
		{
			"Osman Mert",
			"Gokyildiz",
			1,
			1,
			2,
			1
		},
		{
			"Orkun",
			"Yilmaz",
			0,
			0,
			1,
			1
		},
		{
			"Yavuz",
			"Sunum",
			1,
			0,
			1,
			1
		}
	};
	Iki_Yildiz_Secenler(Musteriler,MusteriSay);
	int i;
	int tutar;
	for(i=0;i<MusteriSay;i++)
	{
		Musteri_Odenecek_Tutar(Musteriler[i],&tutar);
		printf("------------------\n");
		printf("\t %d.Musterinin odeyecegi tutar: %d\n",i+1,tutar);
		printf("------------------\n\n");
	}
	return 0;
}
