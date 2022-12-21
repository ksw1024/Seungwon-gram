#include <iostream>

#define		NAME_SIZE		32
#define		STUDENT_MAX		10
#define		ADDRESS_SIZE	128
#define		PHONE_NUMBER	14


using namespace std;

struct _tagStudent
{
	char	strName[NAME_SIZE];
	char	strAddress[ADDRESS_SIZE];
	char	strPhoneNumber[PHONE_NUMBER];

	int		iNumber;
	int		iKor;
	int		iEng;
	int		iMath;
	int		iTotal;
	float	fAverage;
};

enum MENU
{
	MENU_NONE,
	MENU_REGISTRATION,
	MENU_DELETE,
	MENU_SEARCH,
	MENU_OUTPUT,
	MENU_EXIT
};

int main()
{
	_tagStudent	tStudentArr[STUDENT_MAX] = {};

	int iStudentCount = 0;
	int iStudentNumber = 1;

	char	strName[NAME_SIZE] = {};

	while (true)
	{
		system("cls");
		cout << "______________ ＳＴＵＤＥＮＴ　ＭＡＮＡＧＥＭＥＮＴ ______________" << endl << endl << endl << endl;

		cout << "1. 신규 학생 등록" << endl << endl;
		cout << "2. 기존 학생 제거" << endl << endl;
		cout << "3. 학생 정보 검색" << endl << endl;
		cout << "4. 전체 학생 출력" << endl << endl;
		cout << "5. 프로그램 종료" << endl << endl << endl << endl;

		cout << "메뉴를 선택하세요 : ";

		int iMenu;
		cin >> iMenu;
		/*
			cin은 오른쪽에서 받는 변수가 int Type이라면 동일한 데이터 타입의 변수로 받아야 한다.
			오른쪽 변수 타입에 맞춰서 값을 입력해야 하는데 실수로 정수가 아닌 문자를 입력할 경우 에러가 발생한다.
			그렇기 때문에 예외처리로 에러가 발생했는지 여기서 체크하여 에러가 발생하면 cin 내부 에러버퍼를 지워줍니다.
		
			cin 내부에 입력버퍼가 있는데 이 입력버퍼는 입력한 값을 저장해놓고 그 값을 변수에 넣어주는 역할을 합니다.

			버퍼를 닫는 행위 : Enter. 하지만 Enter역시 개행문자이기 때문에 이 입력버퍼에 \n문자가 남아있다.
			이 입력버퍼에 \n이 남아있으므로 버퍼를 순회하여 개행이 남아있는지 확인하여 지워준다.

			버퍼 : 임시 저장 공간

			cin.fail() 함수는 에러가 발생했을 경우 true를 반환해준다.
		*/

		if (cin.fail())
		{
			cin.clear();
			cin.ignore(1024, '\n');
			// cin.ignore(numeric_limits<streamsize>::max(), '\n');

			/*
				입력버퍼에 \n 개행이 남아있으므로 입력 버퍼를 순회하며 \n을 지워준다.

				첫 번째는 검색하고자 하는 버퍼의 크기를 지정한다.
				현재 넉넉하게 1024바이트 지정해준 상황이다.

				두 번째는 찾고자 하는 문자를 넣어준다.
				그래서 입력버퍼 처음부터 \n이 있는 곳까지 찾아서 그 부분을 모두 지워줘서
				다시 입력받을 수 있도록 해준다.
			*/
			cout << endl << "메뉴를 잘못 선택하였습니다." << endl << endl;
			system("pause");
			continue;
		}


		if (iMenu == MENU_EXIT)
			break;

		switch (iMenu)
		{
		case MENU_REGISTRATION:
			system("cls");
			cout << "____________ ＳＴＵＤＥＮＴ　ＲＥＧＩＳＴＲＡＴＩＯＮ ____________" << endl << endl << endl << endl;

			if (iStudentCount == STUDENT_MAX)
				break;

			cout << endl << "이 름 : ";
			cin >> tStudentArr[iStudentCount].strName;

			cin.ignore(1024, '\n');

			cout << endl << "주 소 : ";
			cin.getline(tStudentArr[iStudentCount].strAddress, ADDRESS_SIZE);

			cout << endl << "번 호 : ";
			cin.getline(tStudentArr[iStudentCount].strPhoneNumber, PHONE_NUMBER);

			cout << endl << "국 어 : ";
			cin >> tStudentArr[iStudentCount].iKor;

			cout << endl << "영 어 : ";
			cin >> tStudentArr[iStudentCount].iEng;

			cout << endl << "수 학 : ";
			cin >> tStudentArr[iStudentCount].iMath;

			// 총 점
			tStudentArr[iStudentCount].iTotal = 
				tStudentArr[iStudentCount].iKor + 
				tStudentArr[iStudentCount].iEng + 
				tStudentArr[iStudentCount].iMath;
			
			// 평 균 
			tStudentArr[iStudentCount].fAverage = tStudentArr[iStudentCount].iTotal / 3.f;

			// 학 번
			tStudentArr[iStudentCount].iNumber = iStudentNumber;

			cout << endl << tStudentArr[iStudentCount].strName << " 학생의 정보가 등록되었습니다." << endl << endl;

			++iStudentCount;
			++iStudentNumber;

			break;
		case MENU_DELETE:
			system("cls");
			cout << "__________________ ＳＴＵＤＥＮＴ　ＤＥＬＥＴＥ __________________" << endl << endl << endl << endl;
			cout << "삭제할 학생의 이름을 입력해주세요 : ";
			cin.ignore(1024, '\n');
			cin.getline(strName, NAME_SIZE);

			// 삭제 구현
			system("cls");
			cout << "___________________ ＤＥＬＥＴＥ ＲＥＳＵＬＴ ___________________" << endl << endl << endl << endl;

			for (int i = 0; i < iStudentCount; i++)
			{
				if (strcmp(tStudentArr[i].strName, strName) == 0)
				{
					for (int j = i; j < iStudentCount - 1; j++)
					{
						tStudentArr[j] = tStudentArr[j + 1];
					}

					--iStudentCount;

					cout << endl << " 학생 정보를 삭제하였습니다." << endl << endl;
					break;
				}
			}

			break;
		case MENU_SEARCH:
			system("cls");
			cout << "_______________ ＳＴＵＤＥＮＴ　ＳＥＡＲＣＨＩＮＧ _______________" << endl << endl << endl << endl;
			cout << "검색할 학생의 이름을 입력해주세요 : ";
			cin.ignore(1024, '\n');
			cin.getline(strName, NAME_SIZE);

			// 검색 구현
			system("cls");
			cout << "________________ ＳＥＡＲＣＨＩＮＧ ＲＥＳＵＬＴ ________________" << endl << endl << endl << endl;
			
			for (int i = 0; i < iStudentCount; i++)
			{
				if (strcmp(tStudentArr[i].strName, strName) == 0)
				{
					cout << "이 름 : " << tStudentArr[i].strName << endl;
					cout << "학 번 : " << tStudentArr[i].iNumber << endl;
					cout << "주 소 : " << tStudentArr[i].strAddress << endl;
					cout << "번 호 : " << tStudentArr[i].strPhoneNumber << endl << endl;

					cout << "국 어 : " << tStudentArr[i].iKor << "\t";
					cout << "영 어 : " << tStudentArr[i].iEng << "\t";
					cout << "수 학 : " << tStudentArr[i].iMath << endl;
					cout << "총 점 : " << tStudentArr[i].iTotal << "\t";
					cout << "평 균 : " << tStudentArr[i].fAverage << endl;

					break;
				}
			}


			break;
		case MENU_OUTPUT:
			system("cls");
			cout << "_____________ ＳＴＵＤＥＮＴ　ＩＮＦＯＲＭＡＴＩＯＮ _____________" << endl << endl << endl << endl;

			cout << "__________________________________________" << endl;

			for (int i = 0; i < iStudentCount; i++)
			{
				cout << endl;
				cout << "이 름 : " << tStudentArr[i].strName << endl;
				cout << "학 번 : " << tStudentArr[i].iNumber << endl;
				cout << "주 소 : " << tStudentArr[i].strAddress << endl;
				cout << "번 호 : " << tStudentArr[i].strPhoneNumber << endl << endl;

				cout << "국 어 : " << tStudentArr[i].iKor << "\t";
				cout << "영 어 : " << tStudentArr[i].iEng << "\t";
				cout << "수 학 : " << tStudentArr[i].iMath << endl;
				cout << "총 점 : " << tStudentArr[i].iTotal << "\t";
				cout << "평 균 : " << tStudentArr[i].fAverage << endl;
				cout << "__________________________________________" << endl;
			}

			break;
		default:
			cout << endl << "메뉴를 잘못 선택하였습니다." << endl << endl;
			break;
		}

		system("pause");
	}


	return 0;
}

/*
	숙제 : 은행 시스템 만들기

	1. 메뉴 출력
	2. 계좌 개설
	3. 입	금
	4. 출	금
	5. 잔액 조회
	6. 계좌 송금

	고객 최대 한계 저장 수 : 10명
	고객 struct : 계좌번호, 잔액, 고객이름
*/