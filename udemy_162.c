/*

*/
#include <stdio.h>
void Karakter_Dizi_Boyutu(char dizi[], int *boyut)
{
	int i;
	for(i=0;dizi[i]!='\0';i++);
	*boyut=i;
}
void Karakter_Dizi_Ortak_Harf(char dizi1[], char dizi2[], int *sayi)
{
	int i,j,k;
	int once[26]={0};
	int harf=0;
	int sayim=0;
	for(i=0;dizi1[i]!='\0';i++)
	{
		for(j=0;dizi2[j]!='\0';j++)
		{
			harf='a'-dizi2[j];
			if(dizi2[j]==dizi1[i])
			{
				once[harf]++;
			}
		}
	}
	for(k=0;k<26;k++)
	{
		if(once[k]>0)
			sayim++;
	}
	sayim--;
	*sayi=sayim;
}
int main()
{
	char Dizim1[100];
	char Dizim2[100];
	int boyut=0;
	int ortak=0;
	printf("Ilk diziyi giriniz: ");
	gets(Dizim1);
	printf("Ikinci diziyi giriniz: ");
	gets(Dizim2);
	printf("1: %s, 2: %s\n",Dizim1,Dizim2);
	Karakter_Dizi_Boyutu(Dizim1,&boyut);
	printf("Dizim1'in boyutu: %d\n",boyut);
	Karakter_Dizi_Boyutu(Dizim2,&boyut);
	printf("Dizim2'in boyutu: %d\n",boyut);
	Karakter_Dizi_Ortak_Harf(Dizim1,Dizim2,&ortak);
	printf("Iki dizideki ortak harf sayisi: %d\n",ortak);
	
	return 0;
}
