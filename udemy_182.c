/*

*/
#include <stdio.h>

int Kac_Karakter(char *ptr)
{
	int i=0;
	while(*(ptr+i)!='\0')
		i++;
	return i;
}
int main()
{
	char cumle[100];
	printf("Bir cumle giriniz: ");
	gets(cumle);
	printf("Girilen cumle %d karakter icermektedir.\n",Kac_Karakter(cumle));
	return 0;
}
