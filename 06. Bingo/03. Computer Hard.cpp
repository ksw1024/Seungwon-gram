#include <iostream>

#define BINGO_SIZE		5
#define NAME_SIZE		32
#define BINGO_COUNT		5

using namespace std;

enum COMPUTER_MODE
{
	CM_EASY = 1,
	CM_HARD,
	END,
};

enum LINE_NUMBER
{
	LN_H1,		 // Line Number Horizontal ����
	LN_H2,
	LN_H3,
	LN_H4,
	LN_H5,

	LN_V1,		 // Line Number Vertical ����
	LN_V2,
	LN_V3,
	LN_V4,
	LN_V5,

	LN_LT,
	LN_RT,
};

int main()
{
	srand((unsigned int)time(NULL));

	int iPlayerNumber[BINGO_SIZE * BINGO_SIZE] = {};
	int iComputerNumber[BINGO_SIZE * BINGO_SIZE] = {};

	for (int i = 0; i < BINGO_SIZE * BINGO_SIZE; i++)
	{
		iPlayerNumber[i] = i + 1;
		iComputerNumber[i] = i + 1;
	}

	int iTemp, idx1, idx2;
	for (int i = 0; i < 1000; i++)
	{
		idx1 = rand() % (BINGO_SIZE * BINGO_SIZE);
		idx2 = rand() % (BINGO_SIZE * BINGO_SIZE);

		iTemp = iPlayerNumber[idx1];
		iPlayerNumber[idx1] = iPlayerNumber[idx2];
		iPlayerNumber[idx2] = iTemp;

		idx1 = rand() % (BINGO_SIZE * BINGO_SIZE);
		idx2 = rand() % (BINGO_SIZE * BINGO_SIZE);

		iTemp = iComputerNumber[idx1];
		iComputerNumber[idx1] = iComputerNumber[idx2];
		iComputerNumber[idx2] = iTemp;
	}

	int iPlayerBingo = 0;
	int iComputerBingo = 0;

	int iNoneSelect[BINGO_SIZE * BINGO_SIZE] = {};
	int iNoneSelectCount = 0;

	char strName[NAME_SIZE] = {};
	system("cls");

	cout << "___________________ Bingo Game ___________________" << endl << endl;
	cout << "�������� �̸��� �Է����ּ��� : ";
	cin >> strName;


	int iComputerMode;
	while (true)
	{
		system("cls");
		cout << "___________________ Bingo Game ___________________" << endl << endl;

		cout << "1. Easy" << endl << endl;
		cout << "2. Hard" << endl << endl << endl << endl;

		cout << "��ǻ�� ���̵��� �������ּ��� : ";

		cin >> iComputerMode;

		if (CM_EASY <= iComputerMode && iComputerMode <= CM_HARD)
			break;
	}


	while (true)
	{
		system("cls");

		cout << "___________________ Bingo Game ___________________" << endl;
		cout << "                    " << strName << endl;

		for (int i = 0; i < BINGO_SIZE; i++)
		{
			for (int j = 0; j < BINGO_SIZE; j++)
			{
				if (iPlayerNumber[i * BINGO_SIZE + j] == INT_MAX)
					cout << "*\t";
				else
					cout << iPlayerNumber[i * BINGO_SIZE + j] << "\t";
			}
			cout << endl << endl << endl;
		}
		cout << "Bingo Line : " << iPlayerBingo << endl << endl;

		cout << "                    Computer" << endl;
		for (int i = 0; i < BINGO_SIZE; i++)
		{
			for (int j = 0; j < BINGO_SIZE; j++)
			{
				if (iComputerNumber[i * BINGO_SIZE + j] == INT_MAX)
					cout << "*\t";
				else
					cout << iComputerNumber[i * BINGO_SIZE + j] << "\t";
			}
			cout << endl << endl << endl;
		}
		cout << "Bingo Line : " << iComputerBingo << endl << endl;


		// �º�����
		if (iPlayerBingo >= BINGO_COUNT && iComputerBingo >= BINGO_COUNT)
		{
			if (iPlayerBingo > iComputerBingo)
				cout << "Player Win!!!" << endl;
			else if (iPlayerBingo < iComputerBingo)
				cout << "Computer Win!!!" << endl;
			else
				cout << "Draw !!!!!!!!!!" << endl;

			break;
		}
		else if (iPlayerBingo >= BINGO_COUNT || iComputerBingo >= BINGO_COUNT)
		{
			if (iPlayerBingo > iComputerBingo)
				cout << "Player Win!!!" << endl;

			else if (iPlayerBingo < iComputerBingo)
				cout << "Computer Win!!!" << endl;

			break;
		}

		cout << "���ڸ� �Է��ϼ���(0:����) : ";
		int iInput;
		cin >> iInput;

		if (iInput == 0)
			break;

		else if (iInput < 1 || iInput > BINGO_SIZE * BINGO_SIZE)
			continue;

		bool bAcc = true;

		// ���ڸ� ���� �ٲ��ش�.
		for (int i = 0; i < (BINGO_SIZE * BINGO_SIZE); i++)
		{
			if (iInput == iPlayerNumber[i])
			{
				iPlayerNumber[i] = INT_MAX;
				bAcc = false;
				break;
			}
		}

		if (bAcc)
			continue;

		// ���� �Է��� ��ǻ�� �����ǿ��� �ٲ��ش�.
		for (int i = 0; i < (BINGO_SIZE * BINGO_SIZE); i++)
		{
			if (iInput == iComputerNumber[i])
			{
				iComputerNumber[i] = INT_MAX;
				break;
			}
		}


		switch (iComputerMode)
		{
		case CM_EASY:
			iNoneSelectCount = 0;

			for (int i = 0; i < BINGO_SIZE * BINGO_SIZE; i++)
			{
				if (iComputerNumber[i] != INT_MAX)
				{
					iNoneSelect[iNoneSelectCount] = iComputerNumber[i];
					++iNoneSelectCount;
				}
			}

			iInput = iNoneSelect[rand() % iNoneSelectCount];

			break;
		case CM_HARD:

			int iLine = 0;
			int iStarCount = 0;
			int iSaveCount = 0;

			// ���� �� �� üũ
			for (int i = 0; i < BINGO_SIZE; i++)
			{
				iStarCount = 0;
				for (int j = 0; j < BINGO_SIZE; j++)
				{
					if (iComputerNumber[i * BINGO_SIZE + j] == INT_MAX)
						++iStarCount;
				}

				if (iStarCount < BINGO_SIZE && iSaveCount < iStarCount)
				{
					iLine = i;
					iSaveCount = iStarCount;
				}
			}

			// ���� �� �� üũ
			for (int i = 0; i < BINGO_SIZE; i++)
			{
				iStarCount = 0;
				for (int j = 0; j < BINGO_SIZE; j++)
				{
					if (iComputerNumber[j * BINGO_SIZE + i] == INT_MAX)
						++iStarCount;
				}

				if (iStarCount < BINGO_SIZE && iSaveCount < iStarCount)
				{
					iLine = i + LN_V1;
					iSaveCount = iStarCount;
				}
			}

			// �»�� �밢��
			iStarCount = 0;
			for (int i = 0; i < (BINGO_SIZE * BINGO_SIZE); i += (BINGO_SIZE + 1))
			{
				if (iComputerNumber[i] == INT_MAX)
					++iStarCount;
			}
			if (iStarCount < BINGO_SIZE && iSaveCount < iStarCount)
			{
				iLine = LN_LT;
				iSaveCount = iStarCount;
			}

			// ���� �밢��
			iStarCount = 0;
			for (int i = BINGO_SIZE - 1; i <= ((BINGO_SIZE - 1) * BINGO_SIZE); i += (BINGO_SIZE - 1))
			{
				if (iComputerNumber[i] == INT_MAX)
					++iStarCount;
			}
			if (iStarCount < BINGO_SIZE && iSaveCount < iStarCount)
			{
				iLine = LN_RT;
				iSaveCount = iStarCount;
			}


			// ������ �� ���
			if (iLine <= LN_H5)
			{
				for (int i = 0; i < BINGO_SIZE; i++)
				{
					if (iComputerNumber[iLine * 5 + i] != INT_MAX)
					{
						iInput = iComputerNumber[iLine * 5 + i];
						break;
					}
				}
			}

			// ������ �� ���
			else if (iLine <= LN_V5)
			{
				for (int i = 0; i < BINGO_SIZE; i++)
				{
					if (iComputerNumber[i * 5 + (iLine - LN_V1)] != INT_MAX)
					{
						iInput = iComputerNumber[i * 5 + (iLine - LN_V1)];
						break;
					}
				}
			}
			// �»�� �밢���� ���
			else if (iLine == LN_LT)
			{
				for (int i = 0; i < (BINGO_SIZE * BINGO_SIZE); i += (BINGO_SIZE + 1))
				{
					if (iComputerNumber[i] != INT_MAX)
					{
						iInput = iComputerNumber[i];
						break;
					}
				}
			}
			// ���� �밢���� ���
			else if (iLine == LN_RT)
			{
				for (int i = BINGO_SIZE - 1; i <= ((BINGO_SIZE - 1) * BINGO_SIZE); i += (BINGO_SIZE - 1))
				{
					if (iComputerNumber[i] != INT_MAX)
					{
						iInput = iComputerNumber[i];
						break;
					}
				}
			}

			break;
		}


		// ��ǻ�Ͱ� ������ ���ڸ� �÷��̾� �����ǿ��� ���� �ٲ۴�.
		for (int i = 0; i < (BINGO_SIZE * BINGO_SIZE); i++)
		{
			if (iInput == iPlayerNumber[i])
			{
				iPlayerNumber[i] = INT_MAX;
				break;
			}
		}

		// ��ǻ�Ͱ� ������ ���ڸ� ��ǻ�� �����ǿ��� ���� �ٲ۴�.
		for (int i = 0; i < (BINGO_SIZE * BINGO_SIZE); i++)
		{
			if (iInput == iComputerNumber[i])
			{
				iComputerNumber[i] = INT_MAX;
				break;
			}
		}


		iPlayerBingo = 0;
		iComputerBingo = 0;

		int iStar1 = 0, iStar2 = 0;
		int iComputerStar1 = 0, iComputerStar2 = 0;

		// ���� ����
		for (int i = 0; i < BINGO_SIZE; i++)
		{
			iStar1 = iStar2 = 0;
			iComputerStar1 = iComputerStar2 = 0;
			for (int j = 0; j < BINGO_SIZE; j++)
			{
				if (iPlayerNumber[i * BINGO_SIZE + j] == INT_MAX)
					++iStar1;

				if (iPlayerNumber[j * BINGO_SIZE + i] == INT_MAX)
					++iStar2;

				if (iComputerNumber[i * BINGO_SIZE + j] == INT_MAX)
					++iComputerStar1;

				if (iComputerNumber[j * BINGO_SIZE + i] == INT_MAX)
					++iComputerStar2;
			}

			if (iStar1 == BINGO_SIZE)
				++iPlayerBingo;

			if (iStar2 == BINGO_SIZE)
				++iPlayerBingo;

			if (iComputerStar1 == BINGO_SIZE)
				++iComputerBingo;

			if (iComputerStar2 == BINGO_SIZE)
				++iComputerBingo;
		}

		// �»�� �밢��
		iStar1 = 0;
		iComputerStar1 = 0;
		for (int i = 0; i < (BINGO_SIZE * BINGO_SIZE); i += (BINGO_SIZE + 1))
		{
			if (iPlayerNumber[i] == INT_MAX)
				++iStar1;

			if (iComputerNumber[i] == INT_MAX)
				++iComputerStar1;
		}
		if (iStar1 == BINGO_SIZE)
			++iPlayerBingo;

		if (iComputerStar1 == BINGO_SIZE)
			++iComputerBingo;

		// ���� �밢��
		iStar1 = 0;
		iComputerStar1 = 0;
		for (int i = BINGO_SIZE - 1; i <= ((BINGO_SIZE - 1) * BINGO_SIZE); i += (BINGO_SIZE - 1))
		{
			if (iPlayerNumber[i] == INT_MAX)
				++iStar1;

			if (iComputerNumber[i] == INT_MAX)
				++iComputerStar1;
		}
		if (iStar1 == BINGO_SIZE)
			++iPlayerBingo;

		if (iComputerStar1 == BINGO_SIZE)
			++iComputerBingo;
	}

	return 0;
}