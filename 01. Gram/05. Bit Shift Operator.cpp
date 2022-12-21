#include <iostream>

using namespace std;
int main()
{
	/*
		상수 : 변하지 않는 수. 값을 한번 지정해놓으면 바꿀 수 없다.
		상수는 선언과 동시에 값을 지정해두어야 한다. (초기화)
	*/

	const int iAttack = 0x00000001;		//	     	1
	const int iArmor = 0x00000002;		//		   10
	const int iHP = 0x00000004;			//		  100
	const int iMP = 0x00000008;			//		 1000
	const int iCritical = 0x00000010;	//		10000

	int iBuf = iAttack | iHP | iCritical;
	// 10101
	// 00100
	// 10001
	// 00100
	// 10101
	iBuf ^= iHP;
	iBuf ^= iHP;

	// 연산자 축약형
	/*iNumber = iNumber + 2;
	iNumber += 2;*/

	cout << "Attack : " << (iBuf & iAttack) << endl;
	cout << "Armor : " << (iBuf & iArmor) << endl;
	cout << "HP : " << (iBuf & iHP) << endl;
	cout << "MP : " << (iBuf & iMP) << endl;
	cout << "Critical : " << (iBuf & iCritical) << endl;

	/*
		쉬프트 연산자 : << >> 를 사용하여 값 대 값으로 연산하여 값으로 나오게 한다. 
	
		00000000 00000000 00000000 00010100		 20
	*/

	int Number = 20;
	cout << Number << endl;

	Number >>= 2;
	cout << Number << endl;

	Number <<= 2;
	cout << Number << endl;

	Number <<= 2;
	cout << Number << endl;


	int iHigh = 187;
	int iLow = 13560;

	cout << "High : " << iHigh << endl;
	cout << "Low : " << iLow << endl;

	int iNumber = 187;
	iNumber <<= 16;
	iNumber |= 13560;

	cout << "High : " << (iNumber >> 16) << endl;
	cout << "Low : " << (iNumber & 0x0000ffff ) << endl;


	/*
		증감연산자 : ++, -- 가 있다. 각각 1증가, 1감소
	*/

	iNumber = 10;

	// 전위 연산자, 전치
	++iNumber;

	// 후위 연산자, 후치
	iNumber++;

	cout << iNumber << endl;	// 12

	cout << ++iNumber << endl;	// 13
	cout << iNumber++ << endl;	// 13	
	cout << iNumber << endl;	// 14



	return 0;
}