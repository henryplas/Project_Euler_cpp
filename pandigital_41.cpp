 #include <iostream>
#include <string>
#include <sstream>

using namespace std;


bool panChecker(int intNum)
{
	string strNum;
	stringstream ss;  
	ss << intNum;    
	ss >> strNum;  

	if (strNum.length() < 9)
		return false;

	int total = 0;
	for (int i = 0; i<strNum.length(); i++)
	{
		int digit;
		digit = strNum.at(i) - '0';

		total += digit;
	}

	if (total == 45)
		return true;
	else
		return false;
}

long* primeList()
{
	long list[10000];
	int j = 0;
	bool check = false;

	for (long i = 123456789; i <= 987654321; i+=2)
	{
		for(int k = 3; k < (int) i / 2 ; k+=2)
		{
			if (i % k == 0)
			{
				check = true;
				break;
			}

		}
		if(!check)
		{
			list[j] = i;
			j++;
		}
		check = false;

	}

	return list;
}

int findHighestPan(int list[])
{
	for 
	return num;
}




int main(int argc, char const *argv[])
{
	long *list = primeList();
	return 0;
} 