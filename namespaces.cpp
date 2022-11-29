#include <iostream>

namespace nms{
	int iq = 69;
}

namespace ms_nms{
	int sx = 666;
}

int main(){
	int x = 0;

	// std::cout << iq << std::endl; // throws an error
	
	using namespace nms;
	std::cout << iq << std::endl; // works

	std::cout << first::iq << std::endl; 

	return 0;
}