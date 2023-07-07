#include <stdio.h>

//Kullanýcýdan alýnan bir metindeki rakamlarý toplayan bir program

//Bu soruyu çözmek için char olarak alýnan rakamlarý her aldýðýmýzda '0' karakteri çýkarmamýz gerekiyor.
//Bunun sebebi ASCII tablosuna göre eklendiði için '0' kadarýný çýkarmak gerekiyor.
//Eðer '0' kadar çýkarmazsak yanlýþ sonuç alýrýz.

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
