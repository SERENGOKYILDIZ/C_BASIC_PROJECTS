/*

*/
#include <stdio.h>

int main()
{
	int say1,say2,toplam;
	int *ptr1,*ptr2;
	ptr1=&say1;
	ptr2=&say2;
	printf("Lutfen 2 adet sayi giriniz: ");
	scanf("%d%d",&say1,&say2);
	toplam=*ptr1+*ptr2;
	printf("Toplam = %d",toplam);
	return 0;
}
