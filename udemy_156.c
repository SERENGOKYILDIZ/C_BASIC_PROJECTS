/*

*/
#include <stdio.h>
#define CARPIM_NO 10
int main()
{
	int i,j;
	printf("   I");
	for(i=1;i<=CARPIM_NO;i++)
		printf("%4d",i);
	printf("\n");
	for(i=1;i<=CARPIM_NO+2;i++)
		printf("----",i);
	printf("\n");
	for(i=1;i<=CARPIM_NO;i++)
	{
		printf("%4d",i);
		for(j=1;j<=CARPIM_NO;j++)
		{
			printf("%4d",i*j);
		}
		printf("\n");
	}
	return 0;
}
