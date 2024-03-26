/*

*/
#include <stdio.h>

int main()
{
	int *p,N,i,min;
	printf("Bir sayi giriniz:");
	scanf("%d",&N);
	p=(int*)malloc(N*sizeof(int));
	for(i=0;i<N;i++)
		p[i]=rand()%100;
	min=p[0];
	for(i=0;i<N;i++)
		if(min>p[i])
			min=p[i];
	for(i=0;i<N;i++)
		printf("%d.Bellekte: %d var\n",i+1,p[i]);
	printf("\n\n\nEn kucuk sayi %d dir\n",min);
	free(p);
	return 0;
}
