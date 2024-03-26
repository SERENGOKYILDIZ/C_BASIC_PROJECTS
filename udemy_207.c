/*

*/
#include <stdio.h>
#define PI 3
union hesapla{
	int cevre;
	int alan;
}daire;
int main()
{
	int r;//r=5 ise
	printf("Lutfen yaricap giriniz: ");
	scanf("%d",&r);
	daire.cevre=2*PI*r;//2*3*5 = 30
	printf("Daire Cevresi = %d\n",daire.alan,daire.cevre);
	daire.alan=r*r*PI;//5*5*3  = 75
	printf("Daire alani   = %d\n",daire.alan,daire.cevre);
	return 0;
}
