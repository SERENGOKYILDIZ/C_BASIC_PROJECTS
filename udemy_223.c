/*

*/
#include <stdio.h>
int faktoriyel(int a)
{
	if(a==1)
		return 1;
	else
		return a*faktoriyel(a-1);
}
int main()
{
	int girdi;
	printf("Bir sayi giriniz: ");
	scanf("%d",&girdi);
	girdi=faktoriyel(girdi);
	printf("Sonuc: %d\n",girdi);
	return 0;
}
