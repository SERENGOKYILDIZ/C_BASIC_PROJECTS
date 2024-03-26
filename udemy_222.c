/*

*/
#include <stdio.h>
int carpma(int a, int b)
{
	if(a==1)
		return b;
	else
	{
		return b+carpma(a-1,b);
	}
}
int main()
{
	int g1,g2,sonuc;
	printf("Iki adet sayi giriniz: ");
	scanf("%d%d",&g1,&g2);
	sonuc=carpma(g1,g2);
	printf("Sonuc: %d\n",sonuc);
	return 0;
}
