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
int Eleman_Arama(int *p, int dizisay, int aranan)
{
	int i;
	int var_mi=0;
	for(i=0;i<dizisay;i++)
		if(*(p+i)==aranan)
			var_mi=1;
	return var_mi;
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
	printf("Hangi elemani aramak istersiniz: ");
	scanf("%d",&istenen);
	if(Eleman_Arama(Dizi,N,istenen))
		printf("%d elemani vardir.\n",istenen);
	else
		printf("%d elemani yoktur.\n",istenen);
	return 0;
}
