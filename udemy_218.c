/*

*/
#include <stdio.h>
struct meyve{
    char ad[20];
    float agirlik;
    int form;//0=yuvarlak, 1=kare, 2=dikdörtgen
    int kactane;
    int birimFiyat;
};
typedef struct{
	struct meyve Meyveler[2];
}sepet;
void meyveYaz(struct meyve *m)
{
	fflush(stdin);
    printf("\t--------------------\n");
    printf("\tMeyve adi:       ");
    gets(m->ad);
    printf("\tMeyve agirligi(gram):  ");
    scanf("%f",&m->agirlik);
    printf("\tMeyve formu ");
    printf("(0=yuvarlak, 1=kare, 2=dikdörtgen): ");
    scanf("%d",&m->form);
    printf("\tKac adet meyve:  ");
    scanf("%d",&m->kactane);
    printf("\tMeyve birim fiyati:  ");
    scanf("%d",&m->birimFiyat);
    printf("--------------------\n\n");
}
void sepetYaz(sepet *s)
{
	meyveYaz(&s->Meyveler[0]);
	meyveYaz(&s->Meyveler[1]);
}
void Fiyat_Hesap(sepet s)
{
	int toplamTutar=0;
	int birimF,adet,tutar;
	int i;
	for(i=0;i<2;i++)
	{
		birimF=s.Meyveler[i].birimFiyat;
		adet=s.Meyveler[i].kactane;
		tutar=birimF*adet;
		if(s.Meyveler[i].form==0)
			tutar=2*birimF*adet;
		if(s.Meyveler[i].agirlik>200)
			tutar+=3;
		toplamTutar+=tutar;
	}
	printf("\n\n\tOdenecek Toplam Tutar = %d TL dir.\n",toplamTutar);
}
int main()
{
    sepet Sepetim;
    sepetYaz(&Sepetim);
    Fiyat_Hesap(Sepetim);
	return 0;
}
