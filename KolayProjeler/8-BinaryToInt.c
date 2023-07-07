#include <stdio.h>

//Kullanýcýdan alýnan bir binary sayýnýn ondalýk (decimal) tabandaki karþýlýðýný bulan bir program

void binarytoint(int binary)
{
	int decimal = 0;
	int basamak = 1;
	
	while(binary > 0)
	{
		int basamakDegeri = binary % 10;
		
		decimal += basamakDegeri * basamak;
		binary /= 10;
		basamak *= 2;
	}
	
	printf("Ondalik Sayi: %d \n", decimal);
	
	return 0;
}

int main()
{
	int binary;

	printf("Binary Sayi Girin: ");
	scanf("%d",&binary);
	
	binarytoint(binary);
	
	return 0;
}
