#include <iostream>

using namespace std;

int main()
{
	int x = 0;

	int data[] = { 5,14,17,17,10 };

	for (int i = 0; i < 5; i++)
	{
		for (int j = i + 1; j < 5; j++)
		{
			if (data[i] == data[j])
				x = data[i];
		}
	}

	cout << x << endl;

	return 0;
}