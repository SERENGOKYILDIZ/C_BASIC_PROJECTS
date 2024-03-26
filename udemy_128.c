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
	int deger;
	printf("Hesaplanmasi istenen faktoriyel sayisini giriniz: ");
	scanf("%d",&deger);
	printf("%d! = %d",deger,Faktoriyel(deger));
	return 0;
}

