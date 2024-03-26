/*

*/
#include <stdio.h>

int main()
{
	int N;
	printf("Kac elemanli sayi dizisi olusturmak istersiniz: ");
	scanf("%d",&N);
	int Dizi[N];
	int i;
	int *ptr;
	ptr=Dizi;
	for(i=0;i<N;i++)
	{
		printf("%d indexli elemani giriniz: ",i);
		scanf("%d",ptr+i);
	}
	for(i=0;i<N;i++)
	{
		printf("%d indexli eleman=%d\n",i,*(ptr+i));
	}
	return 0;
}
