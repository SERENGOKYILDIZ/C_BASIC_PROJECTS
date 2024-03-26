/*

*/
#include <stdio.h>
double DORT_ISLEM(char islem, int s1, int s2)
{
	switch(islem)
	{
		case '+':
		return s1+s2;
		break;
		
		case '-':
		return s1-s2;
		break;
		
		case '*':
		return s1*s2;
		break;
		
		case '/':
		return (double)s1/s2;
		break;
		
		default:
		printf("HATALI ISLEM\n");
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
	printf("\n\nSonuc: %.3lf\n",DORT_ISLEM(islem,a,b));
	return 0;
}
