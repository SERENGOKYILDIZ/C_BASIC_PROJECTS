/*

*/
#include <stdio.h>
int main()
{
	char karakter;
	FILE *dosya1, *dosya2, *birlesim;
	dosya1=fopen("deneme.txt","r");
	dosya2=fopen("dosyaGirdisi.txt","r");
	birlesim=fopen("birlesim.txt","w");
	if(dosya1==NULL)
	{
		printf("Dosya 1 bulunamadi.\n");
		exit(1);
	}
	if(dosya2==NULL)
	{
		printf("Dosya 2 bulunamadi.\n");
		exit(1);
	}
	do{
		karakter=getc(dosya1);
		if(karakter!=EOF)
			fprintf(birlesim,"%c",karakter);
	}while(karakter!=EOF);
	fclose(dosya1);
	fprintf(birlesim,"\n\n\n");
	do{
		karakter=getc(dosya2);
		if(karakter!=EOF)
			fprintf(birlesim,"%c",karakter);
	}while(karakter!=EOF);
	fclose(dosya2);
	fclose(birlesim);
	printf("Birlesim islemi tamamlandi :)\n");
	return 0;
}
