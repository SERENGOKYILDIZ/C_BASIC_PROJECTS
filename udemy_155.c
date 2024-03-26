/*
	c(i,j)=c(i-1,j)+c(i-1,j-1)
*/
#include <stdio.h>
#define SINIR 12
int main()
{
	int dizi[SINIR][SINIR];
	int satir;
	int i,j;
	printf("Matris kac satir olsun: ");
	scanf("%d",&satir);
	if(satir>SINIR)
		satir=SINIR;
	printf("\n\np");
	for(i=0;i<satir;i++)
		printf("%4d",i);
	printf("\nn\n");
	for(i=0;i<=satir;i++)
		printf("----",i);
	for(i=0;i<satir;i++)
	{
		dizi[i][i]=1;
		dizi[i][0]=1;
		for(j=1;j<i;j++)
		{
			dizi[i][j]=dizi[i-1][j]+dizi[i-1][j-1];
		}
	}
	printf("\n");
	for(i=0;i<satir;i++)
	{
		printf("%d == ",i);
		for(j=0;j<=i;j++)
		{
			printf("%4d",dizi[i][j]);
		}
		printf("\n");
	}
	return 0;
}
