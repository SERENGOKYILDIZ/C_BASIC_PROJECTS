/*
Bilgisayar tarafindan rastgele üretilen N adet payi bir dizide tutulmaktadir.
Dizi içerisine dizi sira numarasi belirterek klavyeden alinan bir tamsayinin
ilgili siraya eklenmesini saglayan C programini fonksiyon olarak yaziniz
*/
#include <stdio.h>
int N;
void Elemanlara_Bak(int A[], int B)
{
	int j;
	for(j=0;j<B;j++)
	{
		printf("%3d. Eleman = %4d\n",j,A[j]);
	}
}
void Eleman_Ekle(int A[], int B)
{
	int Index;
	int deger;
	int i;
	printf("Kacinci indexe eleman eklenecek: ");
	scanf("%d",&Index);
	printf("Ne eklenecek: ");
	scanf("%d",&deger);
	A[B]=0;
	B=B+1;
	for(i=B;i>=Index;i--)
	{
		A[i+1]=A[i];
	}
	A[Index]=deger;
	
	N=B;
}
int main()
{
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
	Eleman_Ekle(dizi,N);
	printf("\nEKLENMIS HALI:\n");
	Elemanlara_Bak(dizi,N);
	return 0;
}
