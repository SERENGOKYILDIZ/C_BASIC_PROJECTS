/*

*/
#include <stdio.h>

int main()
{
	char cumle[100];
	int N,i;
	printf("Cumle giriniz: ");
	gets(cumle);
	printf("Kac satir olsun: ");
	scanf("%d",&N);
	
	FILE *dosya;
	dosya=fopen("bilgi.txt","w");
	for(i=0;i<N;i++)
	{
		fprintf(dosya,"%s\n",cumle);
	}
	fclose(dosya);
	printf("Yazdirma islemi basarili oldu!");
	return 0;
}
