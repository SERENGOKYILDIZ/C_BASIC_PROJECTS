/*
Kelime sayýsý bulma
*/
#include <stdio.h>
#include <string.h>
char girdi[100];
int i;
int sayac;
int main()
{
	printf("String bir ifade giriniz: ");
	gets(girdi);
	while(girdi[i]!='\0')
	{
		if(girdi[i]==' ')
		{
			sayac++;
		}
		i++;
	}
	sayac++;
	printf("String ifadedeki kelime sayisi: %d dir. ",sayac);
	return 0;
}
