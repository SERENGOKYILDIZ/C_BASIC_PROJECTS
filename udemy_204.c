/*

*/
#include <stdio.h>
union birlik{
	char karakter;
	float reel;
};
typedef struct{
	int tamsayi;
	union birlik birligim;
	int tip;
}Yapim;
float Ortalama(Yapim yapi[])
{
	float top=0.0;
	int reel_say=0;
	int i=0;
	while(i<20)
	{
		if(yapi[i].tip==2)
		{
			top+=yapi[i].birligim.reel;
			reel_say++;
		}
		i++;
	}
	return (float)top/reel_say;
}
int main()
{
	int i;
	Yapim yapiDizisi[20];
	while(i<20)
	{
		printf("Bir tam sayi giriniz: ");
		scanf("%d",&yapiDizisi[i].tamsayi);
		if(yapiDizisi[i].tamsayi==1)
		{
			yapiDizisi[i].tip=1;
			printf("Bir karakter giriniz: ");
			scanf(" %c",&yapiDizisi[i].birligim.karakter);
		}
		else if(yapiDizisi[i].tamsayi==0)
		{
			yapiDizisi[i].tip=2;
			printf("Bir reel sayi giriniz: ");
			scanf("%f",&yapiDizisi[i].birligim.reel);
		}
		else
			break;
		i++;
	}
	printf("\n\nReel Ortalama: %.2f\n\n",Ortalama(yapiDizisi));
	return 0;
}
