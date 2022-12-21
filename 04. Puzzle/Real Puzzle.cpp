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

	cout << "Shuffle Count�� �Է����ּ��� : ";
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
		cout << iShuffleCount << "ȸ Shuffle" << endl;
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

		cout << "W : ��" << "\t";
		cout << "S : ��" << "\t";
		cout << "A : ��" << "\t";
		cout << "D : ��" << "\t";
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
			cout << iMoveCount << "��° ���� ���ڸ� ��� ������ϴ�." << endl;
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
			cout << "Shuffle Count�� �Է����ּ��� : ";
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
				cout << iShuffleCount << "ȸ Shuffle" << endl;
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

	cout << endl << "������ �����մϴ�." << endl << endl;

	return 0;
}

/*
	���� : ���� ���� ������ ������.
	1 ~ 25���� ���ڰ� �ְ� �� ���ڸ� ���� ��� 5 * 5�� ����Ѵ�.
	�÷��̾�� ���ڸ� �Է¹޴´�. 1 ~ 25 ������ ���ڸ� �Է¹޾ƾ� �Ѵ�.

	0�� �Է��ϸ� ������ �����Ѵ�.

	���� ��� �� �Է¹��� ���ڸ� ã�Ƽ� *�� ������ش�.
	���ڸ� *�� ���� �Ŀ� ���� �� ���� üũ�Ѵ�.
	5 * 5�̱� ������ ����5�� ����5�� �밢�� 2���� ���� �� �ִ�.

	���� ���� �� ������ üũ�ؼ� ȭ�鿡 �����ش�.

	5�� �̻��� ��� ������ �����Ѵ�.

	ȥ���ϴ� ��������� ������!!	
*/