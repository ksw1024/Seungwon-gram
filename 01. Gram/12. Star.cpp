#include <iostream>

using namespace std;
/*
	����
	1.	�������� 2�ܺ��� 9�ܱ��� ����ϴ� ��ø for���� ������.

	2.	���� �Ʒ��� ���·� ��µǰ� �Ѵ�.
	*
	**
	***
	****
	*****

	3.	���� �Ʒ��� ���·� ��µǰ� �Ѵ�.
	*****
	****
	***
	**
	*

	4.	���� �Ʒ��� ���·� ��µǰ� �Ѵ�.
	   *
	  ***
	 *****
	*******
*/
#include <iostream>

using namespace std;

int main()
{
	cout << "1. __________________________" << endl;
	for (int i = 2; i <= 9; i++)
	{
		cout << i << "��" << endl;

		for (int j = 1; j <= 9; j++)
		{
			cout << i << " * " << j << " = " << i * j << endl;
		}
		cout << endl;
	}

	cout << endl << endl;
	cout << "2. __________________________" << endl;
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < i + 1; j++)
		{
			cout << "*";
		}
		cout << endl;
	}

	cout << endl << endl;
	cout << "3. __________________________" << endl;
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5 - i; j++)
		{
			cout << "*";
		}
		cout << endl;
	}

	cout << endl << endl;
	cout << "4. __________________________" << endl;
	for (int i = 0; i < 4; i++)
	{
		// ���� : 3 2 1 0
		// ���� : 1 3 5 7

		for (int j = 0; j < 3 - i; j++)
		{
			cout << " ";
		}

		for (int j = 0; j < i * 2 + 1; j++)
		{
			cout << "*";
		}
		cout << endl;
	}

	cout << endl << endl;
	cout << "5. __________________________" << endl;

	/*
		2��	3��	4��					2 * 1 = 2		3 * 1 = 3		4 * 1 = 4
									2 * 2 = 4		...				...
		5��	6��	7��				
									5 * 1 = 5		...				...
		8��	9��	10��
	*/

	for (int i = 2; i < 11; i += 3)
	{
		for (int j = 1; j <= 9; j++)
		{
			cout << i << " * " << j << " = " << i * j << "\t";
			cout << i + 1 << " * " << j << " = " << (i + 1) * j << "\t";
			cout << i + 2 << " * " << j << " = " << (i + 2) * j << endl;
		}
		cout << endl;
	}


	cout << endl << endl;
	cout << "6. __________________________" << endl;
	/*
	   *
	  ***
	 *****
	*******
	 *****
	  ***
	   *
	*/


	int iLine = 7;
	int iCount = 0;

	cout << "Line�� �Է����ּ��� : ";
	cin >> iLine;

	if (iLine % 2 == 0)
		iLine++;

	for (int i = 0; i < iLine; i++)
	{
		// ���� : 3 2 1 0 1 2 3
		// ���� : 1 3 5 7 5 3 1

		iCount = i;

		if (i > iLine / 2)
			iCount = iLine - 1 - i;

		for (int j = 0; j < iLine - iCount; j++)
		{
			cout << " ";
		}

		for (int j = 0; j < iCount * 2 + 1; j++)
		{
			cout << "*";
		}

		cout << endl;
	}

}
