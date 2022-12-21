#include <iostream>

using namespace std;

enum ROCK_PAPER_SCISSORS
{
	SCISSORS = 1,
	ROCK,
	PAPER,
	END
};

int main()
{
	// ���� ���̺��� �����Ѵ�.
	srand((unsigned int)time(NULL));

	// �÷��̾�� ��ǻ���� ���� ������ ���� ����
	int iPlayer = 0, iComputer = 0;

	int iWinCount = 0;
	int iDrawCount = 0;
	int iLoseCount = 0;

	int iGameCount = 1;

	// ������ ������� �ʵ��� while������ �ۼ�
	while (true)
	{
		// ȭ�� �ѹ� �����ְ�
		system("cls");

		cout << "____________ ROCK PAPER SICSSORS ____________" << endl << endl;
		cout << "\t\t\t\t\t" << iGameCount << "ȸ" << endl;
		cout << "1. ����" << endl;
		cout << "2. ����" << endl;
		cout << "3. ��" << endl;
		cout << "4. ����" << endl << endl;

		cout << endl << "Win : " << iWinCount << "  " << "Draw : " << iDrawCount << "  " << "Lose : " << iLoseCount << endl << endl;

		cout << "�޴��� �����ϼ��� : ";

		// �÷��̾�κ��� ���� �Է¹޾Ƽ�
		cin >> iPlayer;

		// ����ó��
		if (iPlayer < SCISSORS || iPlayer > END)
		{
			cout << "�߸��� ���� �Է��Ͽ����ϴ�." << endl;
			system("pause");
			continue;
		}
		else if (iPlayer == END)
			break;

		// ��ǻ���� �� �����ϰ� 1 ~ 3 (���� ~ ��) ����
		iComputer = rand() % 3 + SCISSORS;

		// �÷��̾ ������ �� ���
		switch (iPlayer)
		{
		case SCISSORS:
			cout << "Player   : ����" << endl;
			break;
		case ROCK:
			cout << "Player   : ����" << endl;
			break;
		case PAPER:
			cout << "Player   : ��" << endl;
			break;
		}

		// ��ǻ�Ͱ� ������ �� ���
		switch (iComputer)
		{
		case SCISSORS:
			cout << "Computer : ����" << endl;
			break;
		case ROCK:
			cout << "Computer : ����" << endl;
			break;
		case PAPER:
			cout << "Computer : ��" << endl;
			break;
		}

		// �º������� ���� ���� iWin�� �º������� ���ؼ� iPlayer���� iCom�� ���̸� ����
		int iWin = iPlayer - iComputer;

		/*if (iWin == 1 || iWin == -2)
		{
			iWinCount++;
			cout << "Player �¸�!!!!" << endl;
		}
		else if (iWin == 0)
		{
			iDrawCount++;
			cout << "�����ϴ� !!!" << endl;
		}
		else
		{
			iLoseCount++;
			cout << "�����ϴ� !!!" << endl;
		}*/

		// �º����� 
		switch (iWin)
		{
		case 1:
		case -2:
			iWinCount++;
			cout << "Player �¸�!!!!" << endl;
			break;
		case 0:
			iDrawCount++;
			cout << "�����ϴ� !!!" << endl;
			break;
		default:
			iLoseCount++;
			cout << "�����ϴ� !!!" << endl;
			break;
		}


		iGameCount++;
		system("pause");
	}

	cout << endl << "������ �����մϴ�." << endl << endl;

	return 0;
}

/*
	1.	�����ð��� �ʱ⸦ �Ѵ�.
		��Ʈ�ʱ�� ������ �ڵ� �ۼ� �ٰŸ� ���ַ� ����. �ڵ带 ���°� ���� �ƴ�.

	2.	��Ʈ�ʱ� '��' ���� �����ڵ带 �������� �ʰ� ��� ������ �ϴ��� �����غ���.

	3.	�� ������� �ڵ带 �ۼ��غ���.

	4.	���� ������ ��Ȳ�� �´ٸ� �����ڵ带 ���� �ּ��� ���� �� ���� �޾ƺ���.

	5.	�׷��� ������ ���� �� �ٽ� �ڵ带 ���� �ۼ��غ���.

	6.	�׷��� ��ƴٸ� (����) �����ڵ带 �ѹ� �Ⱦ�� �ٽ� �ۼ��غ���.

	7.	�Ⱥ��� ������ ���� �� ���������� �ݺ��Ѵ�.

	8.	������ �ȵǸ� �ڵ带 �����ذ��鼭 �Ѵ�.(���࿡ 8������ �ڵ带 �ϼ������� 7���� �� ������ �ٽ� ����)
*/