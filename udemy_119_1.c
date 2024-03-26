/*
Vergi sorusu (Switch case)
*/
#include <stdio.h>

#define KITAP_NO       0
#define TEMEL_GIDA_NO  1
#define LUKS_ESYA_NO   2

#define VERGILENDIRME(N,X) (N+N*X/100) //N FIYATLI ÜRÜNÜ %X ARTTIRMA

int istenen_fiyat;
int istenen_urun;
float vergili_fiyat;

int main()
{
	printf("Istenen urunun kodunu giriniz:\n(Kitap:0,Temel Gida:1,Luks Urun:2)\n\n");
	scanf("%d",&istenen_urun);
	printf("\nUrunun vergisiz fiyati ne olsun: ");
	scanf("%d",&istenen_fiyat);
	
	switch(istenen_urun)
	{
		case KITAP_NO:
		vergili_fiyat=VERGILENDIRME(istenen_fiyat,4);
		printf("------------------------------\n Urun: Kitap\n");
		break;
		
		case TEMEL_GIDA_NO:
		vergili_fiyat=VERGILENDIRME(istenen_fiyat,5.6);
		printf("--------------------------------\n Urun: Temel Gida\n");
		break;
		
		case LUKS_ESYA_NO:
		vergili_fiyat=VERGILENDIRME(istenen_fiyat,19.6);
		printf("--------------------------------\n Urun: Luks Esya\n");
		break;
		
		default:
		printf("HATALI URUN KODU!!!!\n");
		break;
	}
	printf("--------------------------------\n Ilk Fiyat: %d\n Vergili Fiyat: %.2f",istenen_fiyat,vergili_fiyat);
	return 0;
}










