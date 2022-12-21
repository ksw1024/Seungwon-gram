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
		cout << iGameCount << "회" << endl;
		cout << "* * *" << endl << endl;
	//	cout << iNumber[0] << "\t" << iNumber[1] << "\t" << iNumber[2] << endl;

		for (int i = 0; i < iGameCount - 1; i++)
		{
			cout << iRecordArr[i][0] << " ";
			cout << iRecordArr[i][1] << " ";
			cout << iRecordArr[i][2] << endl << endl;
		}

		cout << "1 ~ 9 사이의 숫자 중에 숫자 3개를 입력하세요! (0:종료) : ";

		cin >> iInput[0] >> iInput[1] >> iInput[2];

		iRecordArr[iGameCount - 1][0] = iInput[0];
		iRecordArr[iGameCount - 1][1] = iInput[1];
		iRecordArr[iGameCount - 1][2] = iInput[2];

		if (iInput[0] == 0 || iInput[1] == 0 || iInput[2] == 0)
			break;

		else if (iInput[0] < 0 || iInput[0] > 9 || iInput[1] < 0 || iInput[1] > 9 || iInput[2] < 0 || iInput[2] > 9)
		{
			cout << endl << "잘못된 숫자를 입력하였습니다." << endl << endl;
			system("pause");
			continue;
		}

		iStrike = iBall = 0;

		for (int i = 0; i < 3; i++)	//	맞춰야 할 숫자의 인덱스
		{
			for (int j = 0; j < 3; j++)	// 입력받은 숫자의 인덱스
			{
				if (iNumber[i] == iInput[j])
				{
					// 무조건 Ball 아니면 Strike
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
			cout << iGameCount << "회차 만에 숫자를 모두 맞췄습니다!!" << endl;
			break;
		}

		else if (iStrike == 0 && iBall == 0)
			cout << "OUT !!!!!!" << endl;

		else
			cout << iStrike << " Strike " << iBall << " Ball" << endl;

		++iGameCount;

		system("pause");
	}

	cout << endl << "게임을 종료합니다." << endl << endl;

	return 0;
}