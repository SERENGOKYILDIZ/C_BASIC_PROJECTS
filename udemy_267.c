/*

*/
#include <stdio.h>

int main()
{
	char cumle[100];
	char *p;
	int N,i;
	printf("Cumle giriniz: ");
	gets(cumle);
	for(N=0;cumle[N]!='\0';N++);
	p=(char*)malloc(N);
	for(i=0;i<N;i++)
	{
		*(p+i)=cumle[i];
	}
	for(i=0;i<N;i++)
	{
		printf("%c",p[i]);
	}
	free(p);
	return 0;
}
