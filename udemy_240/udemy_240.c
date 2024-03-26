/*

*/
#include <stdio.h>

int main()
{
	FILE *dosya;
	char karakter;
	if((dosya=fopen("bilgi.txt","r"))!=NULL)
	{
		do
		{
			karakter=fgetc(dosya);
			printf("%c",karakter);
		}while(karakter!=EOF);
	}
	else
	{
		printf("Dosya bulunamadi.\n");
	}
	fclose(dosya);
	return 0;
}
