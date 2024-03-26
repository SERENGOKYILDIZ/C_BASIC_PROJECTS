/*

*/
#include <stdio.h>
#include <string.h>
int main()
{
	char *metin;
	metin=(char*)malloc(50*sizeof(char));
	printf("Cumle giriniz: ");
	gets(metin);
	int i,j;
	for(i=0;i<strlen(metin);i++)
	{
		for(j=0;j<=i;j++)
			printf("%c",metin[j]);
		printf("\n");
	}
	free(metin);
	return 0;
}
