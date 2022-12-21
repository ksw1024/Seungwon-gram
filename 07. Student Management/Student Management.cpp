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
		cout << "______________ �ӣԣգģţΣԡ��ͣ��Σ��ǣţͣţΣ� ______________" << endl << endl << endl << endl;

		cout << "1. �ű� �л� ���" << endl << endl;
		cout << "2. ���� �л� ����" << endl << endl;
		cout << "3. �л� ���� �˻�" << endl << endl;
		cout << "4. ��ü �л� ���" << endl << endl;
		cout << "5. ���α׷� ����" << endl << endl << endl << endl;

		cout << "�޴��� �����ϼ��� : ";

		int iMenu;
		cin >> iMenu;
		/*
			cin�� �����ʿ��� �޴� ������ int Type�̶�� ������ ������ Ÿ���� ������ �޾ƾ� �Ѵ�.
			������ ���� Ÿ�Կ� ���缭 ���� �Է��ؾ� �ϴµ� �Ǽ��� ������ �ƴ� ���ڸ� �Է��� ��� ������ �߻��Ѵ�.
			�׷��� ������ ����ó���� ������ �߻��ߴ��� ���⼭ üũ�Ͽ� ������ �߻��ϸ� cin ���� �������۸� �����ݴϴ�.
		
			cin ���ο� �Է¹��۰� �ִµ� �� �Է¹��۴� �Է��� ���� �����س��� �� ���� ������ �־��ִ� ������ �մϴ�.

			���۸� �ݴ� ���� : Enter. ������ Enter���� ���๮���̱� ������ �� �Է¹��ۿ� \n���ڰ� �����ִ�.
			�� �Է¹��ۿ� \n�� ���������Ƿ� ���۸� ��ȸ�Ͽ� ������ �����ִ��� Ȯ���Ͽ� �����ش�.

			���� : �ӽ� ���� ����

			cin.fail() �Լ��� ������ �߻����� ��� true�� ��ȯ���ش�.
		*/

		if (cin.fail())
		{
			cin.clear();
			cin.ignore(1024, '\n');
			// cin.ignore(numeric_limits<streamsize>::max(), '\n');

			/*
				�Է¹��ۿ� \n ������ ���������Ƿ� �Է� ���۸� ��ȸ�ϸ� \n�� �����ش�.

				ù ��°�� �˻��ϰ��� �ϴ� ������ ũ�⸦ �����Ѵ�.
				���� �˳��ϰ� 1024����Ʈ �������� ��Ȳ�̴�.

				�� ��°�� ã���� �ϴ� ���ڸ� �־��ش�.
				�׷��� �Է¹��� ó������ \n�� �ִ� ������ ã�Ƽ� �� �κ��� ��� �����༭
				�ٽ� �Է¹��� �� �ֵ��� ���ش�.
			*/
			cout << endl << "�޴��� �߸� �����Ͽ����ϴ�." << endl << endl;
			system("pause");
			continue;
		}


		if (iMenu == MENU_EXIT)
			break;

		switch (iMenu)
		{
		case MENU_REGISTRATION:
			system("cls");
			cout << "____________ �ӣԣգģţΣԡ��ңţǣɣӣԣң��ԣɣϣ� ____________" << endl << endl << endl << endl;

			if (iStudentCount == STUDENT_MAX)
				break;

			cout << endl << "�� �� : ";
			cin >> tStudentArr[iStudentCount].strName;

			cin.ignore(1024, '\n');

			cout << endl << "�� �� : ";
			cin.getline(tStudentArr[iStudentCount].strAddress, ADDRESS_SIZE);

			cout << endl << "�� ȣ : ";
			cin.getline(tStudentArr[iStudentCount].strPhoneNumber, PHONE_NUMBER);

			cout << endl << "�� �� : ";
			cin >> tStudentArr[iStudentCount].iKor;

			cout << endl << "�� �� : ";
			cin >> tStudentArr[iStudentCount].iEng;

			cout << endl << "�� �� : ";
			cin >> tStudentArr[iStudentCount].iMath;

			// �� ��
			tStudentArr[iStudentCount].iTotal = 
				tStudentArr[iStudentCount].iKor + 
				tStudentArr[iStudentCount].iEng + 
				tStudentArr[iStudentCount].iMath;
			
			// �� �� 
			tStudentArr[iStudentCount].fAverage = tStudentArr[iStudentCount].iTotal / 3.f;

			// �� ��
			tStudentArr[iStudentCount].iNumber = iStudentNumber;

			cout << endl << tStudentArr[iStudentCount].strName << " �л��� ������ ��ϵǾ����ϴ�." << endl << endl;

			++iStudentCount;
			++iStudentNumber;

			break;
		case MENU_DELETE:
			system("cls");
			cout << "__________________ �ӣԣգģţΣԡ��ģţ̣ţԣ� __________________" << endl << endl << endl << endl;
			cout << "������ �л��� �̸��� �Է����ּ��� : ";
			cin.ignore(1024, '\n');
			cin.getline(strName, NAME_SIZE);

			// ���� ����
			system("cls");
			cout << "___________________ �ģţ̣ţԣ� �ңţӣգ̣� ___________________" << endl << endl << endl << endl;

			for (int i = 0; i < iStudentCount; i++)
			{
				if (strcmp(tStudentArr[i].strName, strName) == 0)
				{
					for (int j = i; j < iStudentCount - 1; j++)
					{
						tStudentArr[j] = tStudentArr[j + 1];
					}

					--iStudentCount;

					cout << endl << " �л� ������ �����Ͽ����ϴ�." << endl << endl;
					break;
				}
			}

			break;
		case MENU_SEARCH:
			system("cls");
			cout << "_______________ �ӣԣգģţΣԡ��ӣţ��ңãȣɣΣ� _______________" << endl << endl << endl << endl;
			cout << "�˻��� �л��� �̸��� �Է����ּ��� : ";
			cin.ignore(1024, '\n');
			cin.getline(strName, NAME_SIZE);

			// �˻� ����
			system("cls");
			cout << "________________ �ӣţ��ңãȣɣΣ� �ңţӣգ̣� ________________" << endl << endl << endl << endl;
			
			for (int i = 0; i < iStudentCount; i++)
			{
				if (strcmp(tStudentArr[i].strName, strName) == 0)
				{
					cout << "�� �� : " << tStudentArr[i].strName << endl;
					cout << "�� �� : " << tStudentArr[i].iNumber << endl;
					cout << "�� �� : " << tStudentArr[i].strAddress << endl;
					cout << "�� ȣ : " << tStudentArr[i].strPhoneNumber << endl << endl;

					cout << "�� �� : " << tStudentArr[i].iKor << "\t";
					cout << "�� �� : " << tStudentArr[i].iEng << "\t";
					cout << "�� �� : " << tStudentArr[i].iMath << endl;
					cout << "�� �� : " << tStudentArr[i].iTotal << "\t";
					cout << "�� �� : " << tStudentArr[i].fAverage << endl;

					break;
				}
			}


			break;
		case MENU_OUTPUT:
			system("cls");
			cout << "_____________ �ӣԣգģţΣԡ��ɣΣƣϣңͣ��ԣɣϣ� _____________" << endl << endl << endl << endl;

			cout << "__________________________________________" << endl;

			for (int i = 0; i < iStudentCount; i++)
			{
				cout << endl;
				cout << "�� �� : " << tStudentArr[i].strName << endl;
				cout << "�� �� : " << tStudentArr[i].iNumber << endl;
				cout << "�� �� : " << tStudentArr[i].strAddress << endl;
				cout << "�� ȣ : " << tStudentArr[i].strPhoneNumber << endl << endl;

				cout << "�� �� : " << tStudentArr[i].iKor << "\t";
				cout << "�� �� : " << tStudentArr[i].iEng << "\t";
				cout << "�� �� : " << tStudentArr[i].iMath << endl;
				cout << "�� �� : " << tStudentArr[i].iTotal << "\t";
				cout << "�� �� : " << tStudentArr[i].fAverage << endl;
				cout << "__________________________________________" << endl;
			}

			break;
		default:
			cout << endl << "�޴��� �߸� �����Ͽ����ϴ�." << endl << endl;
			break;
		}

		system("pause");
	}


	return 0;
}

/*
	���� : ���� �ý��� �����

	1. �޴� ���
	2. ���� ����
	3. ��	��
	4. ��	��
	5. �ܾ� ��ȸ
	6. ���� �۱�

	�� �ִ� �Ѱ� ���� �� : 10��
	�� struct : ���¹�ȣ, �ܾ�, ���̸�
*/