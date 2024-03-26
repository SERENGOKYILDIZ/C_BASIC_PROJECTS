/*
	*********
	 *******
	  *****
	   ***
	    *
	   ***
	  *****
	 *******
	*********
*/
#include <stdio.h>
void Yildiz(int satir)
{
	int i,j,k;
	int yildizlar=2*satir-1;
	int bosluk=2*satir;
	//UST KISIM
	for(i=1;i<satir;i++)
	{
		printf("\n");
		for(j=0;j<bosluk;j++)
		{
			printf(" ");
		}
		bosluk++;
		for(k=0;k<yildizlar;k++)
		{
			printf("*");
		}
		yildizlar-=2;
	}
	//ALT KISIM
	for(i=1;i<=satir;i++)
	{
		printf("\n");
		for(j=0;j<bosluk;j++)
		{
			printf(" ");
		}
		bosluk--;
		for(k=0;k<yildizlar;k++)
		{
			printf("*");
		}
		yildizlar+=2;
	}
	printf("\n");
}
int main()
{
	int girdi;
	printf("Yildiz kac satir olsun: \n");
    scanf("%d",&girdi);
	Yildiz(girdi);
	return 0;
}
