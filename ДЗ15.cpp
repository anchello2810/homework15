// ДЗ15.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>


int main()
{
	const int N = 19;
	int i;
	int a;
	
	std::cout << " Enter number 0 or 1: \n" ;
	std::cin >> a; 

	if (a % 2 == 0) {

		for (int i = 0; i <= N; i++)
		{
			if (i % 2 != 0)
			{

				std::cout << i << " ";

			}
		

		}
	}
	else if (a % 2 != 0)
	{
		for (int i = 0; i <= N; i++)
		{
			if (i % 2 == 0)
			{

				std::cout << i << " ";

			}
		}

	}
	
	
	
}

