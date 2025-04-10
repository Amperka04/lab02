#include <iostream>
#include <string>

int main(){				//start of program
	string name;			//creating string name переменной имени
	std::cout << "Enter Name: \n";	//вывод запроса о вводе name
	std::cin >> name; 		//input name
	std::cout << "Hello worlD " << name << "!";	//вывод имени
}
