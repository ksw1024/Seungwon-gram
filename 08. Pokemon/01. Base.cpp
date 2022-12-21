#include <iostream>
#include <Windows.h>

#define		NAME_SIZE		32

using namespace std;

enum MAIN_MENU
{
	MM_NONE,
	MM_MAP,
	MM_STORE,
	MM_INVENTORY,
	MM_EXIT
};

enum MAP_TYPE
{
	MT_NONE,
	MT_FIELD,
	MT_GYM,
	MT_POKEMONLEAGUE,
	MT_BACK,
};

enum POKEMON
{
	POKEMON_NONE,
	POKEMON_PIKACHU,
	POKEMON_EEVEE,
	POKEMON_ARCEUS,
	POKEMON_END,
};

struct _tagPlayer
{
	char		strName[NAME_SIZE];
	char		strPokemonName[NAME_SIZE];

	POKEMON		ePokemon;

	int			iAttackMin;
	int			iAttackMax;
	int			iArmorMin;
	int			iArmorMax;
	int			iHP;
	int			iHPMax;
	int			iMP;
	int			iMPMax;
	int			iExp;
	int			iLevel;
};

struct _tagMonster
{
	char		strName[NAME_SIZE];

	int			iAttackMin;
	int			iAttackMax;
	int			iArmorMin;
	int			iArmorMax;
	int			iHP;
	int			iHPMax;
	int			iMP;
	int			iMPMax;
	int			iExp;
	int			iLevel;
	int			iGoldMin;
	int			iGoldMax;
};

void LoadingTag()
{
	system("cls");
	cout << "_________________ �Уϣˣš��ͣϣΣӣԣţ� _________________" << endl << endl << endl << endl;
}

void LoadingDialog()
{
	for (int i = 0; i < 2; i++)
	{
		Sleep(20); LoadingTag();
		Sleep(20); LoadingTag(); cout << "������������������" << endl << endl << endl << endl;
		Sleep(20); LoadingTag(); cout << "�����������������ͣ�" << endl << endl << endl << endl;
		Sleep(20); LoadingTag(); cout << "�����������������ͣ���" << endl << endl << endl << endl;
		Sleep(20); LoadingTag(); cout << "�����������������ͣ��С�" << endl << endl << endl << endl;
		Sleep(20); LoadingTag(); cout << "�����������������ͣ��С���" << endl << endl << endl << endl;
		Sleep(20); LoadingTag(); cout << "�����������������ͣ��С��̣�" << endl << endl << endl << endl;
		Sleep(20); LoadingTag(); cout << "�����������������ͣ��С��̣ϣ�" << endl << endl << endl << endl;
		Sleep(20); LoadingTag(); cout << "�����������������ͣ��С��̣ϣ���" << endl << endl << endl << endl;
		Sleep(20); LoadingTag(); cout << "�����������������ͣ��С��̣ϣ��ģ�" << endl << endl << endl << endl;
		Sleep(20); LoadingTag(); cout << "�����������������ͣ��С��̣ϣ��ģɣ�" << endl << endl << endl << endl;
		Sleep(20); LoadingTag(); cout << "�����������������ͣ��С��̣ϣ��ģɣΣ�" << endl << endl << endl << endl;
		Sleep(20); LoadingTag(); cout << "�����������������ͣ��С��̣ϣ��ģɣΣǣ�" << endl << endl << endl << endl;
		Sleep(20); LoadingTag(); cout << "�����������������ͣ��С��̣ϣ��ģɣΣǣ���" << endl << endl << endl << endl;
		Sleep(20); LoadingTag(); cout << "�����������������ͣ��С��̣ϣ��ģɣΣǣ�����" << endl << endl << endl << endl;
		Sleep(20); LoadingTag(); cout << "�����������������ͣ��С��̣ϣ��ģɣΣǣ�����������������������" << endl << endl << endl << endl;
	}
}

void OpeningTag()
{
	system("cls");
	cout << "_________________ �Уϣˣš��ͣϣΣӣԣţ� _________________" << endl << endl;
	cout << "************************* �� �� �� *************************" << endl << endl << endl << endl;
}

