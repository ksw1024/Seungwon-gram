#include <iostream>

using namespace std;

int g_iNumber = 10;

int main()
{
	/*
		do while : 반복문의 한 종류이다.
		형태 : do {} while(조건식); 의 형태로 구성된다.

		while문은 처음 진입부터 조건식을 체크하지만 do while문은
		처음 한번은 무조건 동작이 되고 그 후에 조건식을 체크해서 true일 경우 반복해서 동작하는 반복문이다.
	*/

	int iNumber = 0;

	do 
	{
		cout << "iNumber : " << iNumber << endl;
	} while (iNumber > 0);

	
	bool bActive = true;
	while (iNumber > 0 || bActive)
	{
		if (bActive)
			bActive = 0;

		cout << "ASCII of 'A' : " << 65 << endl;
		cout << "iNumber : " << iNumber << endl;
	}

	/*
		배열이란 : 여러 개의 변수를 한번에 생성해 줄 수 있는 기능
		
		형태 : 변수의 타입(데이터 타입) 배열명[갯수];	의 형태로 선언할 수 있다.
		
		배열의 특징 : 배열은 연속된 메모리 블럭에 공간이 할당된다.
					 배열은 인덱스를 이용해서 원하는 부분에 접근하여 값을 저장할 수 있따.
					 인덱스는 0부터 N - 1까지 존재한다.

					 즉. 10개를 저장하려면 0 ~ 9번인덱스까지 총 10개의 인덱스를 가지게 된다.
	*/

	int iValue1;	// 쓰레기 값
	int iValue2;

//	cout << iValue << endl;

	if (true)
	{
		float fPie = 3.14f;
	}

	cout << g_iNumber << endl;
	g_iNumber = 20;
	cout << g_iNumber << endl;

	float fDoublePie = 6.28f;



//	int iArray[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int iArray[10] = { 1,2,3,4,5 };
	int iArray[10] = {};

	for (int i = 0; i < 10; i++)
	{
		cout << iArray[i] << endl;
	}

	int	iArray2[10][10] = { {1,2,3}, {4,5,6}, {1,3,2,4,5,} };

	/*
		2차원 배열의 개수는 앞의 수 * 뒤의 수
	*/

	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			cout << iArray2[i][j] << "\t";
		}
		cout << endl << endl;
	}


	return 0;
}