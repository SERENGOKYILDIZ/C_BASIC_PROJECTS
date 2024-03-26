/*
Klavyeden girilen bir kelimenin pallindrom(tersten okundugu zaman da ayni
olan kelimeler 'kabak' gibi.) olup olmadigini kontrol eden programi yaziniz.
*/
#include <stdio.h>

int main()
{
	char girdi[100];
	char *p1,*p2;
	int t;
	int kontrol;
	printf("Yazi giriniz: ");
	gets(girdi);
	
	for(p2=girdi;*p2;*p2++);// \0 i gorene kadar ilerler
		p2--;// \0 karakterinden önceki karakteri alir.
	kontrol=1;
	for(p1=girdi;kontrol && p1<p2;p1++,p2--)
	{
		if(*p1!=*p2)
			kontrol=0;
	}
	if(kontrol)
		printf("Bu yazi pallindrom dur.\n");
	else 
		printf("Bu yazi pallindrom degildir.\n");
	return 0;
}
