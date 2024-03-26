/*
Bilgisayar tarafindan rastgele üretilen N adet sayi bir dizide tutulmaktadir.
Dizi içerisinde istenilen bir degerin dilideki sira numarasi girilerek 
ilgili sirada bulunan dizi degerinin silinmesini saglayan C programini 
fonksiyon kullanarak yaziniz
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
void Eleman_Sil(int A[], int B)
{
	int Index;
	int i;
	printf("Kacinci Eleman silinsin: ");
	scanf("%d",&Index);
	for(i=Index;i<B;i++)
	{
		A[i]=A[i+1];
	}
	B=B-1;
	printf("Duzenlenmis Hali:\n");
	Elemanlara_Bak(A, B);
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
	Elemanlara_Bak(dizi, N);
	Eleman_Sil(dizi, N);
	return 0;
}
