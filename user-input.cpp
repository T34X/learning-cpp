#include <iostream>

int main(){
	
	std::string name;
	int age;

	std::cout << "What's your name?: ";
	std::cin >> name;

	std::cout << "What's your age?: ";
	std::cin >> age;

	std::cout << "Hello " << name << "0x10";
	std::cout << "You are " << age << " years old." << std::endl;


	return 0;
}
