/*
Klavyeden girilen pozitif bir N tamsayisina kadar olan 
tek sayilari ekrana listeleyen C programini fonksiyon 
kullanarak yaziniz
*/
#include <stdio.h>
void Sayi_Yazma(int n)
{
	int i=1;
	for(i=1;i<=n;i+=2)
	{
		printf("%3d\n",i);
	}
}
int main()
{
	int girdi;
	printf("Bir sayi giriniz: ");
	scanf("%d",&girdi);
	Sayi_Yazma(girdi);
	return 0;
}
