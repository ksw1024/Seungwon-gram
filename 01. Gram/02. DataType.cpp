#include <iostream>

using namespace std;

int main()
{
	/*
		���� : ���ϴ� ��. ���� �ٲ� �� �ִ�. (���� �����ϴ� ����) 

		�뷮�� �ּ� ���� : bit
		1byte = 8bit
		1K byte = 1024 byte
		1M byte = 1024 K byte
		1G byte = 1024 M byte

		����		|	�뷮(ũ��)	|	������	|		ǥ�� ����		|	unsigned	|
		char	|	1byte		|	����		|		-128 ~ 127		|	0 ~ 255		|
		bool	|	1byte		|	��/����	|		true / false	|  true / false	|
		short	|	2byte		|	����		|		-32768 ~ 32767	|	0 ~ 65535	|
		int		|	4byte		|	����		|		-21�� ~ 21��		|	0 ~ 42��		|
		float	|	4byte		|	�Ǽ�		|		
		double	|	8byte		|	�Ǽ�		|
	*/

	// ���Կ����� : = �����ʿ� �ִ� ���� ���� ������ �ִ´�.
	
	int iNumber;
	iNumber = 10;
//	1010(2����) = 10(10����);
	cout << iNumber << endl;

	bool bTest = true;
	bTest = true;
	cout << bTest << endl;	// false : ���� 0,	true : 0�� �ƴ� ��� ��
	
	char cTest = 65;
	cout << cTest << endl;

	return 0;
}