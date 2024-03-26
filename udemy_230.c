/*

*/
#include <stdio.h>

int Ust_Alma(int taban, int ust)
{
	if(ust==0)
		return 1;
	else if(ust==1)
		return taban;
	else{
		return taban*Ust_Alma(taban,ust-1);
	}
}
int main()
{
	int tab,ust;
	printf("Tabani giriniz: ");
	scanf("%d",&tab);
	printf("Usttu giriniz: ");
	scanf("%d",&ust);
	printf("Sonuc: %d\n",Ust_Alma(tab,ust));
	return 0;
}
