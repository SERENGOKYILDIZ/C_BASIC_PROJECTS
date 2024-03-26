/*

*/
#include <stdio.h>

int main()
{
	int sayim=12;
	float ondalik=0.97;
	char karakter='a';
	double ondalik_2=48.912;
	
	printf("Tam sayim = %d, Adresi = %d\n",sayim,&sayim);
	printf("Ondalikli sayim = %f, Adresi = %d\n",ondalik,&ondalik);
	printf("Karakterim = %c, Adresi = %d\n",karakter,&karakter);
	printf("Double sayim = %lf, Adresi = %d\n",ondalik_2,&ondalik_2);
	return 0;
}
