/*
Bir ��renci evinde ��renciler salonu kaplatmak istemektedir. D��enecek hal�n�n
m2 si 40 TL. Ayr�ca hal�c� salonu d��emek 200 TL i��ilik almaktad�r. Buna g�re
m2 girdisi alan tutar ��karan c program�n� yaz�n�z.
*/
#include <stdio.h>
#define ISCILIK    200
#define METREKARE  40

int gerekli_m2;
int toplam_tutar;

int main()
{
	printf("Lutfen istenen metre kare bilgisini giriniz: ");
	scanf("%d",&gerekli_m2);
	toplam_tutar=(gerekli_m2*40)+ISCILIK;
	printf("Metrekare basi odenmesi gereken tutar: %d, Iscilik: %d, Toplam: %d",(gerekli_m2*40),ISCILIK,toplam_tutar);
	return 0;
}
