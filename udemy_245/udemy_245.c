/*

*/
#include <stdio.h>
#include <string.h>
#define PI 3.14
float Radyan_Cevir(int a)
{
	return (float)a*PI/180;
}
int main()
{
	int i;
	float rad;
	FILE *dosya;
	dosya=fopen("Acilar.txt","w");
	for(i=0;i<=360;i++)
	{
		rad=Radyan_Cevir(i);
		fprintf(dosya,"%d acinin radyan degeri: %f, sin(%f) = %f, cos(%f) = %f\n",i,rad,rad,sin(rad),rad,cos(rad));
	}
	fclose(dosya);
	return 0;
}
