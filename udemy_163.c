/*

*/
#include <stdio.h>
#define A 3
#define B 2
void Matris_Eleman_Alimi(int dizi[A][B])
{
	int i,j;
	for(i=0;i<A;i++)
		for(j=0;j<B;j++)
		{
			printf("%d-%d elemani giriniz: ",i,j);
			scanf("%d",&dizi[i][j]);
		}
}
void Matris_Islem(int dizi[A][B], int *max, int *min, int *toplam)
{
	*toplam=0;
	*max=dizi[0][0];
	*min=dizi[0][0];
	int i,j;
	for(i=0;i<A;i++)
		for(j=0;j<B;j++)
		{
			if(*max<dizi[i][j])
				*max=dizi[i][j];
			if(*min>dizi[i][j])
				*min=dizi[i][j];
			*toplam+=dizi[i][j];
		}
}
void Matris_Yazma(int dizi[A][B])
{
	int i,j;
	printf("\n\n");
	for(i=0;i<A;i++)
	{
		printf("\t|");
		for(j=0;j<B;j++)
		{
			printf("%3d",dizi[i][j]);
		}
		printf("|\n");
	}
	printf("\n");	
}
int main()
{
	int Elemanlarim[A][B];
	int max,min,top;
	Matris_Eleman_Alimi(Elemanlarim);
	Matris_Islem(Elemanlarim,&max,&min,&top);
	Matris_Yazma(Elemanlarim);
	printf("\nMAX: %d, MIN: %d, Toplam: %d \n",max,min,top);
	return 0;
}
