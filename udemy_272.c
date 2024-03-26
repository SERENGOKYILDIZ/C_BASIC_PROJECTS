/*

*/
#include <stdio.h>

int main()
{
	int N,i,j;
	int **p;
	int toplam;
	printf("Matris kac NxN olsun:  ");
	scanf("%d",&N);
	p=(int **)malloc(N*sizeof(int*));
	printf("\n");
	for(i=0;i<N;i++)
	{
		p[i]=(int *)malloc(N*sizeof(int));
		for(j=0;j<N;j++)
		{
			p[i][j]=rand()%100;
			if(i==j)
				toplam+=p[i][j];
		}
	}
	for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
			printf(" %2d",p[i][j]);
		printf("\n");
	}
	printf("\n\nKosegen toplami: %d dir.\n",toplam);
	return 0;
}
