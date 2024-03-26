/*

*/
#include <stdio.h>
void bolenebilme(int *n)
{
	if(*n%2==0)
		printf("2 nin kati, cift\n");
	else
		printf("2 nin kati degil, tek\n");
	if(*n%3==0)
		printf("3 un kati\n");
	else
		printf("3 un kati degil\n");
	if(*n%2==0 && *n%3==0)
		printf("6 nin kati\n");
	else
		printf("6 nin kati degil\n");
}
int main()
{
	int girdi;
	printf("Bir sayi giriniz: ");
	scanf("%d",&girdi);
	bolenebilme(&girdi);
	
	return 0;
}
