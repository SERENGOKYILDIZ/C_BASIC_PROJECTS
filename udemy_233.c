/*

*/
#include <stdio.h>
#include <string.h>
void tersCumle(char *cumlem, int n)
{
	if(n==0)
		printf("%c",cumlem[n]);
	else
	{
		printf("%c",cumlem[n]);
		tersCumle(cumlem,n-1);
	}
}
int main()
{
	char cumle[100];
	printf("Bir cumle giriniz: ");
	gets(cumle);
	printf("Cevrim oncesi:  %s\n",cumle);
	tersCumle(cumle,strlen(cumle)-1);
	
	return 0;
}
