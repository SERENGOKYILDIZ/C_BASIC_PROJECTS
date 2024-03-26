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
void Eleman_Yer_Degistirme(int *p, int dizisay)
{
	int dizi[dizisay];
	int *ptr;
	int i;
	ptr=dizi;
	for(i=0;i<dizisay;i++)
		*(ptr+i)=*(p+dizisay-1-i);
	for(i=0;i<dizisay;i++)
		*(p+i)=*(ptr+i);
	
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
	Eleman_Yer_Degistirme(Dizi,N);
	printf("Yer degistirme sonrasi:\n");
	Ekrana_Bastir(Dizi,N);
	return 0;
}
