/*

*/
#include <stdio.h>
#include <string.h>
int main()
{
	char cumle[100];
	int i,N;
	printf("Bir cumle giriniz: ");
	gets(cumle);
	N=strlen(cumle);
	FILE *dosya;
	dosya=fopen("bilgi.txt","a");
	if(dosya==NULL)
	{
		printf("Dosya bulunamadi.");
	}
	else
	{
		for(i=0;i<N;i++)
		{
			fputc(cumle[i],dosya);
		}
	}
	return 0;
}
