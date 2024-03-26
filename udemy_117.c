/*
negatif girilene kadar öðrenci alan ve en yakýn 150 cm bulan programý yazýnýz.
*/
#include <stdio.h>
#include <math.h>
int fark;
int minno=0;
int minkilo=0;
int no;
int kilo;

int main()
{
	while(no>=0)
	{
		printf("Ogrenci no giriniz: \n");
		scanf("%d",&no);
		if(no<0)
			continue;
		printf("%d numarali ogrencinin kilosunu giriniz: \n",no);
		scanf("%d",&kilo);
		fark=abs(kilo-150);
		if(abs(minkilo-150)>fark)
		{
			minkilo=kilo;
			minno=no;
		}
	}
	printf("\n\n\n\nEn az farki olan ogrencinin nosu: %d, kilosu: %d \n",minno,minkilo);
	return 0;
}
