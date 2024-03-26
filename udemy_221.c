/*

*/
#include <stdio.h>
int toplama(int N)
{
	if(N==1)
		return 1;
	else
	{
		return toplama(N-1)+N;
	}
}
int main()
{
	int girdi;
	printf("Bir sayi giriniz: ");
	scanf("%d",&girdi);
	girdi=toplama(girdi);
	printf("Sonuc: %d\n",girdi);
	return 0;
}
