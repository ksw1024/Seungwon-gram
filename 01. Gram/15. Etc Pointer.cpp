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
	cout << &pText << endl;		// pText의 주소
	cout << (char*)pText << endl;	// Hello Bro
	cout << (int*)pText << endl;	// Hello Bro의 주소

	cout << *pText << endl;			// H
	cout << &pText[0] << endl;		// Hello Bro


	// 구조체 포인터
	__tagStudet	tStudent = {};
	tStudent.iKor = 100;

	cout << "국어 : " << tStudent.iKor << endl;

	__tagStudet* pStudent = &tStudent;
	(*pStudent).iKor = 50;

	cout << "국어 : " << tStudent.iKor << endl;
	/*
		연산자 우선순위 때문에. 을 먼저 써야한다.
		메모리주소 .은 잘못된 문법이다.
		그러므로 *pStudent를 괄호로 감싸준 후에 .을 이용해서 가리키는 대상의 멤버변수에 접근해야 한다.
	*/
	pStudent->iKor = 80;
	cout << "국어 : " << tStudent.iKor << endl;

	/*
		메모리주소 ->를 이용해서 가리키는 대상의 멤버에 접근할 수 있다.
	*/

	/*
		void :	c++에서 void의 의미는 타입이 없다.
				void* 변수를 선언하게 되면 이 변수는 어떤 타입의 메모리 주소든 모두 저장이 가능하다.
				단, 역참조가 불가능하고 메모리 주소만 저장이 가능하다.
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