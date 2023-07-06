#include <stdio.h>

//Kullanýcýdan alýnan bir metindeki belirli bir harfin kaç kez geçtiðini bulan bir program

int main()
{
	char metin[100];
	char harf;
	
	int i, sayac = 0;
	
	printf("Metin Gir: ");
	fgets(metin, sizeof(metin), stdin);
	
	printf("Bulmak Istediginiz Harfi Girin: ");
	scanf("%c",&harf);
	
	for(i = 0; metin[i] != '\0'; i++)
	{
		if(metin[i] == harf)
		{
			sayac++;
		}
	}

	printf("'%c' Harfi Metinde %d Kez Geciyor. \n", harf, sayac);
	
	return 0;
}
