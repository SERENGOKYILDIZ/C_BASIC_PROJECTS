/*
Kendisi hariç pozitif tam bölenlerinin toplami kendisine esit olan 
sayilara mükemmel sayi veilmektedir. Buna göre klavyeden girilen 
bir sayinin mükemmel olup olmadigini fonksiyon kullanarak
bulan C programini yaziniz
*/
#include <stdio.h>

int Mukemmel_Mi(int x)
{
	int toplamlari,i;
	for(i=1;i<x;i++)
	{
		if(x%i==0)
			toplamlari+=i;
	}	
	if(x==toplamlari)
		return 1;
	else
		return 0;
}
int main()
{
	int sayim;
	int flag;
	printf("Mukemmelliginin hesaplanmasi istenen tam sayiyi giriniz: ");
	scanf("%d",&sayim);
	flag=Mukemmel_Mi(sayim);
	if(flag==1)
		printf("Bu sayi mukemmel");
	else
		printf("Bu sayi mukemmel degil");
	return 0;
}





