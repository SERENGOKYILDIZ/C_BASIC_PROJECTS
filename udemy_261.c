/*

*/
#include <stdio.h>

int main()
{
	int N,i,*p;
	printf("Bellekten kac tam sayi yer ayrilsin: ");
	scanf("%d",&N);
	p=(int *)malloc(N*sizeof(int));
	if(p==NULL)
		printf("Bellekten yer ayrilamadi.\n");
	else
	{
		printf("Uretilen Sayilar.\n");
		for(i=0;i<N;i++)
		{
			p[i]=rand()%100;
			printf("%d\n",p[i]);
		}
		printf("\n\nKareleri Sayilar.\n");
		for(i=0;i<N;i++)
		{
			printf("%d\n",p[i]*p[i]);
		}
	}
	free(p);
	return 0;
}
