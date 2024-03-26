/*

*/
#include <stdio.h>

int main()
{
	int N,i,*p;
	printf("Bellekten kac tam sayi yer ayrilsin: ");
	scanf("%d",&N);
	p=(int *)malloc(N*sizeof(int));
	for(i=0;i<N;i++)
		p[i]=rand()%100;
	printf("Bellege rastgele sayilar yazildi.\n\n\n\n");
	for(i=0;i<N;i++)
		printf("%d.bellekte %d var.\n",i+1,p[i]);
		
	FILE *dosya;
	char karakter;
	dosya=fopen("Bellek.txt","w");
	for(i=0;i<N;i++)
		fprintf(dosya,"%d.bellekte %d var.\n",i+1,p[i]);
	printf("Rastgele sayilar \"Bellek.txt\" dosyasina yazildi.\n\n\n\n");
	fclose(dosya);
	printf("Dosya okunuyor...\n");
	printf("Dosya yaziliyor...\n\n\n");
	dosya=fopen("Bellek.txt","r");
	if(dosya==NULL)
		printf("Dosya bulunamadi.\n\n\n");
	else
	{
		do
		{
			karakter=getc(dosya);
			if(karakter!=EOF)
				printf("%c",karakter);
		}while(karakter!=EOF);
		printf("\n\n\nDosya basariyla yazildi.\n");
	}
	fclose(dosya);
	free(p);
	return 0;
}
