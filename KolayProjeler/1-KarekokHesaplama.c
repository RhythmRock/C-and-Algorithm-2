#include <stdio.h>
#include <math.h>

//Kullanýcýdan alýnan bir sayýnýn karekökünü hesaplayan program

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
