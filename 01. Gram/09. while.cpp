#include <iostream>

using namespace std;

int main()
{
	/*
		while : �ݺ����� �� �����̴�.
		���� : while(���ǽ�) {}
	*/

	int iNumber = 0;

	while (iNumber < 10)
	{
		cout << iNumber << endl;
		++iNumber;

		if (iNumber == 4)
		{
			break;	// : ���� ����� �ݺ����� Ż�� (switch ������ �뵵 ����)
		}
	}


	// ��   : 0�� �ƴ� ��� �� true:1
	// ���� : 0:false

	bool b = true;

	while (true)
	{
		cout << "Hello World";
	}


	return 0;
}