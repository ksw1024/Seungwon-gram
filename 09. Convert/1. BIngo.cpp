#include <iostream>

#define BINGO_SIZE		5
#define NAME_SIZE		32
#define BINGO_COUNT		5
#define ERROR_CODE		-1

using namespace std;

enum COMPUTER_MODE
{
	CM_EASY = 1,
	CM_HARD,
	END,
};

enum LINE_NUMBER
{
	LN_H1,		 // Line Number Horizontal 가로
	LN_H2,
	LN_H3,
	LN_H4,
	LN_H5,

	LN_V1,		 // Line Number Vertical 세로
	LN_V2,
	LN_V3,
	LN_V4,
	LN_V5,

	LN_LT,
	LN_RT,
};

// 함수는 선언과 정의 부분으로 나눌 수 있다.

void SetNumber(int* pArray, int Count);
void Shuffle(int* pArray, int Count);
void SetName(char* pArray);

COMPUTER_MODE	SelectComputerMode();

void RenderingBingoTable(int* pArray, int iBingo);
bool MatchDecision(int iPlayer, int iComputer);
bool ChangeNumbertoStar(int* pArray, int iInput);
int ComputerSelectNumber(int* pArray, COMPUTER_MODE eMode);

int BingoCounting(int* _pArray);
int BingoCounting_Horizontal(int* _pArray);
int BingoCounting_Vertical(int* _pArray);
int BingoCounting_Diagonal(int* _pArray, LINE_NUMBER eNumber);

int main()
{
	srand((unsigned int)time(NULL));

	int iPlayerNumber[BINGO_SIZE * BINGO_SIZE] = {};
	int iComputerNumber[BINGO_SIZE * BINGO_SIZE] = {};

	SetNumber(iPlayerNumber, BINGO_SIZE * BINGO_SIZE);
	SetNumber(iComputerNumber, BINGO_SIZE * BINGO_SIZE);

	Shuffle(iPlayerNumber, 1000);
	Shuffle(iComputerNumber, 1000);

	int iPlayerBingo = 0;
	int iComputerBingo = 0;

	char strName[NAME_SIZE] = {};

	SetName(strName);


	COMPUTER_MODE eComputerMode = SelectComputerMode();
	
	while (true)
	{
		system("cls");

		cout << "___________________ Bingo Game ___________________" << endl;
		cout << "                    " << strName << endl;
		RenderingBingoTable(iPlayerNumber, iPlayerBingo);

		cout << "                    Computer" << endl;
		RenderingBingoTable(iComputerNumber, iComputerBingo);


		// 승부판정
		if (MatchDecision(iPlayerBingo, iComputerBingo))
			break;

		cout << "숫자를 입력하세요(0:종료) : ";
		int iInput;
		cin >> iInput;

		if (iInput == 0)
			break;

		else if (iInput < 1 || iInput > BINGO_SIZE * BINGO_SIZE)
			continue;


		// 숫자를 별로 바꿔준다.
		bool bAcc = ChangeNumbertoStar(iPlayerNumber, iInput);

		if (bAcc)
			continue;

		// 나의 입력을 컴퓨터 빙고판에서 바꿔준다.
		ChangeNumbertoStar(iComputerNumber, iInput);


		iInput = ComputerSelectNumber(iComputerNumber, eComputerMode);


		// 컴퓨터가 선택한 숫자를 플레이어 빙고판에서 별로 바꾼다.
		ChangeNumbertoStar(iPlayerNumber, iInput);

		// 컴퓨터가 선택한 숫자를 컴퓨터 빙고판에서 별로 바꾼다.
		ChangeNumbertoStar(iComputerNumber, iInput);



		iPlayerBingo = BingoCounting(iPlayerNumber);
		iComputerBingo = BingoCounting(iComputerNumber);
	}


	return 0;
}

void SetNumber(int* pArray, int Count)
{
	for (int i = 0; i < Count; i++)
	{
		pArray[i] = i + 1;
	}
}

void Shuffle(int* pArray, int Count)
{
	int iTemp, idx1, idx2;
	for (int i = 0; i < Count; i++)
	{
		idx1 = rand() % (BINGO_SIZE * BINGO_SIZE);
		idx2 = rand() % (BINGO_SIZE * BINGO_SIZE);

		iTemp = pArray[idx1];
		pArray[idx1] = pArray[idx2];
		pArray[idx2] = iTemp;
	}
}

