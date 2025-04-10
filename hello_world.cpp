#include <iostream>
#include <string>

int main(){				//начало программы
	string name;			//создание переменной имени
	std::cout << "Enter Name: \n";	//вывод запроса о вводе имени
	std::cin >> name; 		//ввод имени
	std::cout << "Hello World " << name << "!!11!!!";	//вывод имени
}
