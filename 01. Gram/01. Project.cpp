#include <iostream>		// ��ó����
#include "Func.h"

using namespace std;

using namespace SEUNGWON;
using namespace _TEST;

int main()	// main() : ���α׷��� ������.
{
	cout << "Hello World!" << std::endl;	// cout : ���		(�̽������� ����)

	SEUNGWON::print_sw("Hello Brother\n");

	_TEST::print_sw("Hi");

	return 0;
}


/*
	1. ������ �ܰ�	: ����� ���� ����� ����
	2. ��ũ �ܰ�		: �������� ���ϵ��� �� �������ִ� �ܰ�
	3. ���� �ܰ�		: ���α׷��� ����� �ܰ�
*/