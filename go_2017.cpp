#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>

int main(int argc, char* argv[])
{
	setlocale(LC_ALL, "Russian");
	std::string line;
	char symbol = 'a';
	long int counter = 0;
	if (argc != 2)
	{
		std::cout << "���-�� �� ��� �������!" << std::endl;
		system("pause");
		return 1;
	}
	std::ifstream f(argv[1]); 
	if (!f)
	{
		std::cout << "���� ����������!" << std::endl;
		system("pause");
		return 1;
	}
	for (; std::getline(f, line); ++counter)
		
		std::cout << "���������� ����� � �����: " << counter << std::endl;

	system("pause");
	return 0;
}