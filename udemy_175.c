/*

*/
#include <stdio.h>
void yerdegistir(int *a, int *b)
{
	int c;
	c=*a;
	*a=*b;
	*b=c;
}
int main()
{
	int say1,say2;
	printf("Lutfen 2 adet sayi giriniz: ");
	scanf("%d%d",&say1,&say2);
	printf("Once: say1=%d, say2=%d\n",say1,say2);
	yerdegistir(&say1,&say2);
	printf("Sonra: say1=%d, say2=%d\n",say1,say2);
	return 0;
}
