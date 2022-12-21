#include <iostream>

using namespace std;

int main()
{
	// 제어문 : 조건문, 반복문, 분기문
	
	// 조건문 : if문, ~else, switch ~ case
	// 반복문 : for문, while문, do while문
	// 분기문 : break, continue, goto, return
	

	const int iAttack = 0x00000001;		//	     	1
	const int iArmor = 0x00000002;		//		   10
	const int iHP = 0x00000004;			//		  100
	const int iMP = 0x00000008;			//		 1000
	const int iCritical = 0x00000010;	//		10000

	int iBuf = iAttack;
	// 10101
	// 00100
	// 00100

	/*
		if문 : 조건을 체크해주는 기능
		형태 : if (조건식) { } <- 코드블럭이라고 함. 
	*/

	//if ((iBuf & iAttack) != 0)
	//{
	//	cout << "Attack 버프가 있습니다." << endl;
	//}

	//if ((iBuf & iArmor) != false)
	//{
	//	cout << "Armor 버프가 있습니다." << endl;
	//}

	//if ((iBuf & iHP))		//	4
	//{
	//	cout << "HP 버프가 있습니다." << endl;
	//}

	//if ((iBuf & iMP) != false)
	//{
	//	cout << "MP 버프가 있습니다." << endl;
	//}

	//if ((iBuf & iCritical))
	//{
	//	cout << "Critical 버프가 있습니다." << endl;
	//}


	/*if ((iBuf & iHP))
	{
		cout << "HP 버프가 있습니다." << endl;
	}
	else
	{
		if ((iBuf & iCritical))
		{
			cout << "Critical 버프가 있습니다." << endl;
		}
		else
		{
			cout << "버프가 없습니다." << endl;
		}
	}*/



	if ((iBuf & iHP))
	{
		cout << "HP 버프가 있습니다." << endl;
	}
	else if ((iBuf & iCritical))
	{
		cout << "Critical 버프가 있습니다." << endl;
	}
	else
	{
		cout << "버프가 없습니다." << endl;
	}


	int iNumber;
	cout << "숫자를 입력하세요 : ";
	cin >> iNumber;

	if (10 <= iNumber && iNumber <= 20)
		cout << "10 ~ 20 사이의 숫자입니다." << endl;

	else if (21 <= iNumber && iNumber <= 30)
		cout << "21 ~ 30 사이의 숫자입니다." << endl;

	else
		cout << "그 외의 숫자입니다." << endl;
	


	return 0;
}