/*

*/
#include <stdio.h>
union Paylas{
	int x;
	int y;
}kontrol;
int main()
{
	int *X,*Y;
	kontrol.x=100;
	X=&kontrol.x;
	printf("Tamsayi(x) = %d, Bellekteki Adresi = %x\n",kontrol.x,X);
	kontrol.y=504;
	Y=&kontrol.y;
	printf("Tamsayi(y) = %d, Bellekteki Adresi = %x\n",kontrol.y,Y);
	return 0;
}
