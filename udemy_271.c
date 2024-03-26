/*

*/
#include <stdio.h>

int main()
{
	int N,M,i;
	int *dizi1,*dizi2;
	printf("1.dizi kac eleman olsun:  ");
	scanf("%d",&N);
	printf("2.dizi kac eleman olsun:  ");
	scanf("%d",&M);
	dizi1=(int *)malloc(N*sizeof(int));
	dizi2=(int *)malloc(M*sizeof(int));
	printf("1.DIZI\n\n");
	for(i=0;i<N;i++)
	{
		dizi1[i]=rand()%100;
		printf("%d.dizi elemani: %d\n",i+1,dizi1[i]);
	}
	printf("\n\n\n\n2.DIZI\n\n");
	for(i=0;i<M;i++)
	{
		dizi2[i]=rand()%100;
		printf("%d.dizi elemani: %d\n",i+1,dizi2[i]);
	}
	
	int *dizi3;
	dizi3=(int *)malloc((N+M)*sizeof(int));
	for(i=0;i<N;i++)
	{
		dizi3[i]=dizi1[i];
	}
	for(i=N;i<N+M;i++)
	{
		dizi3[i]=dizi2[i-N];
	}
	printf("\n\n\n\n3.DIZI BIRLESTIRILMIS\n\n");
	for(i=0;i<N+M;i++)
	{
		printf("%d.dizi elemani: %d\n",i+1,dizi3[i]);
	}
	free(dizi1);
	free(dizi2);
	free(dizi3);
	return 0;
}
