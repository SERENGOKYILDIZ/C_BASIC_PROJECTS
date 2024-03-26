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
	int i;
	for(i=strlen(metin)-1;i>=0;i--)
	{
		printf("%c",metin[i]);
	}
	free(metin);
	return 0;
}
