/*
Bir öðrenci evinde öðrenciler salonu kaplatmak istemektedir. Döþenecek halýnýn
m2 si 40 TL. Ayrýca halýcý salonu döþemek 200 TL iþçilik almaktadýr. Buna göre
m2 girdisi alan tutar çýkaran c programýný yazýnýz.
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
