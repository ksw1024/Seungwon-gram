#include <iostream>

//#include <cstdio>
//#include <cstdlib>
//#include <ctime>

using namespace std;

int main()
{
	srand((unsigned int)time(NULL));

//	printf_s("%d\n", rand());
	
	// 형변환

	int		iNumber = 3;
	float	fPie = 3.141592f;

	iNumber = (int)fPie;		// 형변환 : 암시적형변환, 묵시적형변환

								// 형변환 : 명시적형변환
	 
	
	// 만약에 여기서 0 ~ 99 사이의 값을 얻고 싶다면 어떻게 해야할까?
	cout << rand() % 100 << endl; 

	// 만약 여기서 0 ~ 100 사이의 값을 구하고 싶다면?
	cout << rand() % 101 << endl;

	// 만약 여기서 100 ~ 200 사이의 값을 얻고 싶다면?
	cout << rand() % 101 + 100 << endl;

	// 만약 여기서 0 부터 99.99까지 얻고 싶다면?
	cout << rand() % 10000 / 100.f << endl;



	int iUpgrade;

	cout << "Upgrade 기본 수치를 입력하세요 : ";
	cin >> iUpgrade;

	float fPercent = (rand() % 10000 / 100.f);

	/*
		강화확률이 업그레이드가 
		0 ~ 3 : 무조건
		4 ~ 6 : 40 %
		7 ~ 9 : 10 %
		10 ~ 13 : 1%
		14 ~ 15 : 0.01%
	*/

	cout << "Upgrade : " << iUpgrade << endl;
	cout << "Percent : " << fPercent << endl;

	if (iUpgrade <= 3)
		cout << "강화 성공" << endl;

	else if (4 <= iUpgrade && iUpgrade <= 6)
	{
		if (fPercent < 40.f)
			cout << "강화 성공!" << endl;

		else
			cout << "강화 실패!" << endl;					
	}
	else if (7 <= iUpgrade && iUpgrade <= 9)
	{
		if (fPercent < 10.f)
			cout << "강화 성공!" << endl;

		else
			cout << "강화 실패!" << endl;
	}
	else if (10 <= iUpgrade && iUpgrade <= 13)
	{
		if (fPercent < 1.f)
			cout << "강화 성공!" << endl;

		else
			cout << "강화 실패!" << endl;
	}
	else if (14 <= iUpgrade && iUpgrade <= 15)
	{
		if (fPercent < 0.01f)
			cout << "강화 성공!" << endl;

		else
			cout << "강화 실패!" << endl;
	}

	return 0;
}