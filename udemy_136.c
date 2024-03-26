/*
Her sayinin kendinden önceki sayi ile toplanmasi sonucu olusan 
sayi dizisine Fibonacci dizisi adi verilmektedir. Buna göre 
klavyeden kaç adet fibonacci sayisi üretilecegi bilgisi girilerek 
sayilarin üretilmesini saglayan C programini fonksiyon kullanarak yaziniz

1 1 2 3 5 8 13 ....... 
*/
#include <stdio.h>
void Fibonacci_Serisi(int n)
{
	int a,b,c;
	int i=1;
	a=1;
	b=1;
	c=2;
	printf("%3d",a);
	printf("%3d",b);
	while(i<=n-2)
	{
		printf("%3d",c);
		a=b;
		b=c;
		c=a+b;
		i++;
	}
}
int main()
{
	int terim;
	printf("Kac fibonacci terimi olsun: ");
	scanf("%d",&terim);
	Fibonacci_Serisi(terim);
	return 0;
}
