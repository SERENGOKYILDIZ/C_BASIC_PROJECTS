/*

*/
#include <stdio.h>
int bolum(int bolunen, int bolen)
{
	if(bolen==0)
		return 0;
	else if(bolunen-bolen==0)
		return 1;
	else if(bolunen<bolen)
		return 0;
	else 
		return (1+bolum(bolunen-bolen,bolen));
		
}
int main()
{
	int g1,g2;
	int sonuc;
	printf("Bolunen sayiyi giriniz: ");
	scanf("%d",&g1);
	printf("Bolen sayiyi giriniz: ");
	scanf("%d",&g2);
	sonuc=bolum(g1,g2);
	printf("Sonuc: %d\n",sonuc);
	return 0;
}
