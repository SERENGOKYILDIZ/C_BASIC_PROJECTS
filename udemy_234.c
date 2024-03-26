/*

*/
#include <stdio.h>
void yildiz_bas(int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("*");
	}
	printf("\n");
	if(n>0)
		yildiz_bas(n-1);
}
int main()
{
	int girdi;
	printf("Kac adet satir uretecek: ");
	scanf("%d",&girdi);
	yildiz_bas(girdi);
	return 0;
}
