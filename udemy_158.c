/*

*/
#include <stdio.h>
int iki_kat_mi(int a)
{
	if(a%2==0)
		return 1;
	else
		return 0;
}
int uc_kat_mi(int a)
{
	if(a%3==0)
		return 1;
	else
		return 0;
}
int main()
{
	int girdi;
	printf("Bir sayi giriniz: ");
	scanf("%d",&girdi);
	if(iki_kat_mi(girdi))
		printf("2 nin kati, cift\n");
	else
		printf("2 nin kati degil, tek\n");
	if(uc_kat_mi(girdi))
		printf("3 un kati\n");
	else
		printf("3 un kati degil\n");
	if(uc_kat_mi(girdi) && iki_kat_mi(girdi))
		printf("6 nin kati\n");
	else
		printf("6 nin kati degil\n");
	
	return 0;
}
