//level2main

#include "include/ancor.hpp"

#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
	if(argc > 1) {
		string sName(argv[1]);
		cout << "first param: "<< sName << std::endl;
	} else {
		cout << "arguemts not supplied" << std::endl;
	}

	std::shared_ptr <ancor> anc(new ancor());
	auto pa = anc.get();										//shared ptr mapped to pa
	auto nn = pa->add(1,2); 
	std::cout << "calculation at compile time: " << nn << std::endl;
	std::cout << "OK" << std::endl;
	return 0;
}
