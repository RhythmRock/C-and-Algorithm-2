#include <stdio.h>
#include <string.h>

//Kullan�c�dan al�nan bir metindeki kelimeleri ters s�rayla yazd�ran bir program

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
