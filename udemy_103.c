/*
Bir say�n�n 13 ve veya 17 ile b�l�nebildi�ini 
g�steren c program�n� yaz�n�z.
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
