/*
Kullanici tarafindan girilen yariçap degeri kullanilarak bir dairenin alanini ve çevre
sini hesaplayan fonksiyon prototipi asagida verilmistir.Uygun C programini ve fonksiyonu:
yaziniz.
*/
#include <stdio.h>
#define PI 3.14
void hesapla(float r)
{
	float Cevre,Alan;
	Cevre=2*PI*r;
	Alan=PI*r*r;
	printf("Daire alani: %.2f, Daire Cevresi: %.2f\n",Alan,Cevre);
}
int main()
{
	float girdi;
	printf("Yaricapi giriniz: ");
	scanf("%f",&girdi);
	hesapla(girdi);
	return 0;
}
