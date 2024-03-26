/*

*/
#include <stdio.h>

int main()
{
	FILE *dosya;
	//YAZMA
	int N,i;
	printf("Bir sayi giriniz: ");
	scanf("%d",&N);
	dosya=fopen("bilgi.txt","w");
	for(i=0;i<=N;i++)
	{
		if(i%2==0)
			fprintf(dosya,"%d=CIFT\n",i);
		else
			fprintf(dosya,"%d=TEK\n",i);
	}
	fclose(dosya);
	//OKUMA
	char karakter;
	dosya=fopen("bilgi.txt","r");
	if(dosya==NULL)
	{
		printf("Dosya bulunamadi.");
	}
	else
	{
		do{
			karakter=fgetc(dosya);
			printf("%c",karakter);
		}while(karakter!=EOF);
	}
	fclose(dosya);
	return 0;
}
