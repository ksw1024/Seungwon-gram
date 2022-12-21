#include <iostream>

using namespace std;
int main()
{
	/*
		��� : ������ �ʴ� ��. ���� �ѹ� �����س����� �ٲ� �� ����.
		����� ����� ���ÿ� ���� �����صξ�� �Ѵ�. (�ʱ�ȭ)
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

	// ������ �����
	/*iNumber = iNumber + 2;
	iNumber += 2;*/

	cout << "Attack : " << (iBuf & iAttack) << endl;
	cout << "Armor : " << (iBuf & iArmor) << endl;
	cout << "HP : " << (iBuf & iHP) << endl;
	cout << "MP : " << (iBuf & iMP) << endl;
	cout << "Critical : " << (iBuf & iCritical) << endl;

	/*
		����Ʈ ������ : << >> �� ����Ͽ� �� �� ������ �����Ͽ� ������ ������ �Ѵ�. 
	
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
		���������� : ++, -- �� �ִ�. ���� 1����, 1����
	*/

	iNumber = 10;

	// ���� ������, ��ġ
	++iNumber;

	// ���� ������, ��ġ
	iNumber++;

	cout << iNumber << endl;	// 12

	cout << ++iNumber << endl;	// 13
	cout << iNumber++ << endl;	// 13	
	cout << iNumber << endl;	// 14



	return 0;
}