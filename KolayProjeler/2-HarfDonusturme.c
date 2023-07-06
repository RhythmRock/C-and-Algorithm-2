#include <stdio.h>
#include <ctype.h>

//Kullanýcýdan alýnan bir metindeki harfleri büyük/küçük harfe dönüþtüren program

int main()
{
	char metin[100];
	int i;
	
	printf("Metin Girin: ");
	fgets(metin, sizeof(metin), stdin);
	
	printf("Metin: %s", metin);
	
	printf("\n Metin (Buyuk Harf): ");
	for (i = 0; metin[i] != '\0'; i++)
	{
		putchar(toupper(metin[i]));
	}
	
	printf("\n Metin (Kucuk Harf): ");
	for (i = 0; metin[i] != '\0'; i++)
	{
		putchar(tolower(metin[i]));
	}
	
	return 0;
}
