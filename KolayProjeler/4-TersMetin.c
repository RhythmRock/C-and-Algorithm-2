#include <stdio.h>
#include <string.h>

//Kullanýcýdan alýnan bir metindeki kelimeleri ters sýrayla yazdýran bir program

int main()
{
	char metin[100];
	int i, uzunluk;
	
	printf("Metin Gir: ");
	fgets(metin, sizeof(metin), stdin);
	uzunluk = strlen(metin);
	
	printf("Metnin Ters Hali: ");
	for (i = uzunluk; i >= 0; i--)
	{
		printf("%c",metin[i]);
	}
	
	return 0;
}
