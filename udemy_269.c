/*

*/
#include <stdio.h>

int main()
{
	int *p,N,i,toplam;
	printf("Bellekten kac adet tam sayi ayrilsin:");
	scanf("%d",&N);
	p=(int*)malloc(N*sizeof(int));
	for(i=0;i<N;i++)
	{
		printf("%d.Bellege yazilacak sayi ne olsun: ",i+1);
		scanf("%d",p+i);
	}
	for(i=0;i<N;i++)
		printf("%d.Bellekte %d var.\n",i+1,p[i]);
	for(i=0;i<N;i++)
		toplam+=p[i];
	printf("\n\nTOPLAM: %d\n\n",toplam);
	printf("\n\nORTALAMA: %d\n\n",toplam/N);
	free(p);
	return 0;
}
