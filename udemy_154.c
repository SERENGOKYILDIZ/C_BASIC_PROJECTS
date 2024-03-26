/*

*/
#include <stdio.h>

int main()
{
	int girdi[10];
	int max;
	int min;
	int i;
	
	for(i=0;i<10;i++)
	{
		printf("%d.indexli eleman ne olsun: ",i);
		scanf("%d",&girdi[i]);
	}
	max=girdi[0];
	min=girdi[0];
	for(i=0;i<10;i++)
	{
		if(max<girdi[i])
			max=girdi[i];
		if(min>girdi[i])
			min=girdi[i];
	}
	printf("MAX: %d, MIN: %d\n",max,min);
	return 0;
}
