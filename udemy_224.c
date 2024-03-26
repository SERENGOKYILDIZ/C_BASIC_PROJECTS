/*

*/
#include <stdio.h>
void tek_sayilar(int basla, int bitir)
{
	if(basla<=bitir)
	{
		if(basla%2!=0)
			printf("%d\n",basla);
		tek_sayilar(basla+1,bitir);
	}
}
int main()
{
	int girdi;
	printf("Bir sayi giriniz: ");
	scanf("%d",&girdi);
	tek_sayilar(0,girdi);
	return 0;
}
