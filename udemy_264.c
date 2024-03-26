/*

*/
#include <stdio.h>

int main()
{
	int N,i,*t,*c;
	printf("Bir sayi giriniz:");
	scanf("%d",&N);
	t=(int*)malloc(N/2*sizeof(int));
	c=(int*)malloc(N/2*sizeof(int));
	for(i=0;i<N;i++)
	{
		if(i%2==0)
			c[i/2]=i;
		else
			t[i/2]=i;
	}
	printf("\n\t\tDINAMKIK BELLEK\n\n");
	printf("\n\n\nTEK SAYILAR\n\n");
	for(i=0;i<N/2;i++)
		printf("%d.Bellekte: %d var\n",i+1,t[i]);
	printf("\n\n\nCIFT SAYILAR\n\n");
	for(i=0;i<N/2;i++)
		printf("%d.Bellekte: %d var\n",i+1,c[i]);
	return 0;
}
