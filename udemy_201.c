/*

*/
#include <stdio.h>
#include <string.h>
typedef struct{
	char ad[20];
	char soyad[20];
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
int main()
{
	Yarismaci Eren;
	float Puanlar[10];
	double ortalama;
	int i;
	printf("Yarismaci adi: ");
	scanf("%s",&Eren.ad);
	printf("Yarismaci soyadi: ");
	scanf("%s",&Eren.soyad);
	for(i=0;i<10;i++)
	{
		printf("%d.Hakem ne puan verdi: ",i+1);
		scanf("%f",&Puanlar[i]);
		if(Puanlar[i]>6.0)
			Puanlar[i]=6.0;
	}
	Performans_Hesabi(Puanlar,&ortalama);
	Eren.Performans_Puani=ortalama;
	printf("--------------------------------\n");
	printf("Yarismaci Adi:               %s\n",Eren.ad);
	printf("Yarismaci Soyad:             %s\n",Eren.soyad);
	printf("Yarismaci Performans Notu:   %lf\n",Eren.Performans_Puani);
	printf("--------------------------------\n\n\n");
	return 0;
}
