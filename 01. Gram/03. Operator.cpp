#include <iostream>
using namespace std;
int main()
{
	/*
		��Ģ������ : + - * / %(������������ : ��ⷯ��) 
		���迬���� : �� �� ���� �����Ͽ� ��/�������� ����� ��ȯ���ش�.
		> >= < <= == !=

		���������� : ��/���� �� ��/������ �����Ͽ� ��/�������� ����� ��ȯ�Ѵ�.
		AND(&&), OR(||), NOT(!), XOR(^) exclusive or ������ ����, �ٸ��� �� 

		A	B	AND	OR	XOR
		0	0	0	0	0
		1	0	0	1	1
		0	1	0	1	1
		1	1	1	1	0

		A	NOT
		0	1
		1	0
	*/

	cout << "10 < 20 = " << (10 < 20) << endl;			// 1
	cout << "10 <= 20 = " << (10 <= 20) << endl;		// 1
	cout << "10 > 20 = " << (10 > 20) << endl;			// 0
	cout << "10 >= 20 = " << (10 >= 20) << endl;		// 0
	cout << "10 == 20 = " << (10 == 20) << endl;		// 0
	cout << "10 != 20 = " << (10 != 20) << endl;		// 1

	return 0;
}