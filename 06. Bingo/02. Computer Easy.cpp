#include <iostream>

#define BINGO_SIZE		5
#define NAME_SIZE		32

using namespace std;

enum COMPUTER_MODE
{
	CM_EASY = 1,
	CM_HARD,
	END,
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

			iInput;	// todo
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

/*
	���� : ���� ������ ���ɼ��� ���� ���� ã�� �� �ֵ��� Hard��带 ���� ��������.
*/