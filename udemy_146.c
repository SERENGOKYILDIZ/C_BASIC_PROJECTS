/*
Kullanici tarafindan N elemanli bir diziye alinan tamsayilarin ortalamasinin 
bulunmasini saglayan fonksiyon program asagida verilmistir Buna göre 
asagidaki prototipi kullanarak C programini yaziniz.
*/
#include <stdio.h>
float Ortalama(int *dizi, int eleman_sayisi)
{
	float ortalama;
	int i;
	for(i=0;i<eleman_sayisi;i++)
	{
		ortalama+=dizi[i];
	}
	ortalama=(float)ortalama/eleman_sayisi;
	return ortalama;
}
int main()
{
	int N;
	int i;
	printf("Kac adet eleman girilecek: ");
	scanf("%d",&N);
	int dizi[N];
	for(i=0;i<N;i++)
	{
		printf("%d indexli elemani giriniz: ",i);
		scanf("%d",&dizi[i]);
	}
	printf("Ortalama: %.2f",Ortalama(dizi,N));
	return 0;
}
