#include <iostream>

using namespace std;

int g_iNumber = 10;

int main()
{
	/*
		do while : �ݺ����� �� �����̴�.
		���� : do {} while(���ǽ�); �� ���·� �����ȴ�.

		while���� ó�� ���Ժ��� ���ǽ��� üũ������ do while����
		ó�� �ѹ��� ������ ������ �ǰ� �� �Ŀ� ���ǽ��� üũ�ؼ� true�� ��� �ݺ��ؼ� �����ϴ� �ݺ����̴�.
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
		�迭�̶� : ���� ���� ������ �ѹ��� ������ �� �� �ִ� ���
		
		���� : ������ Ÿ��(������ Ÿ��) �迭��[����];	�� ���·� ������ �� �ִ�.
		
		�迭�� Ư¡ : �迭�� ���ӵ� �޸� ���� ������ �Ҵ�ȴ�.
					 �迭�� �ε����� �̿��ؼ� ���ϴ� �κп� �����Ͽ� ���� ������ �� �ֵ�.
					 �ε����� 0���� N - 1���� �����Ѵ�.

					 ��. 10���� �����Ϸ��� 0 ~ 9���ε������� �� 10���� �ε����� ������ �ȴ�.
	*/

	int iValue1;	// ������ ��
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
		2���� �迭�� ������ ���� �� * ���� ��
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