/*
Bilgisayar tarafindan rastlege üretilen N adet sayi 
bir dizide tutulmaktadir.Buna göre asagida verilen
fonksiyon prototipini kullanarak dizi elemanlarinin 
küçükten büyüge dogru siralanmasini saglayan C programini
fonksiyon olarak yaziniz.

void Elemanlari_Sirala(int A[], int adet)
*/
#include <stdio.h>
void Elemanlara_Bak(int A[], int B)
{
	int j;
	for(j=0;j<B;j++)
	{
		printf("%3d. Eleman = %4d\n",j,A[j]);
	}
}
void Elemanlari_Sirala(int A[], int adet)
{
	int i,j,gecici;
	for(i=0;i<adet-1;i++)
	{
		for(j=0;j<adet-1-i;j++)
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
	printf("\nILK HALI:\n");
	Elemanlara_Bak(dizi,N);
	Elemanlari_Sirala(dizi,N);
	printf("\nSIRALI HALI:\n");
	Elemanlara_Bak(dizi,N);
	return 0;
}
