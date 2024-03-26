/*

*/
#include <stdio.h>

int main()
{
	int dizim[15];
	int i;
	int *ptr;
	ptr=dizim;
	for(i=0;i<15;i++) 
		*(ptr+i)=i;
	printf("TUM ELEMANLAR\n");
	for(i=0;i<15;i++)
		printf("%4d",*(ptr+i));
	printf("\nTEK ELEMANLAR\n");
	for(i=1;i<15;i+=2)
		printf("%4d",*(ptr+i));
	printf("\nCIFT ELEMANLAR\n");
	for(i=0;i<15;i+=2)
		printf("%4d",*(ptr+i));
	return 0;
}
