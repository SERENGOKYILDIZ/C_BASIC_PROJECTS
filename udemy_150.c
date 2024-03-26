/*
 f=(1.8*c)+32
 c=(5/9)*(f-32)
*/
#include <stdio.h>

double F_DEN_C(double f)
{
	return (5/9)*(f-32);
}
double C_DEN_F(double c)
{
	return ((1.8*c)+32);
}
int main()
{
	int secim;
	double girdi;
	printf("     --> ANA MENU <--\n");
	printf("1-Celciusa --> Fahrenayt\n");
	printf("2-Fahrenayt --> Celciusa\n");
	printf("Islem numarasini giriniz:\n");
	scanf("%d",&secim);
	switch(secim)
	{
		case 1:
		printf("Celciusa giriniz: ");
		scanf("%lf",&girdi);
		printf("%.2lf C = %.2lf F\n",girdi,C_DEN_F(girdi));
		break;
		
		case 2:
		printf("Fahrenayt giriniz: ");
		scanf("%lf",&girdi);
		printf("%.2lf F = %.2lf C\n",girdi,F_DEN_C(girdi));
		break;
		
		default:
		printf("HATALI ISLEM NUMARASI !!!!\n");
		break;
	}
	return 0;
}
