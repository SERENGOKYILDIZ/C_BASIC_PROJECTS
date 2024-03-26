/*
Kelime: eren
e
er
ere
eren
*/
#include <stdio.h>
char girdi[100];
int i,j;
int main()
{
	printf("String bir ifade giriniz: ");
	gets(girdi);
	
	while(girdi[i]!='\0')
	{
		while(j<=i)
		{
			printf("%c",girdi[j]);
			j++;
		}
		printf("\n");
		j=0;
		i++;
	}
	return 0;
}
