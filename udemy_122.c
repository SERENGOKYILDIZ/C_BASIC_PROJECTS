/*
Klavyeden girilen c�mlenin harflerinin alt alta yaz�n
*/
#include <stdio.h>
char girdi[100];
int i;
int main()
{
	printf("String bir ifade giriniz: ");
	gets(girdi);
	
	while(girdi[i]!='\0')
	{
		printf("%c\n",girdi[i]);
		i++;
	}
	return 0;
}
