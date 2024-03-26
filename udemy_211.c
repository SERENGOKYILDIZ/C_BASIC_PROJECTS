/*

*/
#include <stdio.h>
#define N 100
typedef struct{
	char ilacAdi[20];
	int adet;
	int fiyat;
}data;
int main()
{
	data Ilaclar[N];
	int i;
	for(i=0;i<N;i++)
	{
		printf("Lutfen ilac adi giriniz: ");
		scanf("%s",&Ilaclar[i].ilacAdi);
		
		printf("Lutfen adet giriniz: ");
		scanf("%d",&Ilaclar[i].adet);
		
		printf("Lutfen fiyat giriniz: ");
		scanf("%d",&Ilaclar[i].fiyat);
	}
	printf("ILAC ADI\n");
	printf("==============\n");
	for(i=0;i<N;i++)
	{
		if(Ilaclar[i].adet<20)
		{
			printf("%s\n",Ilaclar[i].ilacAdi);
		}
	}
	return 0;
}
