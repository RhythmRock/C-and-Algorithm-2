#include <stdio.h>
#include <math.h>

//Kullan�c�dan al�nan bir say�n�n karek�k�n� hesaplayan program

int main()
{
	double sayi, karekok;
	
	printf("Bir sayi girin: ");
	scanf("%lf", &sayi);
	
	if (sayi < 0)
	{
		printf("Negatif bir sayinin karekoku alinamaz.\n");
		return 0;
	}
	
	karekok = sqrt(sayi);
	printf("Sayinin karekoku: %.2lf \n", karekok);
	
	return 0;
}
