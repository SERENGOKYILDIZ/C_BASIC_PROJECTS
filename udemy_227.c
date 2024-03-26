/*

*/
#include <stdio.h>
//1 1 2 3 5
int fibonacci(int n)//5
{
	if(n==0)
		return 1;
	else if(n==1)
		return 1;
	else
	{
		return fibonacci(n-2)+fibonacci(n-1);
	}
}
int main()
{
	int girdi,i;
	printf("Kac adet sayi uretecek: ");
	scanf("%d",&girdi);
	for(i=0;i<girdi;i++)
	{
		printf("%d\t",fibonacci(i));
	}
	return 0;
}
