#include<iostream>


int main() {
setlocale(LC_ALL, "rus");	
	int a, b;
	    //Задача 1.
		/*std::cout << "Введите 10 чисел!\n ";
		const int N = 11;
		int x, min;
		std::cout << "Введите 1-e число -> ";
		std::cin >> x;
		min  = x;

		for (int i = 2; i < N; i++){
			std::cout << "Введите оставшиеся числа!\n";
			std::cout << "Введите " << i <<"-е число ->";
			std::cin >> x;

			if (x < min)
				min = x;
        }
		std::cout << "Min: " << min  << std::endl;
		std::cout << "\n\n";
		

		//Задача 2.
        std::cout << "введите первое число:\n";
        std::cin >> a;
        int max;
        max = 0;
		for (int i = 1; ; i++) {
			std::cout << "Введите число!:\n";
			std::cin >> b;

			if (a >= b) {
				std::cout << "\n";
			}
			else
			if (a < b) 
				max = b;
				std::cout << "число -> " << b << " больше чем предыдущее" << std::endl;
				std::cout << "Для прекращения сравнивания чисел введите 0!";
			
				if (b == 0)
				break;
			
			std::cout << "\n\n";
		}*/

		//Задача 3.
	
		int A = 5; //Число
		int B = 3; //Степень
		std::cout << "Введите число ->\n";
		std::cin >> A;
		std::cout << "Введите степень числа ->";
		std::cin >> B;

		int degree = A;

		for (int i = 1; i < B; i++)
		{
			degree = degree * A;
		}
		std::cout << "A^B = " << degree << std::endl;
		











	return 0;
}