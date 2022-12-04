#include <iostream>

int main()
{
	std::string firstName = "akumaru";
	std::string surName = "Robinson";

	std::string fullName = firstName + " " + surName;

	char new_line = 10;

	fullName[0] = 'A';

	std::cout << fullName.size() << new_line;
	std::cout << fullName.length() << new_line;
	std::cout << fullName << new_line;

	return 0;
}