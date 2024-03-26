/*

1+1/2+1/3+....+1/n i hesaplayýnýz

*/
#include <stdio.h>
int n;
int i;
float toplam;
int main()
{
	printf("Sayi gir: ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		toplam+=(float)1/i;
		if(i<n)
			printf("(1/%d)+",i);
		else
			printf("(1/%d)",i);
	}
	printf("= %f",toplam);
	return 0;
}
