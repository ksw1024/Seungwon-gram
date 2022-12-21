#include <iostream>

#define		NAME_SIZE		32
using namespace std;

/*
	구조체 : 관련 있는 변수들을 모아서 하나의 새로운 자료형을 만들어주는 기능이다.
	사용자 정의 자료형이다.
	형태 : struct 구조체명 {};
*/

struct Student
{
	char	strName[NAME_SIZE];

	int		iNumber;
	int		iKor;
	int		iEng;
	int		iMath;
	int		iTotal;

	float	fAverage;
};

int main()
{
	Student		tStudent;
	/*
		배열과 구조체의 공통점 : 실제로 런타임 시에 메모리에 로드된 모습이 배열과 마찬가지로 연속된 메모리 공간에 할당된 모습이다.		
	*/

	Student		tStudentArr[100] = {};

	// 구조체 멤버에 접근할 때에는 .연산자를 이용하면 된다.
	tStudent.iEng = 100;

	// tStudent.strName = "Apple";

	/*
		문자열을 배열에 넣어줄 때에는 대입으로는 불가능하다.
		strcpy라는 함수를 이용해서 문자열을 복사해줘야한다.

		해당 함수의 인자(파라미터)는 목적지와, 넣을 소스를 순서대로 쓰면 된다.
	*/
	strcpy_s(tStudent.strName, "Apple 안녕하세요");

	// 문자열의 길이 : 영어, 숫자, 공백을 제외한 나머지는 모두 2바이트 : 영미권에서 안쓰이는건 다 2바이트
	// 문자열의 길이 == 크기 == 바이트

	cout << "이름 길이 : " << strlen(tStudent.strName) << endl;

	/*
		strcat_s : 문자열을 붙여주는 기능
	*/

	strcat_s(tStudent.strName, "반갑습니다.");
	cout << "이름 길이 : " << strlen(tStudent.strName) << endl;

	/*tStudent.strName[0] = 'A';
	tStudent.strName[1] = 'p';
	tStudent.strName[2] = 'p';
	tStudent.strName[3] = 'l';
	tStudent.strName[4] = 'e';
	tStudent.strName[5] = '\0';*/

	/*
		문자열의 끝은 항상 0(NULL)로 끝나야 한다.
		쓰레기 값이 들어가 있는 상태에서 지금 처럼 각 배열 요소에 값을 넣어주게 되면,
		그 값이 그대로 출력되고 넣어주지 않은 부분은 쓰레기 값으로 그대로 출력된다.
		왜냐하면 출력할 때 문자열의 끝을 인식할 수 없기 때문이다.
		0이 들어가야 하는데 쓰레기 값이 들어가있기 때문이다.
	*/

	// 문자열의 끝은 0(정수) == NULL == false == '\0'

	/*
		strcmp : 두 문자열을 비교해주는 함수
	*/

	char strTest[NAME_SIZE] = {};
	strcpy_s(tStudent.strName, "김승원");
	cout << "비교할 이름 : ";
	cin >> strTest;

	if (strcmp(tStudent.strName, strTest) == 0)
	{
		cout << "같은 문자열" << endl;
	}
	else if (strcmp(tStudent.strName, strTest) > 0)
	{
		cout << "기존 문자열이 더 뒤에 있는 문자열" << endl;
	}
	else
	{
		cout << "기존 문자열이 더 앞에 있는 문자열" << endl;
	}

	cout << "이 름 : " << tStudent.strName << endl;
	cout << "학 번 : " << tStudent.iNumber << endl;
	cout << "국 어 : " << tStudent.iKor << endl;
	cout << "영 어 : " << tStudent.iEng << endl;
	cout << "수 학 : " << tStudent.iMath << endl;
	cout << "총 점 : " << tStudent.iTotal << endl;
	cout << "평 균 : " << tStudent.fAverage << endl;

	return 0;
}