void SetName(char* pArray)
{
	cout << "___________________ Bingo Game ___________________" << endl << endl;
	cout << "도전자의 이름을 입력해주세요 : ";
	cin >> pArray;
}

COMPUTER_MODE SelectComputerMode()
{
	int iComputerMode;

	while (true)
	{
		system("cls");
		cout << "___________________ Bingo Game ___________________" << endl << endl;

		cout << "1. Easy" << endl << endl;
		cout << "2. Hard" << endl << endl << endl << endl;

		cout << "컴퓨터 난이도를 선택해주세요 : ";

		cin >> iComputerMode;

		if (CM_EASY <= iComputerMode && iComputerMode <= CM_HARD)
			break;
	}

	return (COMPUTER_MODE)iComputerMode;
}

void RenderingBingoTable(int* pArray, int iBingo)
{
	for (int i = 0; i < BINGO_SIZE; i++)
	{
		for (int j = 0; j < BINGO_SIZE; j++)
		{
			if (pArray[i * BINGO_SIZE + j] == INT_MAX)
				cout << "*\t";
			else
				cout << pArray[i * BINGO_SIZE + j] << "\t";
		}
		cout << endl << endl << endl;
	}
	cout << "Bingo Line : " << iBingo << endl << endl;
}

bool MatchDecision(int iPlayer, int iComputer)
{
	// 승부판정
	if (iPlayer >= BINGO_COUNT && iComputer >= BINGO_COUNT)
	{
		if (iPlayer > iComputer)
			cout << "Player Win!!!" << endl;
		else if (iPlayer < iComputer)
			cout << "Computer Win!!!" << endl;
		else
			cout << "Draw !!!!!!!!!!" << endl;

		return true;
	}
	else if (iPlayer >= BINGO_COUNT || iComputer >= BINGO_COUNT)
	{
		if (iPlayer > iComputer)
			cout << "Player Win!!!" << endl;

		else if (iPlayer < iComputer)
			cout << "Computer Win!!!" << endl;

		return true;
	}

	return false;
}

bool ChangeNumbertoStar(int* pArray, int iInput)
{
	for (int i = 0; i < (BINGO_SIZE * BINGO_SIZE); i++)
	{
		if (iInput == pArray[i])
		{
			pArray[i] = INT_MAX;
			return false;
		}
	}
}

