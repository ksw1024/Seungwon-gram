#include <iostream>

using namespace std;

int main()
{
	/*
		while : 반복문의 한 종류이다.
		형태 : while(조건식) {}
	*/

	int iNumber = 0;

	while (iNumber < 10)
	{
		cout << iNumber << endl;
		++iNumber;

		if (iNumber == 4)
		{
			break;	// : 가장 가까운 반복문을 탈출 (switch 나가는 용도 가능)
		}
	}


	// 참   : 0이 아닌 모든 수 true:1
	// 거짓 : 0:false

	bool b = true;

	while (true)
	{
		cout << "Hello World";
	}


	return 0;
}