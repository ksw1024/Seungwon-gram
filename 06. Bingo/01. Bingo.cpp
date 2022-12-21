#include <iostream>

#define BINGO_SIZE		5

using namespace std;

int main()
{
	srand((unsigned int)time(NULL));

	int iPlayerNumber[BINGO_SIZE * BINGO_SIZE] = {};
	for (int i = 0; i < BINGO_SIZE * BINGO_SIZE; i++)
	{
		iPlayerNumber[i] = i + 1;
	}

	int iTemp, idx1, idx2;
	for (int i = 0; i < 1000; i++)
	{
		idx1 = rand() % (BINGO_SIZE * BINGO_SIZE);
		idx2 = rand() % (BINGO_SIZE * BINGO_SIZE);

		iTemp = iPlayerNumber[idx1];
		iPlayerNumber[idx1] = iPlayerNumber[idx2];
		iPlayerNumber[idx2] = iTemp;
	}

	int iPlayerBingo = 0;

	while (true)
	{
		system("cls");

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
		
		if (iPlayerBingo >= 5)
			break;


		cout << "숫자를 입력하세요(0:종료) : ";
		int iInput;
		cin >> iInput;

		if (iInput == 0)
			break;

		else if (iInput < 1 || iInput > BINGO_SIZE * BINGO_SIZE)
			continue;

		bool bAcc = true;

		// 숫자를 별로 바꿔준다.
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

		iPlayerBingo = 0;

		int iStar1 = 0, iStar2 = 0;

		// 가로 세로
		for (int i = 0; i < BINGO_SIZE; i++)
		{
			iStar1 = iStar2 = 0;
			for (int j = 0; j < BINGO_SIZE; j++)
			{
				if (iPlayerNumber[i * BINGO_SIZE + j] == INT_MAX)
					++iStar1;

				if (iPlayerNumber[j * BINGO_SIZE + i] == INT_MAX)
					++iStar2;
			}

			if (iStar1 == BINGO_SIZE)
				++iPlayerBingo;

			if (iStar2 == BINGO_SIZE)
				++iPlayerBingo;
		}

		// 좌상단 대각선
		iStar1 = 0;
		for (int i = 0; i < (BINGO_SIZE * BINGO_SIZE); i += (BINGO_SIZE + 1))
		{
			if (iPlayerNumber[i] == INT_MAX)
				++iStar1;
		}
		if (iStar1 == BINGO_SIZE)
			++iPlayerBingo;

		// 우상단 대각선
		iStar1 = 0;
		for (int i = BINGO_SIZE - 1; i <= ((BINGO_SIZE - 1) * BINGO_SIZE); i += (BINGO_SIZE - 1))
		{
			if (iPlayerNumber[i] == INT_MAX)
				++iStar1;
		}
		if (iStar1 == BINGO_SIZE)
			++iPlayerBingo;
	}

	return 0;
}