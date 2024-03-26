/*
Alfabe sirasi sorusu
*/
#include <stdio.h>
char ch;
int sirasi;
int main()
{
	printf("bir adet karakter giriniz: \n");
	scanf("%c",&ch);
	if(ch>='a')
	{
		sirasi=ch-'a'+1;
	}
	else
	{
		sirasi=ch-'A'+1;
	}
	printf(" %c 'nin alfabedeki sirasi: %d",ch,sirasi);
	return 0;
}
