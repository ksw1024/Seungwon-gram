#include <iostream>

using namespace std;


int main()
{
	int iNumber = 1000;
	int iNumber1 = 2000;

	int* pNum = &iNumber;


	/*
		���������� : *�� 2�� ���δ�.
					�Ϲ� ������ ������ �Ϲ� ������ �޸� �ּҸ� �����ϴ� �������
					���������ʹ� �������� �������̴�.

					�� ���������ʹ� ������ ������ �޸� �ּҸ� �����ϴ� �������̴�.
	*/

	int** ppNum = &pNum;

	*ppNum = &iNumber1;

	cout << "iNumber : " << iNumber << endl;
	cout << "iNumber Address : " << &iNumber << endl;
	cout << "*pNum : " << *pNum << "\t pNum�� ������(iNumber)" << endl;
	cout << "pNum : " << pNum << "\t pNum�� �� (pNum�� ����Ű�� ������ �ּ�)" << endl;
	cout << "pNum Address : " << &pNum << endl;

	cout << "*ppNum : " << *ppNum << "\t ppNum ������(pNum)" << endl;
	cout << "**ppNum : " << **ppNum << "\t (ppNum�� ������:pNum)�� ������ : iNumber" << endl;
	cout << "ppNum : " << ppNum << "\t ppNum�� �� (ppNum�� ����Ű�� ������ �ּ�)" << endl;
	cout << "ppNum Address : " << &ppNum << endl;


	return 0;
}