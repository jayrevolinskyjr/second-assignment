#include <iostream>

int main()
{
	std::cout << "Hello there!" << std::endl;

	for ( int i = 0; i < 5; i++ ) //I think the linter will break here
	{
		std::cout << "General Kenobi!" << std::endl;
	}

	std::cout << "*coughs*" << std::endl;

	return 0;
}
