/*
En fazla kullanilan harfi bul
*/
#include <stdio.h>
char girdi[100];
int i,j;

char harf;
int sayisi;

char max_harf='a';
int max_sayi=0;
int main()
{
	printf("String bir ifade giriniz: ");
	gets(girdi);
	
	while(girdi[i]!='\0')
	{
		sayisi=0;
		j=0;
		if(max_harf!=girdi[i])
			harf=girdi[i];
		while(girdi[j]!='\0')
		{
			if(girdi[j]==harf)
			{
				sayisi++;
			}
			j++;
		}
		if(max_sayi<sayisi)
		{
			max_sayi=sayisi;
			max_harf=harf;
		}
		i++;
	}
	printf("En cok kullanilan harf %c dir. Sayisi %d dir.",max_harf,max_sayi);
	return 0;
}
