/*

*/
#include <stdio.h>
int main()
{
	char GirisYolu[50],CikisYolu[50];
	char k;
	char satir[100];
	FILE *giris, *cikis;
	
	printf("Yedeklenecek dosyanin yolunu ve uzantisini giriniz: ");
	gets(GirisYolu);
	printf("Yedek dosyanin yolunu ve uzantisini giriniz: ");
	gets(CikisYolu);
	
	giris=fopen(GirisYolu,"r");
	if(giris==NULL)
	{
		printf("Yedeklenecek dosya bulunamadi\n");
		exit(1);
	}
	
	cikis=fopen(CikisYolu,"w");
	if(cikis==NULL)
	{
		printf("Dosya olusturulamadi\n");
		exit(1);
	}
	for(k=getc(giris);k!=EOF;k=getc(giris))
	{
		putc(k,cikis);
	}
	fclose(giris);
	fclose(giris);
	printf("Yedekleme islemi tamamlandi :)\n");
	return 0;
}
