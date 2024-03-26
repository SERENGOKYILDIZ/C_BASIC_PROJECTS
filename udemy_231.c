/*

*/
#include <stdio.h>
void seriOlustur(int basla, int bitir, int artmak)
{
	if(basla<=bitir)
	{
		printf("%d\n",basla);
		seriOlustur(basla+artmak,bitir,artmak);
	}
}
int main()
{
	int basla,bitir,artis;
	printf("Baslangic degerini giriniz: ");
	scanf("%d",&basla);
	printf("Bitis degerini giriniz: ");
	scanf("%d",&bitir);
	printf("Artis miktarini giriniz: ");
	scanf("%d",&artis);
	seriOlustur(basla,bitir,artis);
	return 0;
}
