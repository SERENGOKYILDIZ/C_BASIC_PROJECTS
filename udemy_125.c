/*
5 adet fonksiyon yazin
Kullaniciya karakter dizisi girdiren bir fonksiyon yazin

Kullanicinin girdigi karakter dizisinin kaç elemanli oldugunu bulan bir fonksiyon yazin

Kullanicinin girdigi karakter dizisindeki bosluklari kaldiran bir fonksiyon yazin

Karakter dizisindeki karakterlerin yerlerini sondan basa dogru yer degistiren bir
fonksiyon yazin

Bir tane palendrom fonksiyonu yazin.Bu fonksiyon karakter dizisinin bastan sona ve
sondan basa yaziminda ayni karakter dizisi olup olmadigini kontrol etsin.Eger
öyleyse yani palendromsa 1 göndersin,palendrom degilse O göndersin

Yukaridaki fonksiyonlari kullanarak kullanicidan bir karakter dizisi girmesini isteyen
daha sonra palendrom olup olmadigini ekrana bastiran bir C programi yazin
*/
#include <stdio.h>
#define MAX 40
void Cumle_Okuma(char girdi[MAX])
{
	int i=0;
	scanf("%c",&girdi[i]);
	while(girdi[i]!='\n' && i<MAX)
	{
		i++;
		scanf("%c",&girdi[i]);
	}
	girdi[i]='\0';
}
int Cumle_Sayi_Bulma(char Dizi[MAX])
{
	int i;
	for(i=0;Dizi[i]!='\0';i++);
	return i;
}
void Cumle_Bosluk_Kaldirma(char Dizi[MAX])
{
	int i=0,j=0;
	printf("\nBosluk islemi oncesi:  %s",Dizi);
	for(i=0;Dizi[i]!='\0';i++)
		if(Dizi[i]!=' ')
		{
			Dizi[j]=Dizi[i];
			j++;
		}
	Dizi[j]='\0';
	printf("\nBosluk islemi sonrasi: ");
	for(i=0;Dizi[i]!='\0';i++)
	{
		printf("%c",Dizi[i]);
	}
}
void Cumle_Ters_Cevirme(char Dizi[MAX])
{
	int i,j;
	char Ters[MAX];
	j=Cumle_Sayi_Bulma(Dizi)-1;
	for(i=0;Dizi[i]!='\0';i++)
	{
		Ters[i]=Dizi[j];
		j--;
	}
	Ters[i]='\0';
	printf("\nCumlenin ters hali: ");
	for(i=0;i<Cumle_Sayi_Bulma(Ters);i++)
		printf("%c",Ters[i]);
}
int Cumle_Palendrom_MU(char Dizi[MAX])
{
	int i,j;
	int kosul=1;
	char Ters[MAX];
	j=Cumle_Sayi_Bulma(Dizi)-1;
	for(i=0;Dizi[i]!='\0';i++)
	{
		Ters[i]=Dizi[j];
		j--;
	}
	Ters[i]='\0';
	for(i=0;i<Cumle_Sayi_Bulma(Dizi);i++)
	{
		if(Dizi[i]!=Ters[i])
			kosul=0;
	}
	return kosul;
}
int main()
{
	char Cumle[MAX];
	int a;
	printf("Cumle veya kelime giriniz: ");
	Cumle_Okuma(Cumle);
	int karakter_sayisi=Cumle_Sayi_Bulma(Cumle);
	printf("Karakter sayisi: %d",karakter_sayisi);
	Cumle_Bosluk_Kaldirma(Cumle);
	Cumle_Ters_Cevirme(Cumle);
	a=Cumle_Palendrom_MU(Cumle);
	if(a)
		printf("\nPalendrom VAR");
	else
		printf("\nPalendrom YOK");
	return 0;
}
