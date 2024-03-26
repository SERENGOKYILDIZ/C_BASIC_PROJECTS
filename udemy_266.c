/*

*/
#include <stdio.h>
void bellekDizisi_olustur(int *,int);
void bellekDizisi_sirala(int *,int);
void bellekDizisi_enBuyuk(int *,int);
int main()
{
	int *p,N,i,min;
	printf("Bir sayi giriniz:");
	scanf("%d",&N);
	p=(int*)malloc(N*sizeof(int));
	
	bellekDizisi_olustur(p,N);
	printf("\n\nSiralama oncesi:\n\n");
	bellekDizisi_goster(p,N);
	bellekDizisi_sirala(p,N);
	printf("\n\nSiralama sonrasi:\n\n");
	bellekDizisi_goster(p,N);
	bellekDizisi_enBuyuk(p,N);
	free(p);
	return 0;
}
void bellekDizisi_olustur(int *A,int B)
{
	int i;
	for(i=0;i<B;i++)
		A[i]=rand()%100;
}
void bellekDizisi_goster(int *A,int B)
{
	int i;
	for(i=0;i<B;i++)
		printf("%d.Bellekte: %d var\n",i+1,A[i]);
}
void bellekDizisi_sirala(int *A,int B)
{
	int i,j,gecici;
	for(i=0;i<B;i++)
	{
		for(j=0;j<B-i;j++)
		{
			if(A[j]>A[j+1])
			{
				gecici=A[j];
				A[j]=A[j+1];
				A[j+1]=gecici;
			}
		}
	}
}
void bellekDizisi_enBuyuk(int *A,int B)
{
	int i,max;
	max=A[0];
	for(i=0;i<B;i++)
	{
		if(max<A[i])
			max=A[i];
	}
	printf("\n\n En buyuk sayi: %d dir.\n",max);
}
