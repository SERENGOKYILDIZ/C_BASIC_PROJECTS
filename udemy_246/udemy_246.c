/*

*/
#include <stdio.h>
int main()
{
	char dosyaYolu[50];
	char *k;
	char satir[100];
	FILE *dosya;
	printf("Dosya yolunu giriniz: ");
	gets(dosyaYolu);
	dosya=fopen(dosyaYolu,"r");
	if(dosya==NULL)
	{
		printf("Dosya bulunamadi\n");
	}
	else
	{
		do
		{
			k=fgets(satir,100,dosya);// k pointeri 100 karakter veya '\n' gelene kadar okur ve islem sonunda satir dizisine atar.
			if(k!=NULL)
			{
				printf("%s",satir);
			}
		}while(k!=NULL);
	}
	fclose(dosya);
	return 0;
}
