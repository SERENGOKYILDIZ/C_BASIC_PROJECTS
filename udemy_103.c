/*
Bir sayının 13 ve veya 17 ile bölünebildiğini 
gösteren c programını yazınız.
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
