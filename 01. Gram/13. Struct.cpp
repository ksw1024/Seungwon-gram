#include <iostream>

#define		NAME_SIZE		32
using namespace std;

/*
	����ü : ���� �ִ� �������� ��Ƽ� �ϳ��� ���ο� �ڷ����� ������ִ� ����̴�.
	����� ���� �ڷ����̴�.
	���� : struct ����ü�� {};
*/

struct Student
{
	char	strName[NAME_SIZE];

	int		iNumber;
	int		iKor;
	int		iEng;
	int		iMath;
	int		iTotal;

	float	fAverage;
};

int main()
{
	Student		tStudent;
	/*
		�迭�� ����ü�� ������ : ������ ��Ÿ�� �ÿ� �޸𸮿� �ε�� ����� �迭�� ���������� ���ӵ� �޸� ������ �Ҵ�� ����̴�.		
	*/

	Student		tStudentArr[100] = {};

	// ����ü ����� ������ ������ .�����ڸ� �̿��ϸ� �ȴ�.
	tStudent.iEng = 100;

	// tStudent.strName = "Apple";

	/*
		���ڿ��� �迭�� �־��� ������ �������δ� �Ұ����ϴ�.
		strcpy��� �Լ��� �̿��ؼ� ���ڿ��� ����������Ѵ�.

		�ش� �Լ��� ����(�Ķ����)�� ��������, ���� �ҽ��� ������� ���� �ȴ�.
	*/
	strcpy_s(tStudent.strName, "Apple �ȳ��ϼ���");

	// ���ڿ��� ���� : ����, ����, ������ ������ �������� ��� 2����Ʈ : ���̱ǿ��� �Ⱦ��̴°� �� 2����Ʈ
	// ���ڿ��� ���� == ũ�� == ����Ʈ

	cout << "�̸� ���� : " << strlen(tStudent.strName) << endl;

	/*
		strcat_s : ���ڿ��� �ٿ��ִ� ���
	*/

	strcat_s(tStudent.strName, "�ݰ����ϴ�.");
	cout << "�̸� ���� : " << strlen(tStudent.strName) << endl;

	/*tStudent.strName[0] = 'A';
	tStudent.strName[1] = 'p';
	tStudent.strName[2] = 'p';
	tStudent.strName[3] = 'l';
	tStudent.strName[4] = 'e';
	tStudent.strName[5] = '\0';*/

	/*
		���ڿ��� ���� �׻� 0(NULL)�� ������ �Ѵ�.
		������ ���� �� �ִ� ���¿��� ���� ó�� �� �迭 ��ҿ� ���� �־��ְ� �Ǹ�,
		�� ���� �״�� ��µǰ� �־����� ���� �κ��� ������ ������ �״�� ��µȴ�.
		�ֳ��ϸ� ����� �� ���ڿ��� ���� �ν��� �� ���� �����̴�.
		0�� ���� �ϴµ� ������ ���� ���ֱ� �����̴�.
	*/

	// ���ڿ��� ���� 0(����) == NULL == false == '\0'

	/*
		strcmp : �� ���ڿ��� �����ִ� �Լ�
	*/

	char strTest[NAME_SIZE] = {};
	strcpy_s(tStudent.strName, "��¿�");
	cout << "���� �̸� : ";
	cin >> strTest;

	if (strcmp(tStudent.strName, strTest) == 0)
	{
		cout << "���� ���ڿ�" << endl;
	}
	else if (strcmp(tStudent.strName, strTest) > 0)
	{
		cout << "���� ���ڿ��� �� �ڿ� �ִ� ���ڿ�" << endl;
	}
	else
	{
		cout << "���� ���ڿ��� �� �տ� �ִ� ���ڿ�" << endl;
	}

	cout << "�� �� : " << tStudent.strName << endl;
	cout << "�� �� : " << tStudent.iNumber << endl;
	cout << "�� �� : " << tStudent.iKor << endl;
	cout << "�� �� : " << tStudent.iEng << endl;
	cout << "�� �� : " << tStudent.iMath << endl;
	cout << "�� �� : " << tStudent.iTotal << endl;
	cout << "�� �� : " << tStudent.fAverage << endl;

	return 0;
}