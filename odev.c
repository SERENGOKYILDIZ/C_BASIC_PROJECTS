/*

*/
#include <stdio.h>
#define N 5

void matrisSimetrikMi(int matris[N][N], int *kosul)
{
	int i,j;
	*kosul=1;
	for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
		{
			if(matris[i][j]!=matris[j][i])
				*kosul=0;
		}
	}
	if(*kosul)
		printf("\n-Bu matris simetriktir.\n");
	else
		printf("\n-Bu matris simetrik degildir.\n");
}
void matrisDiyagonalMi(int matris[N][N], int *kosul)
{
	int i,j;
	*kosul=1;
	for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
		{
			if(matris[i][j]!=0 && j!=i)
				*kosul=0;
		}
	}
	if(*kosul)
		printf("\n-Bu matris diyagonaldir.\n");
	else
		printf("\n-Bu matris diyagonal degildir.\n");
}
void basirma(int matris[N][N])
{
	int i,j;
	printf("\n\n\n");
	for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
		{
			printf("\t%2d",matris[i][j]);
		}
		printf("\n\n");
	}
}
int main()
{
	int Matris[N][N];
	int i,j;
	int x,y;
	for(i=0;i<N;i++)
	{
		printf("\n-%d.sutun-\n",i);
		for(j=0;j<N;j++)
		{
			printf("(%d.%d) ne olsun: ",i,j);
			scanf("%d",&Matris[i][j]);
		}
	}
	
	matrisSimetrikMi(Matris,&x);
	matrisDiyagonalMi(Matris,&y);
	basirma(Matris);
	return 0;
}
