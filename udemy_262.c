/*

*/
#include <stdio.h>

int main()
{
	int *p1,*p2,*c;
	p1=(int*)malloc(sizeof(int));
	p2=(int*)malloc(sizeof(int));
	printf("Sirasiyla iki adet tam sayi giriniz: \n");
	scanf("%d%d",p1,p2);
	printf("ilk sayi: %d, ikinci sayi %d\n",*p1,*p2);
	c=p1;
	p1=p2;
	p2=c;
	printf("Degisim sonrasi ilk sayi: %d, ikinci sayi %d\n",*p1,*p2);
	free(p1);
	free(p2);
	return 0;
}
