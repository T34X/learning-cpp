#include <iostream>
#include <vector>

// typedef std::vector<std::pair<std::string, int>> pairlist_t;

// Example:
// 		typedef std::string text_t;
// 		typedef int number_t;

using text_t = std::string;
using number_t = int; 

int main(){
	std::string name = "akumaru";
	text_t os = "arch";
	number_t iq = 69;

	std::cout << "I use " << os << " ,btw!" << std::endl;
	std::cout << "akumaru's iq is " << iq << std::endl;
	return 0;
}