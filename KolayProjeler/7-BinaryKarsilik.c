#include <stdio.h>

//Kullanýcýdan alýnan bir tam sayýnýn ikilik (binary) tabandaki karþýlýðýný bulan bir program

void tobinary(int sayi)
{
	int i;
	int binary[32];
	
		for (i = 0; sayi > 0; i++)
	{
		binary[i] = sayi % 2;
		sayi /= 2;	
	}
	
	printf("Binary Karsiligi: %d");
	for(; i >= 0; i--)
	{
		printf("%d", binary[i]);
	}
	
	return 0;
}

int main()
{
	int sayi, i;
	int binary[32];
	
	do
	{
		printf("Bir Tam Sayi Girin: ");
		scanf("%d", &sayi);
		
		if(sayi <= 0)
		{
			printf("Lutfen Sadece Tam Sayi Giriniz. \n");
		}
	}
	while(sayi <= 0);
	
	tobinary(sayi);

	return 0;
}
