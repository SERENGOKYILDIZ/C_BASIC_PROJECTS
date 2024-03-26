/*

*/
#include <stdio.h>
#include <math.h>
typedef struct str{
	int saniye;
	int dakika;
	int saat;
}Zaman;
void Fark(Zaman z1, Zaman z2, Zaman *zFark)
{
	if(z2.saniye>z1.saniye)
	{
		--z1.dakika;
		z1.saniye+=60;
	}
	zFark->saniye=z1.saniye-z2.saniye;
	if(z2.dakika>z1.dakika)
	{
		--z1.saat;
		z1.dakika+=60;
	}
	zFark->dakika=z1.dakika-z2.dakika;
	zFark->saat=abs(z1.saat-z2.saat);
}
int main()
{
	Zaman t1,t2,frk;
	
	printf("Ilk zaman bilgilerini giriniz:(saat/dakika/saniye)\n");
	scanf("%d%d%d",&t1.saat,&t1.dakika,&t1.saniye);
	printf("Ikinci zaman bilgilerini giriniz:(saat/dakika/saniye)\n");
	scanf("%d%d%d",&t2.saat,&t2.dakika,&t2.saniye);
	
	Fark(t1,t2,&frk);
	printf("FARK: (%d:%d:%d)\n",frk.saat,frk.dakika,frk.saniye);
	return 0;
}
