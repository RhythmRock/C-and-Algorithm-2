#include <stdio.h>

//Kullan�c�n�n girdi�i bir tam say�n�n karesini ve k�p�n� hesaplayan bir program

void hesaplama(int sayi)
{
	int kup = sayi;
	
	sayi *= sayi;
	kup *= sayi;
	
	printf("Sayinin Karesi: %d \n Sayinin Kupu: %d", sayi, kup);
	
	return 0;
}

int main ()
{
	int sayi;
	
	printf("Sayi Gir: ");
	scanf("%d",&sayi);
	
	hesaplama(sayi);
	
	return 0;
}
