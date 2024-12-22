#include <iostream>
#include<string>
#include<cmath>

int main()
{
	setlocale(LC_ALL, "ru");

	//1
	int number = 0, cumm1 = 0, cumm2 = 0, n1 = 0, n2 = 0, n3 = 0, n4 = 0, n5 = 0, n6 = 0, e = 10;
	std::cout << "ведите целое шестизначное число  \n";
	std::cin >> number;
	if (number / (pow(e, 5)) >= 1)
	{
		n1 = number / (pow(e, 5));
		n2 = (number - n1 * pow(e, 5)) / pow(e, 4);
		n3 = (number - n1 * pow(e, 5) - n2 * pow(e, 4)) / pow(e, 3);
		n4 = (number - n1 * pow(e, 5) - n2 * pow(e, 4) - n3 * pow(e, 3)) / pow(e, 2);
		n5 = (number - n1 * pow(e, 5) - n2 * pow(e, 4) - n3 * pow(e, 3) - n4 * pow(e, 2)) / pow(e, 1);
		n6 = number - n1 * pow(e, 5) - n2 * pow(e, 4) - n3 * pow(e, 3) - n4 * pow(e, 2) - n5 * pow(e, 1);
		cumm1 = n1 + n2 + n3;
		cumm2 = n4 + n5 + n6;
		if (cumm1 = cumm2)
		{
			std::cout << " число счастливое";
		}
		else
		{
			std::cout << "число не счастливое";
		}
	}
	else
	{
		std::cout << "число не шестизначное, Ошибка!";
	}

	return 0;


	// 2
	int number = 0, n1 = 0, n2 = 0, n3 = 0, n4 = 0, e = 10;
	std::cout << "ведите целое четырёхзначное число  \n";
	std::cin >> number;
	if (number / (pow(e, 3)) >= 1)
	{
		n1 = number / (pow(e, 3));
		n2 = (number - n1 * pow(e, 3)) / pow(e, 2);
		n3 = (number - n1 * pow(e, 3) - n2 * pow(e, 2)) / pow(e, 1);
		n4 = number - n1 * pow(e, 3) - n2 * pow(e, 2) - n3 * pow(e, 1);
		std::cout << "" << n2 << "" << n1 << "" << n4 << "" << n3 << "\n";
	}
	else
	{
		std::cout << "число не четырёхзначное, Ошибка!";
	}
	return 0;


	//3
	int n1 = 0, n2 = 0, n3 = 0, n4 = 0, n5 = 0, n6 = 0, n7 = 0;
	std::cout << "ведите семь чисел";
	std::cin >> n1;
	std::cin >> n2;
	std::cin >> n3;
	std::cin >> n4;
	std::cin >> n5;
	std::cin >> n6;
	std::cin >> n7;
	if ((n1 >= n2) && (n1 >= n3) && (n1 >= n4) && (n1 >= n5) && (n1 >= n6) && (n1 >= n7))
	{
		std::cout << "максимальное число" << n1 << "\n";
	}
	else if ((n2 >=n1)&&(n2 >= n3) && (n2 >= n4) && (n2 >= n5) && (n2 >= n6) && (n2 >= n7))
	{
		std::cout << "максимальное число" << n2 << "\n";
	}
	else if ((n3 >= n1) && (n3 >= n2) && (n3 >= n4) && (n3 >= n5) && (n3 >= n6) && (n3 >= n7))
	{
		std::cout << "максимальное число" << n3 << "\n";
	}
	else if ((n4 >= n1) && (n4 >= n2) && (n4 >= n3) && (n4 >= n5) && (n4 >= n6) && (n4 >= n7))
	{
		std::cout << "максимальное число" << n4 << "\n";
	}
	else if ((n5 >= n1) && (n5 >= n2) && (n5 >= n3) && (n5 >= n4) && (n5 >= n6) && (n5 >= n7))
	{
		std::cout << "максимальное число" << n5 << "\n";
	}
	else if ((n6 >= n1) && (n6 >= n2) && (n6 >= n3) && (n6 >= n4) && (n6 >= n5) && (n6 >= n7))
	{
		std::cout << "максимальное число" << n6 << "\n";
	}
	else
	{
		std::cout << "максимальное число" << n7 << "\n";
	}

return 0;

}
