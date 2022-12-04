#include <iostream>
#include <cstring>

int main()
{
	std::string condition;
	asking:
		std::cout << "Are you fool?: ";
		std::getline(std::cin, condition);

	if (condition=="yes"){
		std::cout << "Then give up Coding." << "\n";
	}else if(condition=="no"){
		std::cout << "Then, go on learning to Code!" << "\n";
	}else{
		std::cout << "I didn't get you. Can you repeat?" << "\n";
		goto asking;
	}

	return 0;
}