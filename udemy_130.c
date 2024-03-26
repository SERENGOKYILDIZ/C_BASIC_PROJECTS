/*

*/
#include <stdio.h>

int Faktoriyel(int n)
{
	int sonuc=1,i;
	for(i=1;i<=n;i++)
	{
		sonuc*=i;
	}
	return sonuc;
}
int main()
{
	int i;
	for(i=1;i<=10;i++)
	{
		printf("%d! = %d\n",i,Faktoriyel(i));
	}
	return 0;
}

