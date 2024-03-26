/*

*/
#include <stdio.h>
void sirala(int dizi[], int b)
{
	int i;
	int gecici;
	for(i=0;i<b;i++)
	{
		if(dizi[b]<dizi[i])
		{
			gecici=dizi[b];
			dizi[b]=dizi[i];
			dizi[i]=gecici;
		}
	}
	if(b!=0)
		sirala(dizi,b-1);
}
int main()
{
	int N,i;
	printf("Kac adet sayi sitersiniz: ");
	scanf("%d",&N);
	int dizi[N];
	for(i=0;i<N;i++)
		dizi[i]=rand()%100;
	sirala(dizi,N-1);
	for(i=0;i<N;i++)
		printf("%d\t",dizi[i]);
	return 0;
}
