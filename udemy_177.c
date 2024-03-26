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
int main()
{
	int N;
	printf("Kac elemanli sayi dizisi olusturmak istersiniz: ");
	scanf("%d",&N);
	int Dizi[N];
	int Dizi_2[N];
	int i;
	int *ptr,*ptr2;
	ptr=Dizi;
	ptr2=Dizi_2;
	for(i=0;i<N;i++)
	{
		printf("%d indexli elemani giriniz: ",i);
		scanf("%d",ptr+i);
	}
	Ekrana_Bastir(Dizi,N);
	int j=0;
	while(j<N)
	{
		*(ptr2+j)=*(ptr+j);
		j++;
	}
	Ekrana_Bastir(Dizi_2,N);
	return 0;
}
