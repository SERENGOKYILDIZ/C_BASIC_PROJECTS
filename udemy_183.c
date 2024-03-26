/*

*/
#include <stdio.h>
#include <string.h>
int main()
{
	char cumle[100];
	char yok;
	char *ptr;
	printf("Bir cumle giriniz: ");
	gets(cumle);
	printf("Yok olmasi istediginiz harf: ");
	scanf("%c",&yok);
	printf("ONCE:  %s\n",cumle);
	for(ptr=cumle;*ptr;ptr++)
	{
		if(*ptr==yok)
			strcpy(ptr,(ptr+1));
	}
	printf("SONRA: %s\n",cumle);
	return 0;
}
