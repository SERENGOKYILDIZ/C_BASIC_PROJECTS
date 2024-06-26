/* 
	Kullanini tarafindan girilen bir N pozitif tamsayisinin karekonun bulunmasini
    saglayan(sqrt() kullanmadan) C programini fonksiyon kullanarak yaziniz (A:Girilen Sayi)

    K=A/2
    Karekok=Toplam 1 den 50 ye kadar K^2+A/2K
*/
#include <stdio.h>
double karekokbul(double N)
{
	double karekok;
	int i;
	
	if(N>0.0)
	{
		karekok=N/2;
        for(i=0;i<50;i++)
        {
            karekok=((karekok*karekok)+N)/(2*karekok);
        }
        return karekok;
	}
	else if(N==0.0)
	{
		return 0;
	}
	else
	{
		printf("Lutfen gecerli bir sayi giriniz");
	}
}
int main()
{
	double sayi;
    printf("Karekoku bulanacak sayi: \n");
    scanf("%lf",&sayi);
    printf("%lf karekoku = %.5lf \n",sayi,karekokbul(sayi));
	return 0;
}
