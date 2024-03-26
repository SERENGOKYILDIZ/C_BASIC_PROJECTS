/*
ax2+bx+c fonksiyonun a,b,c bilgileri girilecek, diskiriminat 
ve köklerini bulan c programini yaziniz.
*/
#include <stdio.h>
#include <math.h>
int main()
{
	double a,b,c;
	double dis;  //Diskriminant
	double kok1,kok2;  //Kökler
	
	printf("ax2+bx+c fonksiyonu için sýrasýyla a,b,c leri giriniz:\n");
	scanf("%d%d%d",&a,&b,&c);
	dis=(b*b-(4*a*c));
	kok1 = (-b + sqrt(dis)) / (2 * a);
	kok2 = (-b - sqrt(dis)) / (2 * a);
	printf("------------------------------------\n");
	printf("f(x) = %dx2+%dx+%d \n",a,b,c);
	printf("Diskriminant = %d \n",dis);
	printf("Kok1 = %f, Kok2 = %f \n",kok1,kok2);
	return 0;
}
