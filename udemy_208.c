/*

*/
#include <stdio.h>
#include <string.h>
typedef struct personel{
	int sifre;
	char ad[10];
	char soyad[10];
	int yas;
	float maas;
	char cinsiyet[10];
}kisiler;
void sirala(kisiler x[], int m)
{
	kisiler t;
	int i,j;
	for(i=0;i<m;i++)
	{
		for(j=i;j<m;j++)
		{
			if(strcmp(x[i].ad,x[j].ad)>0)
			{
				t=x[i];
				x[i]=x[j];
				x[j]=t;
			}
		}
	}
}
void listele(kisiler x[], int m)
{
	int i;
	for(i=0;i<m;i++)
	{
		printf("---------------------\n");
		printf("Personel No: %d\n\n",i+1);
		printf("Sifre:    %d\n",x[i].sifre);
		printf("Ad:       %s\n",x[i].ad);
		printf("Soyad:    %s\n",x[i].soyad);
		printf("Yas:      %d\n",x[i].yas);
		printf("Cinsiyet: %s\n",x[i].cinsiyet);
		printf("Maas:     %.2f\n",x[i].maas);
		printf("---------------------\n\n\n");
	}
}
int main()
{
	int N;
	printf("Kac adet personel olsun: ");
	scanf("%d",&N);
	kisiler p[N];
	int i;
	for(i=0;i<N;i++)
	{
		printf("--Personel Kayit--\n\n");
		printf("Sifre: ");
		scanf("%d",&p[i].sifre);
		scanf("");
		printf("Ad: ");
		scanf("%s",&p[i].ad);
		
		printf("Soyad: ");
		scanf("%s",&p[i].soyad);
		
		printf("Maas: ");
		scanf("%f",&p[i].maas);
		
		printf("Yas: ");
		scanf("%d",&p[i].yas);
		
		printf("Cinsiyet: ");
		scanf("%s",&p[i].cinsiyet);
		
		printf("\n\n\n");
	}
	sirala(p,N);
	listele(p,N);
	return 0;
}
