/*

*/
#include <stdio.h>
int IkininKuvvetleri(int N)
{
	int deger;
	if(N==0)
	{
		deger=1;
	}
	else
	{
		deger=2*IkininKuvvetleri(N-1);
	}
	printf("%d\t",deger);
	return deger;
}
int main()
{
	int girdi;
	printf("2 nin kacinci kuvvetine kadar yazilsin: ");
	scanf("%d",&girdi);
	girdi=IkininKuvvetleri(girdi);
	return 0;
}
