/*

*/
#include <stdio.h>
int main()
{
	FILE *kucukDosya, *buyukDosya;
	char karakter;
	
	kucukDosya=fopen("kucuk.txt","r");
	buyukDosya=fopen("BUYUK.txt","w");
	if(kucukDosya==NULL)
	{
		printf("Dosya bulunamadi.\n");
		exit(1);
	}
	else
	{
		do{
			karakter=getc(kucukDosya);
			if(karakter!=EOF)
			{
				if(karakter>='a' && karakter<='z')
					fprintf(buyukDosya,"%c",karakter-32);
				else
					fprintf(buyukDosya,"%c",karakter);
			}
				
		}while(karakter!=EOF);
	}
	fclose(buyukDosya);
	fclose(kucukDosya);
	printf("Buyutme islemi basariyla tamamlandi :)\n");
	return 0;
}
