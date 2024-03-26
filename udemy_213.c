/*

*/
#include <stdio.h>
struct kontrol1{
	int a;
	float b;
	char c;
	double d;
}struc;
union kontrol2{
	int a;
	float b;
	char c;
	double d;
}unio;
int main()
{
	printf("struct = %d byte, union = %d byte\n",sizeof(struc),sizeof(unio));
	return 0;
}
