#include <iostream>

using namespace std;
int main()
{
	srand((unsigned int)time(NULL));

	int iLotto[45] = {};
	for (int i = 0; i < 45; i++)
	{
		iLotto[i] = i + 1;
	}

	
	int iTemp, idx1, idx2;
	for (int i = 0; i < 100; i++)
	{
		// Swap Algorithm
		idx1 = rand() % 45;		// 0 ~ 44
		idx2 = rand() % 45;

		iTemp = iLotto[idx1];
		iLotto[idx1] = iLotto[idx2];
		iLotto[idx2] = iTemp;
	}

	for (int i = 0; i < 6; i++)
	{
		cout << iLotto[i] << "\t";
	}

	cout << "보너스 번호 : " << iLotto[6] << endl;
	
	return 0;
}

/*
	숙제 :	숫자 야구 게임 만들기

			1 ~ 9 사이의 랜덤한 숫자 3개를 얻어온다. 단 숫자는 중복되어서는 안된다.
			3개의 숫자는 * * * 의 형태로 출력되고, 이 3개의 숫자를 맞추는 게임이다.

			사용자는 이 3개의 숫자를 맞출 때 까지 계속해서 3개의 숫자를 입력한다.

			만약 맞춰야 할 숫자가 7 3 8 일 경우

			입력 : 1 2 4 를 입력했을 경우 1 2 4는 맞춰야할 숫자가 아무것도 없으므로 OUT을 출력한다.
			입력 : 7 5 9 를 입력했을 경우 7은 맞춰야 할 숫자 중 있고 위치도 같으므로 Strike, 5 9는 없으므로 1Strike 0Ball 출력한다.
			입력 : 7 8 6 을 입력했을 경우 7은 1Strike, 8은 숫자는 있지만 위치가 다르므로 Ball 1Strike 1Ball을 출력.

			이렇게 출력을 하고 입력을 받으면서 최종적으로 3개의 숫자를 자리까지 모두 일치하게 입력하면 게임이 종료된다.
			만약 입력받은 숫자 3개 중 하나라도 0이 있을 경우 게임을 종료한다.
*/