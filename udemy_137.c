/*
Floyd Üçgeni Olusturan fonksiyon yaz.
1
2 3
4 5 6
7 8 9 10
*/
#include <stdio.h>

void Floyd_Ucgeni(int n)
{
	int i,j;
	int a=1;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%3d",a);
			a++;
		}
		printf("\n");
	}
}
int main()
{
	int satir;
	printf("Floyd ucganimiz kac satirdan olussun: ");
	scanf("%d",&satir);
	Floyd_Ucgeni(satir);
	return 0;
}
