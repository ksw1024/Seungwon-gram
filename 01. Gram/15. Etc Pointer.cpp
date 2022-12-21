#include <iostream>

using namespace std;

struct __tagStudet
{
	int		iKor;
	int		iEng;
	int		iMath;
	int		iTotal;
	float	fAverage;
};

int main()
{
	const char* pText = "Hello World!";
	cout << pText << endl;
	cout << (int*)pText << endl;

	pText = "Hello Friends";
	cout << pText << endl;
	cout << (int*)pText << endl;

	pText = "Hello Friends";
	cout << pText << endl;
	cout << (int*)pText << endl;

	pText = "Hello Bro";
	cout << pText << endl;
	cout << (int*)pText << endl;

	const char* pText2 = "Hello Bro";
	cout << pText << endl;
	cout << (int*)pText << endl;

	char str[10] = "Hello Bro";
	cout << str << endl;
	cout << (int*)str << endl;	
	
	cout << "_________" << endl;
	cout << pText << endl;		// Hello Bro
	cout << &pText << endl;		// pText�� �ּ�
	cout << (char*)pText << endl;	// Hello Bro
	cout << (int*)pText << endl;	// Hello Bro�� �ּ�

	cout << *pText << endl;			// H
	cout << &pText[0] << endl;		// Hello Bro


	// ����ü ������
	__tagStudet	tStudent = {};
	tStudent.iKor = 100;

	cout << "���� : " << tStudent.iKor << endl;

	__tagStudet* pStudent = &tStudent;
	(*pStudent).iKor = 50;

	cout << "���� : " << tStudent.iKor << endl;
	/*
		������ �켱���� ������. �� ���� ����Ѵ�.
		�޸��ּ� .�� �߸��� �����̴�.
		�׷��Ƿ� *pStudent�� ��ȣ�� ������ �Ŀ� .�� �̿��ؼ� ����Ű�� ����� ��������� �����ؾ� �Ѵ�.
	*/
	pStudent->iKor = 80;
	cout << "���� : " << tStudent.iKor << endl;

	/*
		�޸��ּ� ->�� �̿��ؼ� ����Ű�� ����� ����� ������ �� �ִ�.
	*/

	/*
		void :	c++���� void�� �ǹ̴� Ÿ���� ����.
				void* ������ �����ϰ� �Ǹ� �� ������ � Ÿ���� �޸� �ּҵ� ��� ������ �����ϴ�.
				��, �������� �Ұ����ϰ� �޸� �ּҸ� ������ �����ϴ�.
	*/

	int iNumber = 100;
	void* pVoid = &iNumber;

	cout << "iNumber : " << iNumber << endl;
	cout << "iNumber Address : " << &iNumber << endl;
	cout << "iNumber Address : " << pVoid << endl;

//	*pVoid = 10;

	pVoid = &tStudent;
	cout << "tStudent Address : " << &tStudent << endl;
	cout << "tStudent Address : " << pVoid << endl;

	pVoid = &iNumber;

	int* pConvert = (int*)pVoid;
	*pConvert = 1004;
	cout << iNumber << endl;

	*((int*)pVoid) = 100;
	cout << iNumber << endl;
}