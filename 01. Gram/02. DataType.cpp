#include <iostream>

using namespace std;

int main()
{
	/*
		변수 : 변하는 수. 값이 바뀔 수 있다. (값을 저장하는 공간) 

		용량의 최소 단위 : bit
		1byte = 8bit
		1K byte = 1024 byte
		1M byte = 1024 K byte
		1G byte = 1024 M byte

		종류		|	용량(크기)	|	데이터	|		표현 범위		|	unsigned	|
		char	|	1byte		|	문자		|		-128 ~ 127		|	0 ~ 255		|
		bool	|	1byte		|	참/거짓	|		true / false	|  true / false	|
		short	|	2byte		|	정수		|		-32768 ~ 32767	|	0 ~ 65535	|
		int		|	4byte		|	정수		|		-21억 ~ 21억		|	0 ~ 42억		|
		float	|	4byte		|	실수		|		
		double	|	8byte		|	실수		|
	*/

	// 대입연산자 : = 오른쪽에 있는 값을 왼쪽 변수에 넣는다.
	
	int iNumber;
	iNumber = 10;
//	1010(2진수) = 10(10진수);
	cout << iNumber << endl;

	bool bTest = true;
	bTest = true;
	cout << bTest << endl;	// false : 정수 0,	true : 0이 아닌 모든 수
	
	char cTest = 65;
	cout << cTest << endl;

	return 0;
}