/*
3 adet sayý almak süretiyle sayý oluþturan c programýný yazýnýz.
*/
#include <stdio.h>
int x,y,z;
int sayim;
int main()
{
	printf("Yuzler basamagini gir: ");
	scanf("%d",&x);
	printf("Onlar basamagini gir: ");
	scanf("%d",&y);
	printf("Birler basamagini gir: ");
	scanf("%d",&z);
	
	sayim=(100*x)+(10*y)+z;
	
	printf("Sayi = %d",sayim);
	return 0;
}
