/*

*/
#include <stdio.h>
void sayi_iste()
{
	int girdi;
	printf("Lutfen sayi giriniz: ");
	scanf("%d",&girdi);
	if(girdi==0)
		exit(0);
	else
		sayi_iste();
}
int main()
{
	sayi_iste();
	return 0;
}
