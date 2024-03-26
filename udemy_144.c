/*

*/
#include <stdio.h>
void Yer_degistir(int x, int y)
{
	int c;
	c=x;
	x=y;
	y=c;
	printf("1.sayi: %d\n",x);
	printf("2.sayi: %d\n",y);
}
int main()
{
	int a,b;
	printf("1.sayiyi giriniz: ");
	scanf("%d",&a);
	printf("2.sayiyi giriniz: ");
	scanf("%d",&b);
	Yer_degistir(a,b);
	return 0;
}
