/*
Bilgisayar tarafindan rastgele üretilen N adet sayi bir 
dizide tutulmaktadir.Dizi içerisindeki maksimum ve minumum 
degerlerin iki ayri fonksiyon kullanarak bulunmasini saglayan 
C programini yaziniz
*/
#include <stdio.h>
int En_Buyuk(int A[], int B)
{
	int max;
	int i;
	max=A[0];
	for(i=0;i<B;i++)
	{
		if(max<A[i])
			max=A[i];
	}
	return max;
}
int En_Kucuk(int A[], int B)
{
	int min;
	int i;
	min=A[0];
	for(i=0;i<B;i++)
	{
		if(min>A[i])
			min=A[i];
	}
	return min;
}
int main()
{
	int N;
	printf("Kac adet rastgele sayi olsun: ");
	scanf("%d",&N);
	int dizi[N];
	srand(time(0)); // Rastgele sayi uretecini baslattik.
	int i,j;
	for(i=0;i<N;i++)
	{
		dizi[i]=rand()%100;
	}
	for(j=0;j<N;j++)
	{
		printf("%d. Eleman = %d\n",j,dizi[j]);
	}
	printf("MAX = %d, MIN = %d \n",En_Buyuk(dizi,N),En_Kucuk(dizi,N));
	return 0;
}
