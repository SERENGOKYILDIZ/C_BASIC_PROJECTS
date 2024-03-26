/*
Hesaplama sorusu
*/
#include <stdio.h>
char islem;
float a,b;
float sonuc;
int main()
{
	printf("a ve b sayilarini giriniz:(a,b) \n");
	scanf("%f%f",&a,&b);
	printf("Yapmak istediginiz islemi giriniz:(+,-) \n");
	scanf(" %c",&islem);
	
	if(a==0 || b==0)
	{
		printf("0 girdiniz, hatali girisim !!! \n");
	}
	else
	{
		switch(islem)
		{
			case '+':
			sonuc=(float)(1/a+1/b);
			printf("1/a + 1/b = %.2f \n",sonuc);
			break;
			
			case '-':
			sonuc=(float)(1/a-1/b);
			printf("1/a - 1/b = %.2f \n",sonuc);
			break;
			
			default:
			printf("Hatali islem giridiniz !!!\n",sonuc);
			break;
		}
	}
	
	return 0;
}
