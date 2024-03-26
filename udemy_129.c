/*

*/
#include <stdio.h>

int Ust_Bulma(int x, int n)
{
	int sonuc=1,i;
	for(i=1;i<=n;i++)
	{
		sonuc*=x;
	}
	return sonuc;
}
int main()
{
	int taban,ust;
	printf("Hesaplanmasi istenen x^n sayisini giriniz(sirasiyla): \n");
	scanf("%d%d",&taban,&ust);
	printf("%d^%d = %d",taban,ust,Ust_Bulma(taban,ust));
	return 0;
}

