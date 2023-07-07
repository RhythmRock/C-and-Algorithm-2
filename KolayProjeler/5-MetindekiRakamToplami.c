#include <stdio.h>

//Kullan�c�dan al�nan bir metindeki rakamlar� toplayan bir program

//Bu soruyu ��zmek i�in char olarak al�nan rakamlar� her ald���m�zda '0' karakteri ��karmam�z gerekiyor.
//Bunun sebebi ASCII tablosuna g�re eklendi�i i�in '0' kadar�n� ��karmak gerekiyor.
//E�er '0' kadar ��karmazsak yanl�� sonu� al�r�z.

int main()
{
	char metin[100];
	int toplam = 0;
	int i;
	
	printf("Metin Gir: ");
	fgets(metin, sizeof(metin), stdin);
	
	for (i = 0; metin[i] != '\0'; i++)
	{
		if(metin[i] >= '0' && metin[i] <= '9')
		{
			toplam += metin[i];
			toplam -= '0';
		}
	}
	
	printf("Metindeki Rakamlarin Toplami: %d \n", toplam);
	
	return 0;
}
