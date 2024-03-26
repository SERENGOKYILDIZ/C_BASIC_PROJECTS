/*
Bir sayýnýn 13 ve veya 17 ile bölünebildiðini 
gösteren c programýný yazýnýz.
*/
#include <stdio.h>

int main()
{
	int sayi;
	printf("Sayi gir: ");
	scanf("%d",&sayi);
	
	if(sayi%13==0 || sayi%17==0)
	{
		printf("Bu sayi 13 ve veya 17'ye bolunebiliyor.");
	}
	return 0;
}
