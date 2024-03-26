/*
Telefon sorusu
3 dk = 0.25
asarsa her dak = 0.08
*/
#include <stdio.h>
#define SABIT 0.25
#define ASMA 0.08
float dakika;
float toplam_ucret;
int main()
{
	printf("Telefon ile kac dakika konusulacak? \n");
	scanf("%f",&dakika);
	
	if(dakika>3)
	{
		toplam_ucret+=SABIT;
		toplam_ucret+=(dakika-3)*ASMA;
	}
	else
		toplam_ucret+=SABIT;
	printf("Dakika: %.2f | Ucret: %.2f \n",dakika,toplam_ucret);
	return 0;
}
