#include <iostream>

using namespace std;

int main()
{
	/*
		Pointer :	가리키다. 일반 변수는 일반적인 값을 저장하지만 포인터 변수는 메모리 주소를 저장한다.
					모든 변수 타입은 포인터 타입으로 선언할 수 있다.
					int 변수의 주소는 int Pointer 변수에 저장을 해야한다.
					Pointer는 메모리 주소를 담아놓는 변수이기 때문에 메모리 주소는 x86(32비트) x64로 개발하면 64비트로 개발이 되는데
					각각 x86으로 개발할 때는 4byte가 나온다. x64로 개발할 때는 8바이트가 나온다.

					포인터는 자기 스스로 아무런 일도 할 수 없다.
					반드시 다른 변수의 메모리 주소를 가지고 있어야 일을 할 수 있는데 가지고 있는 그 메모리 주소에 접근해서 값을 제어할 수 있다.
	
		형태 : 변수타입* 변수명;	의 형태로 선언한다.
	*/

	// 주소 : 경기도 화성시 동탄 영천동 동탄역센트럴상록아파트 636동 1602호 현관으로부터 4미터 전방에 위치한 방문으로부터 왼쪽으로 1M 근방에 위치한 책상 앞.
		
	int iNumber = 100;

	// 변수 선언시 *을 붙여주게 되면 해당 타입의 포인터 변수가 선언된다.
	// 변수 앞에 &를 붙여주면 해당 변수의 메모리 주소가 된다.
	// pNum은 iNumber변수의 메모리 주소를 값으로 갖게 된다.
	// 그러므로 pNum을 이용해서 iNumber의 값을 제어할 수 있다.

	int* pNum;

	cout << "크기 : " << sizeof(int*) << endl;		// 4	4
	cout << "크기 : " << sizeof(char*) << endl;		// 1	4
	cout << "크기 : " << sizeof(double*) << endl;	// 8	4
	cout << "크기 : " << sizeof(double) << endl;		// 8	8
	
	/*
		16비트 : 65536
		32비트 : 4,294,967,296
		64비트 : 1800경 
	*/

	pNum = &iNumber;

	cout << "iNumber Value : " << iNumber << endl;
	cout << "iNumber Address : " << &iNumber << endl;
	cout << "pNum Value : " << pNum << endl;
	cout << "pNum Address : " << &pNum << endl;


	/*
		역참조 : pNum을 이용해서 iNumber의 값을 제어가 가능하다.
		역참조를 이용해서 값을 얻어오거나 변경할 수 있다.
		역참조는 포인터 변수 앞에 *을 붙이게 되면 역참조가 된다.
	*/
	
	*pNum = 5000;

	cout << "pNum Data (Dereference) : " << *pNum << endl;
	cout << "iNumber Value : " << iNumber << endl;

	pNum = &iNumber;	//  pNum은 iNumber를 가리킨다.
	*pNum = iNumber;	//	iNumber = iNumber;
	*pNum = 10;			//	iNumber = 10;


	/*
		특수한 포인터 : 이중포인터, char*, void*, func*

		포인터와 배열의 관계 : 배열명은 포인터이다. 배열명 자체가 해당 배열의 메모리에서의 시작점 주소를 의미한다.
	*/

	int iArray[10] = { 1,2,3,4,5,6,7,8,9 };
	int* pArray = iArray;


	cout << "iArray Address : " << iArray << endl;
	cout << "Arr[0] Address : " << &iArray[0] << endl;
	cout << "Arra ptr Data : " << pArray << endl;

	cout << "iArray로 접근 : " << iArray[2] << endl;
	cout << "pArray로 접근 : " << pArray[2] << endl;

	/*
		포인터 연산 : + - 연산을 제공한다. 그렇기 때문에 ++, --같은 증감도 가능하다.
		1이 증가하게 되면 단순히 메모리 주소값이 1증가하는 것이 아니다.

		int Pointer의 경우 int Type의 메모리 주소를 갖게되는데, 메모리 주소에 1을 더해주면
		1증가가 아닌 가리키는 해당 포인터가 가리키는 변수 타입의 크기만큼 증가하게 된다.
		int Pointer이므로 4바이트 만큼 증가한다.
	*/

	cout << pArray << endl;
	cout << pArray + 2 << endl;

	
	cout << *pArray << endl;
	cout << *(pArray + 2) << endl;
	cout << *pArray + 100 << endl;
	
	return 0;
}