#include <iostream>
#include <string>

std::string hello(std::string s)
{
	return "hello world " + s;
}


int main(int argc, char **argv)
{
	std::string s;
	for(int i = 1; i<argc; ++i)
	{
		s = hello(argv[i]);
		std::cout << s << std::endl;
	}
}