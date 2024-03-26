/*

*/
#include <stdio.h>
#define MagazaSay 2
#define UrunSay   3
#define IsciSay   3
struct isci{
    char ad[20];
    char soyad[20];
    int yas;
};
struct urun{
    int referansKod;
    int fiyat;
};
typedef struct{
    char ad[20];
    char sokak[20];
    char mahalle[20];
    int tel; //554 896 21 12
    int satisTutari;
    struct isci isciler[IsciSay];
    struct urun urunler[UrunSay];
}magaza;

void Urunleri_Doldur(magaza *maz, int N)
{
    int i;
    for(i=0;i<N;i++)
    {
        printf("-------------------------------------\n");
        printf("\t-%d.urun-\n",i+1);
        printf("\tReferans Kodu: ");
        scanf("%d",&maz->urunler[i].referansKod);
        printf("\tFiyati:        ");
        scanf("%d",&maz->urunler[i].fiyat);
        printf("-------------------------------------\n");
    }
}
void Iscileri_Doldur(magaza *maz, int N)
{
    int i;
    for(i=0;i<N;i++)
    {
        fflush(stdin);
        printf("-------------------------------------\n");
        printf("\t-%d.Isci-\n",i+1);
        printf("\tAD:  ");
        gets(maz->isciler[i].ad);
        printf("\tSOY: ");
        gets(maz->isciler[i].soyad);
        printf("\tYAS: ");
        scanf("%d",&maz->isciler[i].yas);
        printf("-------------------------------------\n");
    }
}
void Magazalari_Doldur(magaza *maz, int N)
{
    int i;
    magaza *urun;
    magaza *isci;
    urun=maz;
    isci=maz;
    printf("==================================================================================\n");
    printf("\t\t\t MAGAZAYA ADRESLENDIRME\n\n\n");
    for(i=0;i<MagazaSay;i++)
    {
        printf("\t Magaza: %d\n",i+1);
        fflush(stdin);
        printf("-------------------------------------\n");
        printf("\tAD:  ");
        gets(maz->ad);
        printf("\tSOKAK:  ");
        gets(maz->sokak);
        printf("\tMAHALLE: ");
        gets(maz->mahalle);
        printf("\tTEL: ");
        scanf("%d",&maz->tel);
        printf("\tSATIS TUTARI: ");
        scanf("%d",&maz->satisTutari);
        printf("-------------------------------------\n\n");
        maz++;
    }
    printf("==================================================================================\n\n");
    printf("==================================================================================\n");
    printf("\t\t\t MAGAZAYA URUN YERLESTIRME\n\n\n");
    for(i=0;i<MagazaSay;i++)
    {
        printf("\t Magaza: %d\n",i+1);
        Urunleri_Doldur(urun,UrunSay);
        printf("==================================================================================\n\n");
        urun++;
    }
    printf("==================================================================================\n");
    printf("\t\t\t MAGAZADAKI ISCILERI DUZENLEME\n\n\n");
    for(i=0;i<MagazaSay;i++)
    {
        printf("\t Magaza: %d\n",i+1);
        Iscileri_Doldur(isci,IsciSay);
        printf("==================================================================================\n\n");
        isci++;
    }
}
void Urunleri_Bastir(magaza *maz, int N)
{
    int i;
    for(i=0;i<N;i++)
    {
        printf("-------------------------------------\n");
        printf("\t-%d.urun-\n",i+1);
        printf("\tReferans Kodu: %d\n",maz->urunler[i].referansKod);
        printf("\tFiyati:        %d\n",maz->urunler[i].fiyat);
        printf("-------------------------------------\n\n");
        maz++;
    }
}
void Iscileri_Bastir(magaza *maz, int N)
{
    int i;
    for(i=0;i<N;i++)
    {
        printf("-------------------------------------\n");
        printf("\t-%d.Isci-\n",i+1);
        printf("\tAD:   %s\n",maz->isciler[i].ad);
        printf("\tSOY:  %s\n",maz->isciler[i].soyad);
        printf("\tYAS:  %d\n",maz->isciler[i].yas);
        printf("-------------------------------------\n\n");
        maz++;
    }
}
void Magazalari_Bastir(magaza *maz, int N)
{
    int i;
    for(i=0;i<N;i++)
    {
        printf("========================================\n");
        printf("\t\t-%d.Magaza-\n",i+1);
        Urunleri_Bastir(maz,UrunSay);
        Iscileri_Bastir(maz,IsciSay);
        printf("========================================\n\n\n");
        maz++;
    }
}
void EnYasliIsci(magaza *maz, int N)
{
    int i,j;
    int max;
    max=maz->isciler[0].yas;
    for(i=0;i<N;i++)
    {
        for(j=0;j<IsciSay;j++)
        {
            if(maz->isciler[j].yas>max)
                max=maz->isciler[j].yas;
        }
        maz++;
    }
    printf("\n\nEn yasli iscinin yasi: %d\n\n",max);
}
void OrtalamaUrun(magaza *maz, int N)
{
    int i,j;
    float ort;
    int top;
    int urunBolum=N*UrunSay;
    for(i=0;i<N;i++)
    {
        for(j=0;j<UrunSay;j++)
        {
            top=maz->urunler[j].fiyat;
        }
        maz++;
    }
    ort=(float)top/urunBolum;
    printf("\n\nTum magazalarin ortalama fiyat degeri: %.2f\n\n",ort);
}
void MagazaMahalle(magaza maz)
{
    printf("\n\nMagazanin bulundugu mahalle: %s\n\n",maz.mahalle);
}
void EnFazlaSatis(magaza *maz, int N)
{
    int i;
    int max;
    magaza EnFazlaSatisMagaza;
    max=maz->satisTutari;
    for(i=0;i<N;i++)
    {
        if(maz->satisTutari>max)
        {
            max=maz->satisTutari;
            EnFazlaSatisMagaza=*maz;
        }
        maz++;
    }
    printf("\n\nEn fazla satis yapan magaza: %s\n\n",EnFazlaSatisMagaza.ad);
}
int main()
{
    magaza Magazalar[MagazaSay];
    Magazalari_Doldur(Magazalar,MagazaSay);
    Magazalari_Bastir(Magazalar,MagazaSay);
    EnYasliIsci(Magazalar,MagazaSay);
    OrtalamaUrun(Magazalar,MagazaSay);
    MagazaMahalle(Magazalar[0]);
    EnFazlaSatis(Magazalar,MagazaSay);
	return 0;
}
