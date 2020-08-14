// Трассировка.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#pragma warning(disable : 4996)

int main()
{
	setlocale(LC_ALL, "Rus");
	int i, X;
	printf("Введите целое число:\n");
	scanf("%d", &X);
	printf("Введено X=%d\n", X);              // точка 1  
	for (i = 1; i < 10; i++)
	{
		X+=3;
		printf("В цикле: i=%d, X=%d\n", i, X);  // точка 2 
		
	}
	printf("После цикла: X=%d\n", X);         // точка 3 
	
}