/*

*/
#include <stdio.h>
#define Soru_Sayisi    10
#define Sinif_Mevcudu  30
typedef struct{
	int no;
	char Cevaplar[10];
}Ogrenci;
typedef struct{
	int no;
	int notu;
}Sonuc;
char cevapAnahtari[]={'A','C','D','C','B','B','C','A','D','C'};
char satir;
int notHesapla(Ogrenci insan)
{
	int i=0;
	int dogru=0,yanlis=0;
	while(i<Soru_Sayisi)
	{
		if(insan.Cevaplar[i]==cevapAnahtari[i])
			dogru++;
		else
			yanlis++;
		i++;
	}
	printf("\nDOGRU: %d, YANLIS: %d\n",dogru,yanlis);
	return dogru-(yanlis/4);
}
int main()
{
	int i,j;
	Ogrenci Ogrenciler[Sinif_Mevcudu];
	Sonuc Sonuclar[Sinif_Mevcudu];
	for(i=0;i<Sinif_Mevcudu;i++)
	{
		system("cls");
		printf("%d.Ogrenci Numarasi giriniz: ",i+1);
		scanf("%d",&Ogrenciler[i].no);
		for(j=0;j<Soru_Sayisi;j++)
		{
			printf("%d.Soruya verilen cevap:",j+1);
			scanf("%c ",&Ogrenciler[i].Cevaplar[j]);
		}
		Sonuclar[i].no=Ogrenciler[i].no;
		Sonuclar[i].notu=notHesapla(Ogrenciler[i]);
		printf("--------------------------\n");
		printf("\t%d numarali ogrencinin notu: %d dir.\n",Sonuclar[i].no,Sonuclar[i].notu);
		printf("--------------------------\n\n\n");
		printf("Siradaki ogrenci icin harf giriniz: ");
		scanf(" %c ",&satir);
	}
	return 0;
}
