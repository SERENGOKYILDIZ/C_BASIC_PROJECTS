/*

*/
#include <stdio.h>
typedef struct{
	float reel;
	float sanal;
}Karmasik;

void topla(Karmasik n1, Karmasik n2, Karmasik *n3)
{
	n3->reel=n1.reel+n2.reel;
	n3->sanal=n1.sanal+n2.sanal;
	printf(" [(%.2f)+(%.2f)i] + [(%.2f)+(%.2f)i] = [(%.2f)+(%.2f)i]",
	n1.reel,n1.sanal,n2.reel,n2.sanal,n3->reel,n3->sanal);
}
int main()
{
	Karmasik n1,n2,sonuc;
	n1.reel=4.3;
	n1.sanal=5.2;
	n2.reel=6.1;
	n2.sanal=-2.9;
	topla(n1,n2,&sonuc);
	return 0;
}
