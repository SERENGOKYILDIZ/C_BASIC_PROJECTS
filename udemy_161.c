/*

*/
#include <stdio.h>
void DORT_ISLEM(char islem, int s1, int s2, double *sonuc)
{
	switch(islem)
	{
		case '+':
		*sonuc = s1+s2;
		break;
		
		case '-':
		*sonuc = s1-s2;
		break;
		
		case '*':
		*sonuc = s1*s2;
		break;
		
		case '/':
		*sonuc = (double)s1/s2;
		break;
	}
}
int main()
{
	int a,b;
	double sonuc;
	char islem;
	printf("Sirasiyla 2 sayi giriniz: \n");
	scanf("%d%d",&a,&b);
	printf("Islemi giriniz: \n");
	scanf(" %c",&islem);
	DORT_ISLEM(islem,a,b,&sonuc);
	printf("\n\nSonuc: %.3lf\n",sonuc);
	return 0;
}
