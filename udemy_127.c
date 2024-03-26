/*

*/
#include <stdio.h>

float Dort_Islem(char islem, int a, int b)
{
	float sonuc;
	switch(islem)
	{
		case '+':
		sonuc=a+b;
		break;
		
		case '-':
		sonuc=a-b;
		break;
		
		case '*':
		sonuc=a*b;
		break;
		
		case '/':
		sonuc=(float)a/b;
		break;
	}
	return sonuc;
}
int main()
{
	int a=20;
	int b=10;
	printf("%d + %d = %.2f\n",a,b,Dort_Islem('+',a,b));
	printf("%d - %d = %.2f\n",a,b,Dort_Islem('-',a,b));
	printf("%d x %d = %.2f\n",a,b,Dort_Islem('*',a,b));
	printf("%d / %d = %.2f\n",a,b,Dort_Islem('/',a,b));
	return 0;
}
