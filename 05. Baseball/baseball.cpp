#include <iostream>

#define		MAX_GAMECOUNT	100

using namespace std;

int main()
{
	srand((unsigned int)time(NULL));

	int iRecordArr[MAX_GAMECOUNT][3] = {};

	int iNumber[9] = {};
	for (int i = 0; i < 9; i++)
	{
		iNumber[i] = i + 1;
	}

	int iTemp, idx1, idx2;
	for (int i = 0; i < 1000; i++)
	{
		idx1 = rand() % 9;
		idx2 = rand() % 9;

		iTemp = iNumber[idx1];
		iNumber[idx1] = iNumber[idx2];
		iNumber[idx2] = iTemp;
	}

	int iStrike = 0, iBall = 0;
	int iInput[3] = {};
	int iGameCount = 1;

	while (true)
	{
		system("cls");
		cout << iGameCount << "ȸ" << endl;
		cout << "* * *" << endl << endl;
	//	cout << iNumber[0] << "\t" << iNumber[1] << "\t" << iNumber[2] << endl;

		for (int i = 0; i < iGameCount - 1; i++)
		{
			cout << iRecordArr[i][0] << " ";
			cout << iRecordArr[i][1] << " ";
			cout << iRecordArr[i][2] << endl << endl;
		}

		cout << "1 ~ 9 ������ ���� �߿� ���� 3���� �Է��ϼ���! (0:����) : ";

		cin >> iInput[0] >> iInput[1] >> iInput[2];

		iRecordArr[iGameCount - 1][0] = iInput[0];
		iRecordArr[iGameCount - 1][1] = iInput[1];
		iRecordArr[iGameCount - 1][2] = iInput[2];

		if (iInput[0] == 0 || iInput[1] == 0 || iInput[2] == 0)
			break;

		else if (iInput[0] < 0 || iInput[0] > 9 || iInput[1] < 0 || iInput[1] > 9 || iInput[2] < 0 || iInput[2] > 9)
		{
			cout << endl << "�߸��� ���ڸ� �Է��Ͽ����ϴ�." << endl << endl;
			system("pause");
			continue;
		}

		iStrike = iBall = 0;

		for (int i = 0; i < 3; i++)	//	����� �� ������ �ε���
		{
			for (int j = 0; j < 3; j++)	// �Է¹��� ������ �ε���
			{
				if (iNumber[i] == iInput[j])
				{
					// ������ Ball �ƴϸ� Strike
					if (i == j)
						++iStrike;

					else
						++iBall;

					break;
				}
			}
		}

		if (iStrike == 3)
		{
			cout << iGameCount << "ȸ�� ���� ���ڸ� ��� ������ϴ�!!" << endl;
			break;
		}

		else if (iStrike == 0 && iBall == 0)
			cout << "OUT !!!!!!" << endl;

		else
			cout << iStrike << " Strike " << iBall << " Ball" << endl;

		++iGameCount;

		system("pause");
	}

	cout << endl << "������ �����մϴ�." << endl << endl;

	return 0;
}