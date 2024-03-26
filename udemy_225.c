/*

*/
#include <stdio.h>
void asallari_yaz(int basla, int bitir)
{
	int i,asalmi;
	if(basla<=bitir)
	{
		asalmi=1;
		for(i=2;i<basla;i++)
		{
			if(basla%i==0)
				asalmi=0;
		}
		if(asalmi && basla!=0 && basla!=1)
			printf("%d\n",basla);
		asallari_yaz(basla+1,bitir);
	}
}
int main()
{
	int girdi;
	printf("Bir sayi giriniz: ");
	scanf("%d",&girdi);
	asallari_yaz(0,girdi);
	return 0;
}
