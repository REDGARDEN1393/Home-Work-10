#include<iostream>


int main() {
setlocale(LC_ALL, "rus");	
	int a, b;
	    //������ 1.
		/*std::cout << "������� 10 �����!\n ";
		const int N = 11;
		int x, min;
		std::cout << "������� 1-e ����� -> ";
		std::cin >> x;
		min  = x;

		for (int i = 2; i < N; i++){
			std::cout << "������� ���������� �����!\n";
			std::cout << "������� " << i <<"-� ����� ->";
			std::cin >> x;

			if (x < min)
				min = x;
        }
		std::cout << "Min: " << min  << std::endl;
		std::cout << "\n\n";
		

		//������ 2.
        std::cout << "������� ������ �����:\n";
        std::cin >> a;
        int max;
        max = 0;
		for (int i = 1; ; i++) {
			std::cout << "������� �����!:\n";
			std::cin >> b;

			if (a >= b) {
				std::cout << "\n";
			}
			else
			if (a < b) 
				max = b;
				std::cout << "����� -> " << b << " ������ ��� ����������" << std::endl;
				std::cout << "��� ����������� ����������� ����� ������� 0!";
			
				if (b == 0)
				break;
			
			std::cout << "\n\n";
		}*/

		//������ 3.
	
		int A = 5; //�����
		int B = 3; //�������
		std::cout << "������� ����� ->\n";
		std::cin >> A;
		std::cout << "������� ������� ����� ->";
		std::cin >> B;

		int degree = A;

		for (int i = 1; i < B; i++)
		{
			degree = degree * A;
		}
		std::cout << "A^B = " << degree << std::endl;
		











	return 0;
}