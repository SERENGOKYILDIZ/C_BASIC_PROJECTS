/*

*/
#include <stdio.h>

int Karsilastirma(int a, int b)
{
	int c;
	if(a>b)
	{
		c=1;
	}
	else if(a==b)
	{
		c=0;
	}
	else if(a<b)
	{
		c=-1;
	}
	return c;
}
int main()
{
	int a,b;
	printf("2 adet tam sayi giriniz:\n");
	scanf("%d%d",&a,&b);
	int flag=Karsilastirma(a,b);
	printf("Flag degeri: %d",flag);
	return 0;
}