int ComputerSelectNumber(int* pArray, COMPUTER_MODE eMode)
{
	int iNoneSelect[BINGO_SIZE * BINGO_SIZE] = {};
	int iNoneSelectCount = 0;

	switch (eMode)
	{
	case CM_EASY:
		iNoneSelectCount = 0;

		for (int i = 0; i < BINGO_SIZE * BINGO_SIZE; i++)
		{
			if (pArray[i] != INT_MAX)
			{
				iNoneSelect[iNoneSelectCount] = pArray[i];
				++iNoneSelectCount;
			}
		}

		return iNoneSelect[rand() % iNoneSelectCount];

	case CM_HARD:

		int iLine = 0;
		int iStarCount = 0;
		int iSaveCount = 0;

		// 가로 줄 수 체크
		for (int i = 0; i < BINGO_SIZE; i++)
		{
			iStarCount = 0;
			for (int j = 0; j < BINGO_SIZE; j++)
			{
				if (pArray[i * BINGO_SIZE + j] == INT_MAX)
					++iStarCount;
			}

			if (iStarCount < BINGO_SIZE && iSaveCount < iStarCount)
			{
				iLine = i;
				iSaveCount = iStarCount;
			}
		}

		// 세로 줄 수 체크
		for (int i = 0; i < BINGO_SIZE; i++)
		{
			iStarCount = 0;
			for (int j = 0; j < BINGO_SIZE; j++)
			{
				if (pArray[j * BINGO_SIZE + i] == INT_MAX)
					++iStarCount;
			}

			if (iStarCount < BINGO_SIZE && iSaveCount < iStarCount)
			{
				iLine = i + LN_V1;
				iSaveCount = iStarCount;
			}
		}

		// 좌상단 대각선
		iStarCount = 0;
		for (int i = 0; i < (BINGO_SIZE * BINGO_SIZE); i += (BINGO_SIZE + 1))
		{
			if (pArray[i] == INT_MAX)
				++iStarCount;
		}
		if (iStarCount < BINGO_SIZE && iSaveCount < iStarCount)
		{
			iLine = LN_LT;
			iSaveCount = iStarCount;
		}

		// 우상단 대각선
		iStarCount = 0;
		for (int i = BINGO_SIZE - 1; i <= ((BINGO_SIZE - 1) * BINGO_SIZE); i += (BINGO_SIZE - 1))
		{
			if (pArray[i] == INT_MAX)
				++iStarCount;
		}
		if (iStarCount < BINGO_SIZE && iSaveCount < iStarCount)
		{
			iLine = LN_RT;
			iSaveCount = iStarCount;
		}


		// 가로줄 일 경우
		if (iLine <= LN_H5)
		{
			for (int i = 0; i < BINGO_SIZE; i++)
			{
				if (pArray[iLine * 5 + i] != INT_MAX)
				{
					return pArray[iLine * 5 + i];
				}
			}
		}

		// 세로줄 일 경우
		else if (iLine <= LN_V5)
		{
			for (int i = 0; i < BINGO_SIZE; i++)
			{
				if (pArray[i * 5 + (iLine - LN_V1)] != INT_MAX)
				{
					return pArray[i * 5 + (iLine - LN_V1)];
				}
			}
		}
		// 좌상단 대각선인 경우
		else if (iLine == LN_LT)
		{
			for (int i = 0; i < (BINGO_SIZE * BINGO_SIZE); i += (BINGO_SIZE + 1))
			{
				if (pArray[i] != INT_MAX)
				{
					return pArray[i];
				}
			}
		}
		// 우상단 대각선인 경우
		else if (iLine == LN_RT)
		{
			for (int i = BINGO_SIZE - 1; i <= ((BINGO_SIZE - 1) * BINGO_SIZE); i += (BINGO_SIZE - 1))
			{
				if (pArray[i] != INT_MAX)
				{
					return pArray[i];
				}
			}
		}

		break;
	}

	return ERROR_CODE;
}

int BingoCounting(int* _pArray)
{
	int iBingo = 0;

	// 가로
	iBingo += BingoCounting_Horizontal(_pArray);

	// 세로
	iBingo += BingoCounting_Vertical(_pArray);

	// 대각선
	iBingo += BingoCounting_Diagonal(_pArray, LN_LT);
	iBingo += BingoCounting_Diagonal(_pArray, LN_RT);

	return iBingo;
}

int BingoCounting_Horizontal(int* _pArray)
{
	int iStar1 = 0, iBingo = 0;

	// 가로
	for (int i = 0; i < BINGO_SIZE; i++)
	{
		iStar1 = 0;
		for (int j = 0; j < BINGO_SIZE; j++)
		{
			if (_pArray[i * BINGO_SIZE + j] == INT_MAX)
				++iStar1;
		}

		if (iStar1 == BINGO_SIZE)
			++iBingo;
	}

	return iBingo;
}

int BingoCounting_Vertical(int* _pArray)
{
	int iStar1 = 0, iBingo = 0;

	// 세로
	for (int i = 0; i < BINGO_SIZE; i++)
	{
		iStar1 = 0;
		for (int j = 0; j < BINGO_SIZE; j++)
		{
			if (_pArray[j * BINGO_SIZE + i] == INT_MAX)
				++iStar1;
		}

		if (iStar1 == BINGO_SIZE)
			++iBingo;
	}

	return iBingo;
}

int BingoCounting_Diagonal(int* _pArray, LINE_NUMBER eNumber)
{
	int iBingo = 0;
	int iStar1 = 0;

	switch (eNumber)
	{
	case LN_LT:
		for (int i = 0; i < (BINGO_SIZE * BINGO_SIZE); i += (BINGO_SIZE + 1))
		{
			if (_pArray[i] == INT_MAX)
				++iStar1;
		}
		if (iStar1 == BINGO_SIZE)
			++iBingo;
		break;

	case LN_RT:
		for (int i = BINGO_SIZE - 1; i <= ((BINGO_SIZE - 1) * BINGO_SIZE); i += (BINGO_SIZE - 1))
		{
			if (_pArray[i] == INT_MAX)
				++iStar1;
		}
		if (iStar1 == BINGO_SIZE)
			++iBingo;
		break;
	}

	return iBingo;
}
