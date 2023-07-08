#include <stdio.h>

//Kullanýcýdan alýnan iki sayýnýn en büyük ortak bölenini (EBOB) bulan bir program

int main()
{	
	int sayi1, sayi2; 					
	
	int i = 2; 							
	int ebob = 1; 						
	
	printf("1. Sayiyi Gir: ");
	scanf("%d", &sayi1); 			
	
	printf("2. Sayiyi Gir: ");
	scanf("%d", &sayi2); 		
	
	do
	{
		if(sayi1 % i == 0 && sayi2 % i == 0)
		{
			sayi1 /= i;
			sayi2 /= i;
			ebob *= i;
		}
		
		else
		{
			i++; 				
		}
		
	}
	while( i <= sayi1 && i <= sayi2);
	
	printf("Sayilarin EBOBu: %d", ebob);
	
	return 0;
}
