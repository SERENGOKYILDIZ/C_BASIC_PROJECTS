/*

*/
#include <stdio.h>

int main()
{
	int **p,i,j,satir,sutun;
	printf("Bellekte ayrilacak matrisin sirasiyla satir ve sutun bilgisini giriniz:\n");
	scanf("%d%d",&satir,&sutun);
	p=(int**)calloc(satir,sizeof(int*));
	for(i=0;i<satir;i++)
	{
		p[i]=(int*)calloc(sutun,sizeof(int));
		for(j=0;j<sutun;j++)
			p[i][j]=(rand()%200)-100;
	}
	printf("\n\n");
	for(i=0;i<satir;i++)
	{
		for(j=0;j<sutun;j++)
			printf(" %2d",p[i][j]);
		printf("\n");
	}
	free(p);
	return 0;
}
