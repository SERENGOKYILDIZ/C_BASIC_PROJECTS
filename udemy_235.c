/*

*/
#include <stdio.h>
int boyut_bulma(char *s)
{
	if(*s=='\0')
		return 0;
	else
		return (1+boyut_bulma(s+1));
}
int main()
{
	char cumle[100];
	printf("Bir cumle giriniz: ");
	gets(cumle);
	printf("Cumlenin boyutu : %d\n",boyut_bulma(cumle));
	return 0;
}
