#include <iostream>

#define		NUM_4	4

using namespace std;

enum NUM
{
	NUM_0,		// 아무것도 부여하지 않을 경우 0부터 1씩 차례대로 값이 부여된다.
	NUM_1,
	NUM_2,
	NUM_3,
};

int main()
{
	/*
		switch 문 : 조건문의 한 종류
		형태 : switch (변수) {}

		코드블럭 안에는 case break 구문이 들어간다
		case 상수 : 의 형태로 처리가 되고 변수 값이 무엇인지에 따라서
		case 뒤에 오는 상수를 비교하게 된다.
	*/

	int iNumber;
	cout << "숫자를 입력하세요 : ";
	cin >> iNumber;

	switch (iNumber)
	{
	case NUM_0:
		cout << "입력한 숫자는 0입니다." << endl;
		break;
	case NUM_1:
		cout << "입력한 숫자는 1입니다." << endl;
		break;
	case NUM_2:
		cout << "입력한 숫자는 2입니다." << endl;
		break;
	case NUM_3:
		cout << "입력한 숫자는 3입니다." << endl;
		break;
	case NUM_4:
		cout << "입력한 숫자는 3입니다." << endl;
		break;
	default:
		cout << "그 외의 숫자입니다." << endl;
		break;
	}

	/*
		열거체 : 연속된 숫자에 이름을 부여할 수 있는 기능이다.
		
		형태 : enum 열거체 명 {}
	*/


	NUM		eNum;

	cout << sizeof(NUM) << endl;		// 열거체는 4바이트
	cout << typeid(NUM).name() << endl;


	return 0;
}