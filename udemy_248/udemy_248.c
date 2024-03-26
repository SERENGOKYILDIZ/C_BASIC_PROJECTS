/*

*/
#include <stdio.h>
int main()
{
	FILE *dosya;
	char dosyaYolu[50];
	char cumle[100];
	printf("Dosya yolunu giriniz: ");
	gets(dosyaYolu);
	dosya=fopen(dosyaYolu,"a");//ekleme yapcaz
	if(dosya==NULL)
	{
		printf("Dosya bulunamadi.\n");
		exit(1);
	}
	while(1)
	{
		fflush(stdin);
		printf("Bir cumle giriniz:");
		gets(cumle);
		if(cumle[0]=='0')
		{
			printf("0 girildi.\n");
			exit(1);
		}
		else
		{
			fprintf(dosya,"%s\n",cumle);
			printf("\"%s\" cumlesi girildi.\n",cumle);
		}
	}
	fclose(dosya);
	return 0;
}
