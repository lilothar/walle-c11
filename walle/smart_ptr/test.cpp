#include <walle/smart_ptr/smart_ptr.h>
#include <iostream>
int main()
{
	std::shared_ptr<char> p(new char[20]);
	if(p) {
		std::cout<<"1"<<std::endl;
	}
	 else {
		std::cout<<"2"<<std::endl;
	 }
	return 0;
}
