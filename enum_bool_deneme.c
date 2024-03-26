/*

*/
#include <stdio.h>
typedef enum{
	FALSE,
	TRUE
}BOOL;
int main()
{
	BOOL flag;
	flag=TRUE;
	printf("%d\n",flag);
	flag=FALSE;
	printf("%d\n",flag);
	return 0;
}
