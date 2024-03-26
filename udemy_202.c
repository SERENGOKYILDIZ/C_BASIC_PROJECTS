/*

*/
#include <stdio.h>
#include <string.h>
typedef struct{
	char ad[20];
	char soyad[20];
	float Puanlar[10];
	double Performans_Puani;
}Yarismaci;
void Performans_Hesabi(float dizi[10], double *ort)
{
	float max,min,top;
	int i;
	max=dizi[0];
	min=dizi[0];
	for(i=0;i<10;i++)
	{
		if(max<dizi[i])
			max=dizi[i];
		if(min>dizi[i])
			min=dizi[i];
		top+=dizi[i];
	}
	*ort=(double)(top-max-min)/8;
}
void Kim_Kazandi(Yarismaci yaris[], int B)
{
	int i,j;
	double max_puan;
	int birinci;
	max_puan=0.0;
	for(i=0;i<B;i++)
	{
		if(max_puan<yaris[j].Performans_Puani)
		{
			max_puan=yaris[j].Performans_Puani;
			birinci=i;
		}
	}
	printf("--------------------------------\n");
	printf("KAZANAN YARISMACI:\n");
	printf("Yarismaci Adi:               %s\n",yaris[birinci].ad);
	printf("Yarismaci Soyad:             %s\n",yaris[birinci].soyad);
	printf("Yarismaci Performans Notu:   %lf\n",yaris[birinci].Performans_Puani);
	printf("--------------------------------\n\n\n");
}
int main()
{
	int N;
	int i,j;
	double ortalama;
	printf("Yarismaya kac kisi katilsin: ");
	scanf("%d",&N);
	Yarismaci Yarismacilar[N];
	for(i=0;i<N;i++)
	{
		printf("%d.Katilan Yarismaci adi: ",i+1);
		scanf("%s",&Yarismacilar[i].ad);
		printf("%d.Katilan Yarismaci soyadi: ",i+1);
		scanf("%s",&Yarismacilar[i].soyad);
		for(j=0;j<10;j++)
		{
			printf("%d.Hakem ne puan verdi: ",j+1);
			scanf("%f",&Yarismacilar[i].Puanlar[j]);
			if(Yarismacilar[i].Puanlar[j]>6)
				Yarismacilar[i].Puanlar[j]=6;
		}
		Performans_Hesabi(Yarismacilar[i].Puanlar,&ortalama);
		Yarismacilar[i].Performans_Puani=ortalama;
	}
	Kim_Kazandi(Yarismacilar,N);
	return 0;
}
