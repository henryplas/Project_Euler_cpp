#include <iostream>


int main(int argc, char const *argv[])
{
	/* code */
	int final = 0;

	for (int i = 0; i < 1000 ; i++)
	{
		if(i % 3 == 0 || i % 5 == 0) 
			final += i;
		std::cout << i << std::endl;

	}

	std::cout << final << std::endl;

	return 0;
}