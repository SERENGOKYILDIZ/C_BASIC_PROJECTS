/*

*/
#include <stdio.h>

void Negatifsiz_Hayat()
{
	int girdi;
	while(girdi>=0)
	{
		printf("Lutfen bir sayi giriniz: ");
		scanf("%d",&girdi);
	}
}
int main()
{
	Negatifsiz_Hayat();
	return 0;
}

