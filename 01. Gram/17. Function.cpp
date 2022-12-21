#include <iostream>

using namespace std;

/*
	함수 :	기능을 만들어준다.
			어떤 상황에서든 동작할 수 있도록 유동적인 기능을 만들어준다고 볼 수 있다.
			특정 상황에 내가 원하는 기능을 수행하도록 동작하는 코드를 만드는 것.

	형태 : 리턴타입 함수명 (매개변수 == parameter == 인자) {}의 형태로 구성이 된다.

	리턴타입 :	이 해당 함수가 의도한 기능을 수행하고 그에 따른 결과를 반환해야할 때 그 데이터 타입에 맞도록 지정해준다.
				정수를 반환해야할 때는 int type, 실수를 반환할 때는 float, double같은 원하는 데이터 타입을 맞게 지정해주면 된다.

	함수명 :	말 그대로 함수의 이름이다.	
			이 해당 함수가 하는 역할을 명확하게 표기해주는 것이 코드 가독성에 좋다.

	매개변수 - 파라미터 : 해당 함수를 사용할 때 넘겨줄 값이 필요한 경우 파라미터를 활용하여 값을 넘겨받아 처리한다.

	해당 함수를 호출하면 코드블럭 안의 코드가 동작이 된다.
*/

int Sum(int _X, int _Y)
{
	return _X + _Y;
}

void OutputText()
{
	cout << "Hello World Bro Man" << endl;

	/*
		함수는 단순히 만들어 놓기만 해서는 아무런 동작도 하지 않는다.
		기능을 동작시키기 위해서는 반드시 해당 함수를 호출시켜줘야 한다.
		- main()함수를 통해서 반드시 원하는 해당 함수까지 호출구조로 호출이 되어야 한다.
	*/
}

void _printf(const char* _Text)
{
	cout << _Text << endl;
}

void ChangeNumber(int iNumber)		// Call by Value
{
	iNumber = 9999;
}

void ChangeNumber(int* pNumber)	// Call by Address
{
	*pNumber = 9999;
}

void ChangeNumber(int iNumber1, int iNumber2)
{
	iNumber1 + iNumber2;
}

void Output(int iNum1, int iNum2 = 100)
{
	cout << iNum1 << endl;
	cout << iNum2 << endl;
}

void Output(int iNum1)
{
	cout << iNum1 << endl;
}

int main()
{
	cout << Sum(1, 5) << endl;

	OutputText();

	_printf("승원쨩 하이");

	int iNumber = 0;
	ChangeNumber(&iNumber);
	ChangeNumber(1, 2);
	ChangeNumber(1);

	cout << iNumber << endl;

	/*
		함수 오버로딩 : 같은 이름의 함수를 기능이 다른 함수로 재정의해서 만드는 것
		오버로딩의 조건 : 파라미터의 데이터타입이나 또는 개수가 달라야 오버로딩이 가능하다.


		함수의 디폴트인자 : 파라미터는 기본적으로 값을 넘겨받게 되어있다.
						   그런데 파라미터에 기본적인 값을 대입해두면 인자를 넘겨주지 않을 경우 기본적으로 설정한 값이 되고,
						   인자를 넘겨준 경우 넘겨받은 값으로 인자를 설정하는 기능이다.

						   디폴트 파라미터는 가장 오른쪽부터 넘겨줘야 한다.
	*/

	Output(10);

	return 0;
}