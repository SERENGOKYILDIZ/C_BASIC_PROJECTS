/*
n ve x alan;
1/x^2+3/x^4+......+2n-1/x^2n
serisini hesaplayan c programýný yazýnýz
*/
#include <stdio.h>
#include <math.h>
int n;
float x;
float sonuc;
int i;
int main()
{
	printf("N sayisini giriniz: \n");
	scanf("%d",&n);
	printf("X sayisini giriniz: \n");
	scanf("%f",&x);
	
	for(i=1;i<=2*n-1;i+=2)
	{
		sonuc+=(i/pow(x,i+1));
		if(i>=2*n-1)
			printf("(%d/%.2lf)",i,pow(x,i+1));
		else
			printf("(%d/%.2lf)+",i,pow(x,i+1));
	}
	printf("\nSonuc: %.2f\n",sonuc);
	return 0;
}
