/*
Kullanici tarafindan girilen A ve B dizilerine sirasiyla N ve K adet tamsayi girilmektedir.
Bu iki dizinin birlestirilerek tek bir dizi haline getirilmesini saglayan C programini
asagidaki fonksiyon prototipini kullanarak yaziniz

void Birlestir(int A[],int B[],int C[],int N,int K)
*/
#include <stdio.h>
void Goster(int A[], int N)
{
	int i;
	for(i=0;i<N;i++)
	{
		printf("%d.indexli eleman = %d\n",i,A[i]);
	}
}
void Birlestir(int A[],int B[],int C[],int N,int K)
{
	int i,j;
	for(i=0;i<N;i++)
	{
		C[i]=A[i];
	}
	for(j=0;j<K;j++)
	{
		C[i+j]=B[j];
	}
}
int main()
{
	int N,K;
	int i;
	//A
	printf("1.dizinin eleman sayisini giriniz: ");
	scanf("%d",&N);
	int A[N];
	for(i=0;i<N;i++)
	{
		printf("%d indexli eleman ne olsun: ",i);
		scanf("%d",&A[i]);
	}
	//B
	printf("2.dizinin eleman sayisini giriniz: ");
	scanf("%d",&K);
	int B[K];
	for(i=0;i<K;i++)
	{
		printf("%d indexli eleman ne olsun: ",i);
		scanf("%d",&B[i]);
	}
	int C[N+K];
	Birlestir(A,B,C,N,K);
	Goster(C,N+K);
	return 0;
}
