#include <iostream>

using namespace std;

int main()
{
	// ��� : ���ǹ�, �ݺ���, �б⹮
	
	// ���ǹ� : if��, ~else, switch ~ case
	// �ݺ��� : for��, while��, do while��
	// �б⹮ : break, continue, goto, return
	

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
		if�� : ������ üũ���ִ� ���
		���� : if (���ǽ�) { } <- �ڵ���̶�� ��. 
	*/

	//if ((iBuf & iAttack) != 0)
	//{
	//	cout << "Attack ������ �ֽ��ϴ�." << endl;
	//}

	//if ((iBuf & iArmor) != false)
	//{
	//	cout << "Armor ������ �ֽ��ϴ�." << endl;
	//}

	//if ((iBuf & iHP))		//	4
	//{
	//	cout << "HP ������ �ֽ��ϴ�." << endl;
	//}

	//if ((iBuf & iMP) != false)
	//{
	//	cout << "MP ������ �ֽ��ϴ�." << endl;
	//}

	//if ((iBuf & iCritical))
	//{
	//	cout << "Critical ������ �ֽ��ϴ�." << endl;
	//}


	/*if ((iBuf & iHP))
	{
		cout << "HP ������ �ֽ��ϴ�." << endl;
	}
	else
	{
		if ((iBuf & iCritical))
		{
			cout << "Critical ������ �ֽ��ϴ�." << endl;
		}
		else
		{
			cout << "������ �����ϴ�." << endl;
		}
	}*/



	if ((iBuf & iHP))
	{
		cout << "HP ������ �ֽ��ϴ�." << endl;
	}
	else if ((iBuf & iCritical))
	{
		cout << "Critical ������ �ֽ��ϴ�." << endl;
	}
	else
	{
		cout << "������ �����ϴ�." << endl;
	}


	int iNumber;
	cout << "���ڸ� �Է��ϼ��� : ";
	cin >> iNumber;

	if (10 <= iNumber && iNumber <= 20)
		cout << "10 ~ 20 ������ �����Դϴ�." << endl;

	else if (21 <= iNumber && iNumber <= 30)
		cout << "21 ~ 30 ������ �����Դϴ�." << endl;

	else
		cout << "�� ���� �����Դϴ�." << endl;
	


	return 0;
}