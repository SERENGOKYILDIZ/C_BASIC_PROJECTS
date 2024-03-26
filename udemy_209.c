/*

*/
#include <stdio.h>
#include <string.h>
struct ogrenci{
	char ad[10];
	char soyad[20];
	int no;
	int sinif;
};
int main()
{
	struct ogrenci ogr;
	printf("Ogrenci numarasi giriniz: ");
	scanf("%d",&ogr.no);
	if(ogr.no==2019)
	{
		strcpy(ogr.ad,"Eren");
		strcpy(ogr.soyad,"Gokyildiz");
		ogr.no=2019;
		ogr.sinif=5;
	}
	
	printf("Ad:    %s\n",ogr.ad);
	printf("Soyd:  %s\n",ogr.soyad);
	printf("No:    %d\n",ogr.no);
	printf("Sinif: %d\n",ogr.sinif);
	return 0;
}