void OpeningDialog()
{
	OpeningTag();

	Sleep(100); OpeningTag(); cout << "���ڻ� : ��" << endl << endl;
	Sleep(100); OpeningTag(); cout << "���ڻ� : �� ��" << endl << endl;
	Sleep(100); OpeningTag(); cout << "���ڻ� : �� �ݰ�" << endl << endl;
	Sleep(100); OpeningTag(); cout << "���ڻ� : �� �ݰ���" << endl << endl;
	Sleep(100); OpeningTag(); cout << "���ڻ� : �� �ݰ���." << endl << endl;
	Sleep(100); OpeningTag(); cout << "���ڻ� : �� �ݰ���.." << endl << endl;
	Sleep(100); OpeningTag(); cout << "���ڻ� : �� �ݰ���..." << endl << endl;
	Sleep(100); OpeningTag(); cout << "���ڻ� : �� �ݰ���... ��" << endl << endl;
	Sleep(100); OpeningTag(); cout << "���ڻ� : �� �ݰ���... ����" << endl << endl;
	Sleep(100); OpeningTag(); cout << "���ڻ� : �� �ݰ���... ���ϸ�" << endl << endl;
	Sleep(100); OpeningTag(); cout << "���ڻ� : �� �ݰ���... ���ϸ� ��" << endl << endl;
	Sleep(100); OpeningTag(); cout << "���ڻ� : �� �ݰ���... ���ϸ� ����" << endl << endl;
	Sleep(100); OpeningTag(); cout << "���ڻ� : �� �ݰ���... ���ϸ� ���迡" << endl << endl;
	Sleep(100); OpeningTag(); cout << "���ڻ� : �� �ݰ���... ���ϸ� ���迡 ��" << endl << endl;
	Sleep(100); OpeningTag(); cout << "���ڻ� : �� �ݰ���... ���ϸ� ���迡 �°�" << endl << endl;
	Sleep(100); OpeningTag(); cout << "���ڻ� : �� �ݰ���... ���ϸ� ���迡 �°� ȯ" << endl << endl;
	Sleep(100); OpeningTag(); cout << "���ڻ� : �� �ݰ���... ���ϸ� ���迡 �°� ȯ��" << endl << endl;
	Sleep(100); OpeningTag(); cout << "���ڻ� : �� �ݰ���... ���ϸ� ���迡 �°� ȯ����" << endl << endl;
	Sleep(100); OpeningTag(); cout << "���ڻ� : �� �ݰ���... ���ϸ� ���迡 �°� ȯ���ϳ�" << endl << endl;
	Sleep(100); OpeningTag(); cout << "���ڻ� : �� �ݰ���... ���ϸ� ���迡 �°� ȯ���ϳ�." << endl << endl;
	Sleep(100); OpeningTag(); cout << "���ڻ� : �� �ݰ���... ���ϸ� ���迡 �°� ȯ���ϳ�.." << endl << endl;
	Sleep(100); OpeningTag(); cout << "���ڻ� : �� �ݰ���... ���ϸ� ���迡 �°� ȯ���ϳ�..." << endl << endl;
	
	Sleep(3000);
	Sleep(100); OpeningTag(); cout << "���ڻ� : ��" << endl << endl;
	Sleep(100); OpeningTag(); cout << "���ڻ� : �ڳ�" << endl << endl;
	Sleep(100); OpeningTag(); cout << "���ڻ� : �ڳ���" << endl << endl;
	Sleep(100); OpeningTag(); cout << "���ڻ� : �ڳ��� ��" << endl << endl;
	Sleep(100); OpeningTag(); cout << "���ڻ� : �ڳ��� �̸�" << endl << endl;
	Sleep(100); OpeningTag(); cout << "���ڻ� : �ڳ��� �̸���" << endl << endl;
	Sleep(100); OpeningTag(); cout << "���ڻ� : �ڳ��� �̸��� ��" << endl << endl;
	Sleep(100); OpeningTag(); cout << "���ڻ� : �ڳ��� �̸��� �˷�" << endl << endl;
	Sleep(100); OpeningTag(); cout << "���ڻ� : �ڳ��� �̸��� �˷���" << endl << endl;
	Sleep(100); OpeningTag(); cout << "���ڻ� : �ڳ��� �̸��� �˷��ְ�" << endl << endl;
	Sleep(100); OpeningTag(); cout << "���ڻ� : �ڳ��� �̸��� �˷��ְڴ�" << endl << endl;
	Sleep(100); OpeningTag(); cout << "���ڻ� : �ڳ��� �̸��� �˷��ְڴ°�?" << endl << endl;
}

