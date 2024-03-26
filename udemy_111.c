/*
üçgen sorusu
*/
#include <stdio.h>
int aci1,aci2,aci3;
int main()
{
	printf("3 adet aci giriniz: \n");
	scanf("%d%d%d",&aci1,&aci2,&aci3);
	
	if(aci1==aci2 && aci2==aci3)
	{
		printf("Ucgen eskenardir. \n");
	}
	else if(aci1!=aci2 && aci2!=aci3 && aci1!=aci3)
	{
		printf("Ucgen cesitkenardir. \n");
	}
	else
	{
		printf("Ucgen ikizkenardir. \n");
	}
	return 0;
}
