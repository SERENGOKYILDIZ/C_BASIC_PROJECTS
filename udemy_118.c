/*
Tavşan ve kus sorusu
*/
#include <stdio.h>
int tavsan=1042;
int kus=2272;
#define Tavsan_artis(n)  (n*3.8/100)
#define Kus_artis(n)     (n*1.2/100)
int kac_yil;
int main()
{
	while(tavsan<=kus)
	{
		tavsan+=Tavsan_artis(tavsan);
		kus+=Kus_artis(kus);
		kac_yil++;
		printf("%d.yil Tavsan: %d, Kus: %d\n",kac_yil,tavsan,kus);
	}
	printf("%d yil sonra tavsanlarin  sayisi kuslarin sayisini gecektir.\n",kac_yil);
	return 0;
}
