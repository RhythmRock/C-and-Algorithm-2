#include <stdio.h>

//Kullan�c�dan al�nan bir tam say�n�n pozitif b�lenlerini bulan bir program

void tambolenler(int sayi)
{
	int i, j = 0;
	int bolenler[sayi-1];
	
	for (i = 1; i <= sayi; i++)
	{
		if (sayi % i == 0)
		{
			bolenler[j] = i;
			j++;
		}
	}
	
	printf("Tam Bolenler: \n");
	
	for (i = 0; i < j; i++)
	{
		printf("%d \n", bolenler[i]);
	}
	
	return 0;
}

int main()
{
	int sayi, i;
	int j = 0;
	
	printf("Bir Sayi Gir: ");
	scanf("%d", &sayi);
	
	tambolenler(sayi);
	
	return 0;
}
