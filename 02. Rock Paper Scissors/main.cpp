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
	// 랜덤 테이블을 생성한다.
	srand((unsigned int)time(NULL));

	// 플레이어와 컴퓨터의 값을 저장할 변수 선언
	int iPlayer = 0, iComputer = 0;

	int iWinCount = 0;
	int iDrawCount = 0;
	int iLoseCount = 0;

	int iGameCount = 1;

	// 게임이 종료되지 않도록 while문으로 작성
	while (true)
	{
		// 화면 한번 지워주고
		system("cls");

		cout << "____________ ROCK PAPER SICSSORS ____________" << endl << endl;
		cout << "\t\t\t\t\t" << iGameCount << "회" << endl;
		cout << "1. 가위" << endl;
		cout << "2. 바위" << endl;
		cout << "3. 보" << endl;
		cout << "4. 종료" << endl << endl;

		cout << endl << "Win : " << iWinCount << "  " << "Draw : " << iDrawCount << "  " << "Lose : " << iLoseCount << endl << endl;

		cout << "메뉴를 선택하세요 : ";

		// 플레이어로부터 값을 입력받아서
		cin >> iPlayer;

		// 예외처리
		if (iPlayer < SCISSORS || iPlayer > END)
		{
			cout << "잘못된 값을 입력하였습니다." << endl;
			system("pause");
			continue;
		}
		else if (iPlayer == END)
			break;

		// 컴퓨터의 값 랜덤하게 1 ~ 3 (가위 ~ 보) 받음
		iComputer = rand() % 3 + SCISSORS;

		// 플레이어가 선택한 값 출력
		switch (iPlayer)
		{
		case SCISSORS:
			cout << "Player   : 가위" << endl;
			break;
		case ROCK:
			cout << "Player   : 바위" << endl;
			break;
		case PAPER:
			cout << "Player   : 보" << endl;
			break;
		}

		// 컴퓨터가 선택한 값 출력
		switch (iComputer)
		{
		case SCISSORS:
			cout << "Computer : 가위" << endl;
			break;
		case ROCK:
			cout << "Computer : 바위" << endl;
			break;
		case PAPER:
			cout << "Computer : 보" << endl;
			break;
		}

		// 승부판정을 위한 변수 iWin에 승부판정을 위해서 iPlayer에서 iCom의 차이를 구함
		int iWin = iPlayer - iComputer;

		/*if (iWin == 1 || iWin == -2)
		{
			iWinCount++;
			cout << "Player 승리!!!!" << endl;
		}
		else if (iWin == 0)
		{
			iDrawCount++;
			cout << "비겼습니다 !!!" << endl;
		}
		else
		{
			iLoseCount++;
			cout << "졌습니다 !!!" << endl;
		}*/

		// 승부판정 
		switch (iWin)
		{
		case 1:
		case -2:
			iWinCount++;
			cout << "Player 승리!!!!" << endl;
			break;
		case 0:
			iDrawCount++;
			cout << "비겼습니다 !!!" << endl;
			break;
		default:
			iLoseCount++;
			cout << "졌습니다 !!!" << endl;
			break;
		}


		iGameCount++;
		system("pause");
	}

	cout << endl << "게임을 종료합니다." << endl << endl;

	return 0;
}

/*
	1.	수업시간에 필기를 한다.
		노트필기는 수업의 코드 작성 근거를 위주로 쓴다. 코드를 쓰는게 절대 아님.

	2.	노트필기 '만' 보고 수업코드를 참고하지 않고 어떻게 만들어야 하는지 생각해본다.

	3.	그 생각대로 코드를 작성해본다.

	4.	만약 막히는 상황이 온다면 수업코드를 보고 주석을 직접 더 상세히 달아본다.

	5.	그렇게 생각을 정리 후 다시 코드를 직접 작성해본다.

	6.	그래도 어렵다면 (문법) 수업코드를 한번 훑어보고 다시 작성해본다.

	7.	안보고 스스로 만들 수 있을때까지 반복한다.

	8.	도저히 안되면 코드를 참고해가면서 한다.(만약에 8번으로 코드를 완성했으면 7번이 될 때까지 다시 도전)
*/