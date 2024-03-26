/*

*/
#include <stdio.h>
typedef struct{
	char AD[20];
	char SOYAD[20];
	char TEL[11]; //0564 895 54 12
	char ADRES[100];
	char POSTAKOD[20];
}Adres_Defteri;
int main()
{
	int N,i;
	printf("Adres defterinde kac kisinin adresi tutulacak:  ");
	scanf("%d",&N);
	scanf("%c");
	Adres_Defteri ADRESLER[N];
	for(i=0;i<N;i++)
	{
		printf("%d.Adi giriniz: ",i+1);
		gets(ADRESLER[i].AD);
		printf("%d.Soyadi giriniz: ",i+1);
		gets(ADRESLER[i].SOYAD);
		printf("%d.Telefonu giriniz: ",i+1);
		gets(ADRESLER[i].TEL);
		printf("%d.Adresi giriniz: ",i+1);
		gets(ADRESLER[i].ADRES);
		printf("%d.Posta kodunu giriniz: ",i+1);
		gets(ADRESLER[i].POSTAKOD);
	}
	return 0;
}
