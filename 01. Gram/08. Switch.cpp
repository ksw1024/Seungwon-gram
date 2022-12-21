#include <iostream>

#define		NUM_4	4

using namespace std;

enum NUM
{
	NUM_0,		// �ƹ��͵� �ο����� ���� ��� 0���� 1�� ���ʴ�� ���� �ο��ȴ�.
	NUM_1,
	NUM_2,
	NUM_3,
};

int main()
{
	/*
		switch �� : ���ǹ��� �� ����
		���� : switch (����) {}

		�ڵ�� �ȿ��� case break ������ ����
		case ��� : �� ���·� ó���� �ǰ� ���� ���� ���������� ����
		case �ڿ� ���� ����� ���ϰ� �ȴ�.
	*/

	int iNumber;
	cout << "���ڸ� �Է��ϼ��� : ";
	cin >> iNumber;

	switch (iNumber)
	{
	case NUM_0:
		cout << "�Է��� ���ڴ� 0�Դϴ�." << endl;
		break;
	case NUM_1:
		cout << "�Է��� ���ڴ� 1�Դϴ�." << endl;
		break;
	case NUM_2:
		cout << "�Է��� ���ڴ� 2�Դϴ�." << endl;
		break;
	case NUM_3:
		cout << "�Է��� ���ڴ� 3�Դϴ�." << endl;
		break;
	case NUM_4:
		cout << "�Է��� ���ڴ� 3�Դϴ�." << endl;
		break;
	default:
		cout << "�� ���� �����Դϴ�." << endl;
		break;
	}

	/*
		����ü : ���ӵ� ���ڿ� �̸��� �ο��� �� �ִ� ����̴�.
		
		���� : enum ����ü �� {}
	*/


	NUM		eNum;

	cout << sizeof(NUM) << endl;		// ����ü�� 4����Ʈ
	cout << typeid(NUM).name() << endl;


	return 0;
}