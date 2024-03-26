/*

*/
#include <stdio.h>

int main()
{
	FILE *dosya;
	char *karakter;
	char satir[100];
	if((dosya=fopen("bilgi.txt","r"))!=NULL)
	{
		do
		{
			karakter=fgets(satir,100,dosya);
			if(karakter!=NULL)
			{
				printf("%s",satir);//satir satir okudugu icin \n yazmamiza gerek kalmadi
			}
		}while(karakter!=NULL);
	}
	else
	{
		printf("Dosya bulunamadi.\n");
	}
	fclose(dosya);
	return 0;
}
