/*
girdi: saniye
cikis: hh/mm/ss
*/
#include <stdio.h>
void ZAMAN(int toplu_saniye)
{
	int saniye=((toplu_saniye%3600)%60);
	int dakika=(toplu_saniye%3600)/60;
	int saat=toplu_saniye/3600;
	printf("%d:%d:%d\n",saat,dakika,saniye);
}
int main()
{
	int san;
	printf("Saniyeyi giriniz: \n");
    scanf("%d",&san);
    ZAMAN(san);
	return 0;
}
