#include <iostream>
#include <string>

void hello(std::string s)
{
	std::cout << "hello world " << s << std::endl;
}


int main(int argc, char **argv)
{
	for(int i = 1; i<argc; ++i)
	{
		hello(argv[i]);
	}
}