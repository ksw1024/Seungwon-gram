#include <iostream>
#include <conio.h>

using namespace std;

enum PuzzleDirection
{
	PD_UP,
	PD_DOWN,
	PD_LEFT,
	PD_RIGHT,
};

int main()
{
	srand((unsigned int)time(NULL));

	int iNumber[25] = {};

	for (int i = 0; i < 24; i++)
	{
		iNumber[i] = i + 1;
	}

	int iBlankIndex = 24;
	iNumber[iBlankIndex] = INT_MAX;

	int iShuffleCount = 1;
	int iShuffleDecide = 0;

	int iMoveCount = 0;

	cout << "Shuffle Count를 입력해주세요 : ";
	cin >> iShuffleDecide;

	for (int i = 0; i < iShuffleDecide; i++)
	{
		int iDirection = rand() % 4;

		switch (iDirection)
		{
		case PD_UP:
			if (iBlankIndex > 4)
			{
				iNumber[iBlankIndex] = iNumber[iBlankIndex - 5];
				iNumber[iBlankIndex - 5] = INT_MAX;
				iBlankIndex -= 5;
			}
			break;
		case PD_DOWN:
			if (iBlankIndex < 20)
			{
				iNumber[iBlankIndex] = iNumber[iBlankIndex + 5];
				iNumber[iBlankIndex + 5] = INT_MAX;
				iBlankIndex += 5;
			}
			break;
		case PD_LEFT:
			if (iBlankIndex % 5 != 0)
			{
				iNumber[iBlankIndex] = iNumber[iBlankIndex - 1];
				iNumber[iBlankIndex - 1] = INT_MAX;
				iBlankIndex--;
			}
			break;
		case PD_RIGHT:
			if (iBlankIndex % 5 != 4)
			{
				iNumber[iBlankIndex] = iNumber[iBlankIndex + 1];
				iNumber[iBlankIndex + 1] = INT_MAX;
				iBlankIndex++;
			}
			break;
		}

		system("cls");
		for (int k = 0; k < 5; k++)
		{
			for (int j = 0; j < 5; j++)
			{
				if (iNumber[k * 5 + j] == INT_MAX)
					cout << " \t";
				else
					cout << iNumber[k * 5 + j] << "\t";
			}
			cout << endl << endl << endl;
		}
		cout << iShuffleCount << "회 Shuffle" << endl;
		iShuffleCount++;
	}

	for (int i = 0; i < 4; i++)
	{
		if (iBlankIndex % 5 != 4)
		{
			iNumber[iBlankIndex] = iNumber[iBlankIndex + 1];
			iNumber[iBlankIndex + 1] = INT_MAX;
			iBlankIndex++;
		}

		if (iBlankIndex < 20)
		{
			iNumber[iBlankIndex] = iNumber[iBlankIndex + 5];
			iNumber[iBlankIndex + 5] = INT_MAX;
			iBlankIndex += 5;
		}
	}

	while (true)
	{
		system("cls");

		for (int i = 0; i < 5; i++)
		{
			for (int j = 0; j < 5; j++)
			{
				if (iNumber[i * 5 + j] == INT_MAX)
					cout << " \t";
				else
					cout << iNumber[i * 5 + j] << "\t";
			}
			cout << endl << endl << endl;
		}

		cout << endl << endl;

		cout << "W : ↑" << "\t";
		cout << "S : ↓" << "\t";
		cout << "A : ←" << "\t";
		cout << "D : →" << "\t";
		cout << "R : Reset" << "\t";
		cout << "Q : Exit" << endl;
		cout << "Move : " << iMoveCount << endl << endl;

		bool bClear = true;
		for (int i = 0; i < 24; i++)
		{
			if (iNumber[i] != i + 1)
			{
				bClear = false;
				break;
			}
		}

		if (bClear)
		{
			cout << iMoveCount << "번째 만에 숫자를 모두 맞췄습니다." << endl;
			break;
		}

		char cInput = _getch();

		if (cInput == 'q' || cInput == 'Q')
			break;

		switch (cInput)
		{
		case 'w':
		case 'W':
			if (iBlankIndex > 4)
			{
				iNumber[iBlankIndex] = iNumber[iBlankIndex - 5];
				iNumber[iBlankIndex - 5] = INT_MAX;
				iBlankIndex -= 5;
				iMoveCount++;
			}
			break;
		case 's':
		case 'S':
			if (iBlankIndex < 20)
			{
				iNumber[iBlankIndex] = iNumber[iBlankIndex + 5];
				iNumber[iBlankIndex + 5] = INT_MAX;
				iBlankIndex += 5;
				iMoveCount++;
			}
			break;
		case 'a':
		case 'A':
			if (iBlankIndex % 5 != 0)
			{
				iNumber[iBlankIndex] = iNumber[iBlankIndex - 1];
				iNumber[iBlankIndex - 1] = INT_MAX;
				iBlankIndex--;
				iMoveCount++;
			}
			break;
		case 'd':
		case 'D':
			if (iBlankIndex % 5 != 4)
			{
				iNumber[iBlankIndex] = iNumber[iBlankIndex + 1];
				iNumber[iBlankIndex + 1] = INT_MAX;
				iBlankIndex++;
				iMoveCount++;
			}
			break;

		case 'r':
		case 'R':
			cout << "Shuffle Count를 입력해주세요 : ";
			cin >> iShuffleDecide;
			iShuffleCount = 1;
			iMoveCount = 0;
			for (int i = 0; i < iShuffleDecide; i++)
			{
				int iDirection = rand() % 4;

				switch (iDirection)
				{
				case PD_UP:
					if (iBlankIndex > 4)
					{
						iNumber[iBlankIndex] = iNumber[iBlankIndex - 5];
						iNumber[iBlankIndex - 5] = INT_MAX;
						iBlankIndex -= 5;
					}
					break;
				case PD_DOWN:
					if (iBlankIndex < 20)
					{
						iNumber[iBlankIndex] = iNumber[iBlankIndex + 5];
						iNumber[iBlankIndex + 5] = INT_MAX;
						iBlankIndex += 5;
					}
					break;
				case PD_LEFT:
					if (iBlankIndex % 5 != 0)
					{
						iNumber[iBlankIndex] = iNumber[iBlankIndex - 1];
						iNumber[iBlankIndex - 1] = INT_MAX;
						iBlankIndex--;
					}
					break;
				case PD_RIGHT:
					if (iBlankIndex % 5 != 4)
					{
						iNumber[iBlankIndex] = iNumber[iBlankIndex + 1];
						iNumber[iBlankIndex + 1] = INT_MAX;
						iBlankIndex++;
					}
					break;
				}

				system("cls");
				for (int k = 0; k < 5; k++)
				{
					for (int j = 0; j < 5; j++)
					{
						if (iNumber[k * 5 + j] == INT_MAX)
							cout << " \t";
						else
							cout << iNumber[k * 5 + j] << "\t";
					}
					cout << endl << endl << endl;
				}
				cout << iShuffleCount << "회 Shuffle" << endl;
				iShuffleCount++;
			}

			for (int i = 0; i < 4; i++)
			{
				if (iBlankIndex % 5 != 4)
				{
					iNumber[iBlankIndex] = iNumber[iBlankIndex + 1];
					iNumber[iBlankIndex + 1] = INT_MAX;
					iBlankIndex++;
				}

				if (iBlankIndex < 20)
				{
					iNumber[iBlankIndex] = iNumber[iBlankIndex + 5];
					iNumber[iBlankIndex + 5] = INT_MAX;
					iBlankIndex += 5;
				}
			}
			break;
		}
	}

	cout << endl << "게임을 종료합니다." << endl << endl;

	return 0;
}

/*
	숙제 : 숫자 빙고 게임을 만들어보자.
	1 ~ 25까지 숫자가 있고 이 숫자를 골고루 섞어서 5 * 5로 출력한다.
	플레이어는 숫자를 입력받는다. 1 ~ 25 사이의 숫자를 입력받아야 한다.

	0을 입력하면 게임을 종료한다.

	숫자 목록 중 입력받은 숫자를 찾아서 *로 만들어준다.
	숫자를 *로 만든 후에 빙고 줄 수를 체크한다.
	5 * 5이기 때문에 가로5줄 세로5줄 대각선 2줄이 나올 수 있다.

	빙고 줄이 몇 줄인지 체크해서 화면에 보여준다.

	5줄 이상일 경우 게임을 종료한다.

	혼자하는 빙고게임을 만들자!!	
*/