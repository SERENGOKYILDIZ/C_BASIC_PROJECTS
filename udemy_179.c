/*

*/
#include <stdio.h>
void Ekrana_Bastir(int A[], int B)
{
	int i;
	for(i=0;i<B;i++)
	{
		printf("%2d indexli eleman=%4d\n",i,A[i]);
	}
}
void Max_Min_Bulma(int *p, int dizisay, int *max, int *min)
{
	int i;
	int var_mi=0;
	*max=*p;
	*min=*p;
	for(i=0;i<dizisay;i++)
	{
		if(*max<*(p+i))
			*max=*(p+i);
		if(*min>*(p+i))
			*min=*(p+i);
	}
}
int main()
{
	int N;
	int istenen;
	printf("Kac elemanli sayi dizisi olusturmak istersiniz: ");
	scanf("%d",&N);
	int Dizi[N];
	int i;
	int *ptr;
	ptr=Dizi;
	for(i=0;i<N;i++)
	{
		printf("%d indexli elemani giriniz: ",i);
		scanf("%d",ptr+i);
	}
	Ekrana_Bastir(Dizi,N);
	int max,min;
	Max_Min_Bulma(Dizi,N,&max,&min);
	printf("MAX: %d, MIN: %d\n",max,min);
	return 0;
}
