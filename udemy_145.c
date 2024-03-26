/*

*/
#include <stdio.h>
void bolme_islemi(int bolunen, int bolen)
{
	int kalan,bolum;
	bolum=bolunen/bolen;
	kalan=bolunen%bolen;
	printf("Bolum: %d\n",bolum);
	printf("Kalan: %d\n",kalan);
}
int main()
{
	int a,b;
	printf("Boluneni giriniz: ");
	scanf("%d",&a);
	printf("Boleni giriniz: ");
	scanf("%d",&b);
	
	bolme_islemi(a,b);
	return 0;
}
