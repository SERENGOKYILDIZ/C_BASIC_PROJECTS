/*

*/
#include <stdio.h>
#include <math.h>
struct koordinat{
	float x;
	float y;
};
int main()
{
	float t;
	struct koordinat top;
	printf("==================================================\n");
	for(t=0.0;t<10.0;t+=0.1)
	{
		top.x=20-6*cos(t);
		top.y=15-2*sin(t);
	
		printf("%.2f aninda top = (%.2f,%.2f)\n",t,top.x,top.y);
	}
	
	printf("==================================================\n\n\n");
	return 0;
}