int main()
{
	srand(time(NULL));

	_tagPlayer	tPlayer = {};

	LoadingDialog();
	OpeningDialog();

	cout << "??? : ";
	cin.getline(tPlayer.strName, NAME_SIZE - 1);
	
	int iPokemon = POKEMON_NONE;

	while (iPokemon == POKEMON_NONE)
	{
		LoadingDialog();
		system("cls");
		cout << "_________________ �Уϣˣš��ͣϣΣӣԣţ� _________________" << endl << endl;

		cout << "*********************** ���ڻ翬���� ***********************" << endl << endl << endl << endl;
		
		cout << "1. �ǡ�ī����" << endl << endl;
		cout << "2. �̡��ꡡ��" << endl << endl;
		cout << "3. �Ƹ����콺" << endl << endl << endl << endl;

		cout << "���ϸ� ����� ���� ������ ���� ģ���� �������ּ��� : ";

		cin >> iPokemon;

		if (cin.fail())
		{
			cin.clear();
			cin.ignore(1024, '\n');
			continue;
		}
		else if (iPokemon <= POKEMON_NONE || iPokemon >= POKEMON_END)
			iPokemon = POKEMON_NONE;
	}

	tPlayer.iLevel = 1;
	tPlayer.iExp = 0;
//	tPlayer.ePokemon = (POKEMON)iPokemon;				// C Stype
	tPlayer.ePokemon = static_cast<POKEMON>(iPokemon);	// C++ Style

	switch (tPlayer.ePokemon)
	{
	case POKEMON_PIKACHU:
		strcpy_s(tPlayer.strPokemonName, "�ǡ�ī����");
		tPlayer.iAttackMin = 10;
		tPlayer.iAttackMax = 15;
		tPlayer.iArmorMin = 20;
		tPlayer.iArmorMax = 25;
		tPlayer.iHPMax = 500;
		tPlayer.iHP = 500;
		tPlayer.iMPMax = 100;
		tPlayer.iMP = 100;
		break;
	case POKEMON_EEVEE:
		strcpy_s(tPlayer.strPokemonName, "�̡��ꡡ��");
		tPlayer.iAttackMin = 20;
		tPlayer.iAttackMax = 25;
		tPlayer.iArmorMin = 15;
		tPlayer.iArmorMax = 20;
		tPlayer.iHPMax = 300;
		tPlayer.iHP = 300;
		tPlayer.iMPMax = 300;
		tPlayer.iMP = 300;
		break;
	case POKEMON_ARCEUS:
		strcpy_s(tPlayer.strPokemonName, "�Ƹ����콺 ");
		tPlayer.iAttackMin = 11;
		tPlayer.iAttackMax = 13;
		tPlayer.iArmorMin = 11;
		tPlayer.iArmorMax = 13;
		tPlayer.iHPMax = 100;
		tPlayer.iHP = 100;
		tPlayer.iMPMax = 100;
		tPlayer.iMP = 100;
		break;
	}

	_tagMonster	tMonsterArr[MT_BACK - 1] = {};

	// �߻� ���ϸ�
	strcpy_s(tMonsterArr[MT_FIELD - 1].strName, "�߻��� ������");
	tMonsterArr[MT_FIELD - 1].iAttackMin = 20;
	tMonsterArr[MT_FIELD - 1].iAttackMax = 30;
	tMonsterArr[MT_FIELD - 1].iArmorMin = 2;
	tMonsterArr[MT_FIELD - 1].iArmorMax = 5;
	tMonsterArr[MT_FIELD - 1].iHP = 100;
	tMonsterArr[MT_FIELD - 1].iHPMax = 100;
	tMonsterArr[MT_FIELD - 1].iMP = 10;
	tMonsterArr[MT_FIELD - 1].iMPMax = 10;
	tMonsterArr[MT_FIELD - 1].iLevel = 1;
	tMonsterArr[MT_FIELD - 1].iExp = 1000;
	tMonsterArr[MT_FIELD - 1].iGoldMin = 500;
	tMonsterArr[MT_FIELD - 1].iGoldMax = 1500;

	// ü���� ����
	strcpy_s(tMonsterArr[MT_FIELD - 1].strName, "������ �ս���");
	tMonsterArr[MT_FIELD - 1].iAttackMin = 50;
	tMonsterArr[MT_FIELD - 1].iAttackMax = 90;
	tMonsterArr[MT_FIELD - 1].iArmorMin = 60;
	tMonsterArr[MT_FIELD - 1].iArmorMax = 90;
	tMonsterArr[MT_FIELD - 1].iHP = 2000;
	tMonsterArr[MT_FIELD - 1].iHPMax = 2000;
	tMonsterArr[MT_FIELD - 1].iMP = 20;
	tMonsterArr[MT_FIELD - 1].iMPMax = 20;
	tMonsterArr[MT_FIELD - 1].iLevel = 5;
	tMonsterArr[MT_FIELD - 1].iExp = 7000;
	tMonsterArr[MT_FIELD - 1].iGoldMin = 600;
	tMonsterArr[MT_FIELD - 1].iGoldMax = 8000;

	// è�Ǿ� ���ϸ�
	strcpy_s(tMonsterArr[MT_FIELD - 1].strName, "��õ�� �з�ƽ");
	tMonsterArr[MT_FIELD - 1].iAttackMin = 250;
	tMonsterArr[MT_FIELD - 1].iAttackMax = 500;
	tMonsterArr[MT_FIELD - 1].iArmorMin = 200;
	tMonsterArr[MT_FIELD - 1].iArmorMax = 400;
	tMonsterArr[MT_FIELD - 1].iHP = 30000;
	tMonsterArr[MT_FIELD - 1].iHPMax = 30000;
	tMonsterArr[MT_FIELD - 1].iMP = 20000;
	tMonsterArr[MT_FIELD - 1].iMPMax = 20000;
	tMonsterArr[MT_FIELD - 1].iLevel = 10;
	tMonsterArr[MT_FIELD - 1].iExp = 30000;
	tMonsterArr[MT_FIELD - 1].iGoldMin = 20000;
	tMonsterArr[MT_FIELD - 1].iGoldMax = 50000;

	while (true)
	{
		LoadingDialog();
		system("cls");
		cout << "_________________ �Уϣˣš��ͣϣΣӣԣţ� _________________" << endl << endl;

		cout << "************************* ���ʸ��� *************************" << endl << endl << endl << endl;

		
		cout << "1. ���� �� ������ ������" << endl << endl;
		cout << "2. ���ʸ��� �߽���" << endl << endl;
		cout << "3. �κ��丮 ����" << endl << endl;
		cout << "4. ���� ����" << endl << endl << endl << endl;

		cout << "�޴��� �����ϼ��� : ";

		int iMenu;
		cin >> iMenu;

		if (cin.fail())
		{
			cin.clear();
			cin.ignore(1024, '\n');
			continue;
		}

		if (iMenu == MM_EXIT)
			break;

		switch (iMenu)
		{
		case MM_MAP:
			while (true)
			{
				LoadingDialog();
				system("cls");
				cout << "_________________ �Уϣˣš��ͣϣΣӣԣţ� _________________" << endl << endl;

				cout << "********************** ���� ���� �ܰ� **********************" << endl << endl << endl << endl;

				cout << "1. ���� �� �߻� ���ϸ�" << endl << endl;
				cout << "2. ü������ �����ϱ�" << endl << endl;
				cout << "3. ���ϸ� ���׿� �����ϱ�" << endl << endl;
				cout << "4. ���� ������ ���ư���" << endl << endl << endl << endl;

				cout << "���� �����ϼ��� : ";

				cin >> iMenu;
				if (cin.fail())
				{
					cin.clear();
					cin.ignore(1024, '\n');
					continue;
				}

				if (iMenu == MT_BACK)
					break;

				_tagMonster tMonster = tMonsterArr[iMenu - 1];

				while (true)
				{
					system("cls");
					cout << "_________________ �Уϣˣš��ͣϣΣӣԣţ� _________________" << endl << endl;

					switch (iMenu)
					{
					case MT_FIELD:
						cout << "******************* �߻� ���ϸ� �������� *******************" << endl << endl << endl << endl;
						break;
					case MT_GYM:
						cout << "********************* ���ʸ���  ü���� *********************" << endl << endl << endl << endl;
						break;
					case MT_POKEMONLEAGUE:
						cout << "*********************** ���ϸ󡡸��� ***********************" << endl << endl << endl << endl;
						break;
					}


				}
			}
			break;
		case MM_STORE:
			break;
		case MM_INVENTORY:
			break;
		case MM_EXIT:
			break;
		default:
			cout << endl << "�߸� �����Ͽ����ϴ�." << endl << endl;
			system("pause");
			break;
		}
	}

	return 0;
}