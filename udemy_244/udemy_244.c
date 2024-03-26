/*
	vize1=%20
	vize2=%20
	final=%60
*/
#include <stdio.h>
#include <string.h>
#define vizeNot  0.2
#define finalNot 0.6
typedef struct{
	char ad[20];
	char soyad[20];
	int vize1,vize2,final;
}ogrenci;
int main()
{
	int N,i;
	printf("Kac adet ogrenci var: ");
	scanf("%d",&N);
	ogrenci Ogrenciler[N];
	for(i=0;i<N;i++)
	{
		fflush(stdin);
		printf("---------------------------\n");
		printf("%d.ogrencinin adi:         ",i+1);
		gets(Ogrenciler[i].ad);
		printf("%d.ogrencinin soyadi:      ",i+1);
		gets(Ogrenciler[i].soyad);
		printf("%d.ogrencinin vize 1 notu: ",i+1);
		scanf("%d",&Ogrenciler[i].vize1);
		printf("%d.ogrencinin vize 2 notu: ",i+1);
		scanf("%d",&Ogrenciler[i].vize2);
		printf("%d.ogrencinin final  notu: ",i+1);
		scanf("%d",&Ogrenciler[i].final);
		printf("---------------------------\n\n");
	}
	FILE *dosya;
	dosya=fopen("ogrenciNotlari.txt","w");
	fprintf(dosya,"\t\t\t\t\t\t---OGRENCI NOTLARI---\n\n");
	fprintf(dosya,"==============================================================================================================================\n");
	fprintf(dosya,"\tAD\t\tSOYAD\t\tVIZE 1 NOTU\t\tVIZE 2 NOTU\t\tFINAL NOTU\t\tORTALAMA\n");
	fprintf(dosya,"==============================================================================================================================\n");
	int ort;
	for(i=0;i<N;i++)
	{
		ort=(Ogrenciler[i].vize1*vizeNot)+(Ogrenciler[i].vize2*vizeNot)+(Ogrenciler[i].final*finalNot);
		fprintf(dosya,"\t%s\t\t%s\t\t\t%d\t\t\t%d\t\t\t%d\t\t\t%d\n",Ogrenciler[i].ad,Ogrenciler[i].soyad,Ogrenciler[i].vize1,Ogrenciler[i].vize2,Ogrenciler[i].final,ort);
	}
	fprintf(dosya,"==============================================================================================================================\n");
	fclose(dosya);
	return 0;
}
