#include <iostream>

int main()
{
	char x, y;
	char arr[5] = { 'a','b','c','b','a' };

	bool bEqual = true;

	for (int i = 0; i < 5; i++)
	{
		x = arr[i];
		y = arr[4 - i];
		if (x != y)
			bEqual = false;
	}


	if (bEqual)
		std::cout << "True";

	else
		std::cout << "False";

	return 0;
}