#include <iostream>		// 전처리기
#include "Func.h"

using namespace std;

using namespace SEUNGWON;
using namespace _TEST;

int main()	// main() : 프로그램의 시작점.
{
	cout << "Hello World!" << std::endl;	// cout : 출력		(이스케이프 문자)

	SEUNGWON::print_sw("Hello Brother\n");

	_TEST::print_sw("Hi");

	return 0;
}


/*
	1. 컴파일 단계	: 고수준 언어에서 기계어로 번역
	2. 링크 단계		: 나누어진 파일들을 다 연결해주는 단계
	3. 빌드 단계		: 프로그램을 만드는 단계
*/