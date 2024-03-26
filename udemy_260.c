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
		for(i=0;i<N;i++)
		{
			p[i]=i;
			printf("%d\n",p[i]);
		}
	}
	free(p);
	return 0;
}
