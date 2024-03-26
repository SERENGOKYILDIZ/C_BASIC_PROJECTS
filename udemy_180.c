/*

*/
#include <stdio.h>
int faktoriyel(int *say)
{
	int i;
	int sonuc=1;
	for(i=1;i<=*say;i++)
		sonuc*=i;
	return sonuc;
}
int main()
{
	int sayim;
	int fak;
	printf("Bir sayi giriniz: ");
	scanf("%d",&sayim);
	
	fak=faktoriyel(&sayim);
	printf("%d! = %d",sayim,fak);
	return 0;
}
