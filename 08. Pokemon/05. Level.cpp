#include <iostream>
#include <Windows.h>

#define		NAME_SIZE			32
#define		INVENTORY_MAX		10
#define		ITEM_DESC_LENGTH	512
#define		STORE_WEAPON_MAX	3
#define		STORE_ARMOR_MAX		3
#define		SLEEP_TIME			10
#define		LEVEL_MAX			10

using namespace std;

enum BATTLE
{
	BATTLE_NONE,
	BATTLE_ATTACK,
	BATTLE_BACK,
};

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

enum ITEM_TYPE
{
	IT_NONE,
	IT_WEAPON,
	IT_ARMOR,
	IT_BACK
};

enum STORE_MENU
{
	SM_NONE,
	SM_WEAPON,
	SM_ARMOR,
	SM_BACK
};

enum EQUIP
{
	EQ_WEAPON,
	EQ_ARMOR,
	EQ_MAX,
};

struct _tagItem
{
	char	strName[NAME_SIZE];
	char	strTypeName[NAME_SIZE];
	char	strDesc[ITEM_DESC_LENGTH];

	ITEM_TYPE	eType;

	int iMin;
	int iMax;
	int iPrice;
	int iSell;
};

struct _tagInventory
{
	int		iGold;
	int		iItemCount;
	_tagItem	tItem[INVENTORY_MAX];
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

	_tagInventory tInventory;

	_tagItem	tEquip[EQ_MAX];
	bool		bEquip[EQ_MAX];
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

struct _tagLevelUpStatus
{
	int	iAttackMin;
	int iAttackMax;
	int iArmorMin;
	int iArmorMax;

	int iHPMin;
	int iHPMax;
	int iMPMin;
	int iMPMax;
};

void LoadingTag()
{
	system("cls");
	cout << "_________________ �Уϣˣš��ͣϣΣӣԣţ� _________________" << endl << endl << endl << endl;
}

void LoadingDialog()
{
	for (int i = 0; i < 1; i++)
	{
		Sleep(1); LoadingTag();
		Sleep(1); LoadingTag(); cout << "������������������" << endl << endl << endl << endl;
		Sleep(1); LoadingTag(); cout << "�����������������ͣ�" << endl << endl << endl << endl;
		Sleep(1); LoadingTag(); cout << "�����������������ͣ���" << endl << endl << endl << endl;
		Sleep(1); LoadingTag(); cout << "�����������������ͣ��С�" << endl << endl << endl << endl;
		Sleep(1); LoadingTag(); cout << "�����������������ͣ��С���" << endl << endl << endl << endl;
		Sleep(1); LoadingTag(); cout << "�����������������ͣ��С��̣�" << endl << endl << endl << endl;
		Sleep(1); LoadingTag(); cout << "�����������������ͣ��С��̣ϣ�" << endl << endl << endl << endl;
		Sleep(1); LoadingTag(); cout << "�����������������ͣ��С��̣ϣ���" << endl << endl << endl << endl;
		Sleep(1); LoadingTag(); cout << "�����������������ͣ��С��̣ϣ��ģ�" << endl << endl << endl << endl;
		Sleep(1); LoadingTag(); cout << "�����������������ͣ��С��̣ϣ��ģɣ�" << endl << endl << endl << endl;
		Sleep(1); LoadingTag(); cout << "�����������������ͣ��С��̣ϣ��ģɣΣ�" << endl << endl << endl << endl;
		Sleep(1); LoadingTag(); cout << "�����������������ͣ��С��̣ϣ��ģɣΣǣ�" << endl << endl << endl << endl;
		Sleep(1); LoadingTag(); cout << "�����������������ͣ��С��̣ϣ��ģɣΣǣ���" << endl << endl << endl << endl;
		Sleep(1); LoadingTag(); cout << "�����������������ͣ��С��̣ϣ��ģɣΣǣ�����" << endl << endl << endl << endl;
		Sleep(1); LoadingTag(); cout << "�����������������ͣ��С��̣ϣ��ģɣΣǣ�����������������������" << endl << endl << endl << endl;
	}
	system("cls");
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

	Sleep(SLEEP_TIME); OpeningTag(); cout << "���ڻ� : ��" << endl << endl;
	Sleep(SLEEP_TIME); OpeningTag(); cout << "���ڻ� : �� ��" << endl << endl;
	Sleep(SLEEP_TIME); OpeningTag(); cout << "���ڻ� : �� �ݰ�" << endl << endl;
	Sleep(SLEEP_TIME); OpeningTag(); cout << "���ڻ� : �� �ݰ���" << endl << endl;
	Sleep(SLEEP_TIME); OpeningTag(); cout << "���ڻ� : �� �ݰ���." << endl << endl;
	Sleep(SLEEP_TIME); OpeningTag(); cout << "���ڻ� : �� �ݰ���.." << endl << endl;
	Sleep(SLEEP_TIME); OpeningTag(); cout << "���ڻ� : �� �ݰ���..." << endl << endl;
	Sleep(SLEEP_TIME); OpeningTag(); cout << "���ڻ� : �� �ݰ���... ��" << endl << endl;
	Sleep(SLEEP_TIME); OpeningTag(); cout << "���ڻ� : �� �ݰ���... ����" << endl << endl;
	Sleep(SLEEP_TIME); OpeningTag(); cout << "���ڻ� : �� �ݰ���... ���ϸ�" << endl << endl;
	Sleep(SLEEP_TIME); OpeningTag(); cout << "���ڻ� : �� �ݰ���... ���ϸ� ��" << endl << endl;
	Sleep(SLEEP_TIME); OpeningTag(); cout << "���ڻ� : �� �ݰ���... ���ϸ� ����" << endl << endl;
	Sleep(SLEEP_TIME); OpeningTag(); cout << "���ڻ� : �� �ݰ���... ���ϸ� ���迡" << endl << endl;
	Sleep(SLEEP_TIME); OpeningTag(); cout << "���ڻ� : �� �ݰ���... ���ϸ� ���迡 ��" << endl << endl;
	Sleep(SLEEP_TIME); OpeningTag(); cout << "���ڻ� : �� �ݰ���... ���ϸ� ���迡 �°�" << endl << endl;
	Sleep(SLEEP_TIME); OpeningTag(); cout << "���ڻ� : �� �ݰ���... ���ϸ� ���迡 �°� ȯ" << endl << endl;
	Sleep(SLEEP_TIME); OpeningTag(); cout << "���ڻ� : �� �ݰ���... ���ϸ� ���迡 �°� ȯ��" << endl << endl;
	Sleep(SLEEP_TIME); OpeningTag(); cout << "���ڻ� : �� �ݰ���... ���ϸ� ���迡 �°� ȯ����" << endl << endl;
	Sleep(SLEEP_TIME); OpeningTag(); cout << "���ڻ� : �� �ݰ���... ���ϸ� ���迡 �°� ȯ���ϳ�" << endl << endl;
	Sleep(SLEEP_TIME); OpeningTag(); cout << "���ڻ� : �� �ݰ���... ���ϸ� ���迡 �°� ȯ���ϳ�." << endl << endl;
	Sleep(SLEEP_TIME); OpeningTag(); cout << "���ڻ� : �� �ݰ���... ���ϸ� ���迡 �°� ȯ���ϳ�.." << endl << endl;
	Sleep(SLEEP_TIME); OpeningTag(); cout << "���ڻ� : �� �ݰ���... ���ϸ� ���迡 �°� ȯ���ϳ�..." << endl << endl;

	Sleep(200);
	Sleep(SLEEP_TIME); OpeningTag(); cout << "���ڻ� : ��" << endl << endl;
	Sleep(SLEEP_TIME); OpeningTag(); cout << "���ڻ� : �ڳ�" << endl << endl;
	Sleep(SLEEP_TIME); OpeningTag(); cout << "���ڻ� : �ڳ���" << endl << endl;
	Sleep(SLEEP_TIME); OpeningTag(); cout << "���ڻ� : �ڳ��� ��" << endl << endl;
	Sleep(SLEEP_TIME); OpeningTag(); cout << "���ڻ� : �ڳ��� �̸�" << endl << endl;
	Sleep(SLEEP_TIME); OpeningTag(); cout << "���ڻ� : �ڳ��� �̸���" << endl << endl;
	Sleep(SLEEP_TIME); OpeningTag(); cout << "���ڻ� : �ڳ��� �̸��� ��" << endl << endl;
	Sleep(SLEEP_TIME); OpeningTag(); cout << "���ڻ� : �ڳ��� �̸��� �˷�" << endl << endl;
	Sleep(SLEEP_TIME); OpeningTag(); cout << "���ڻ� : �ڳ��� �̸��� �˷���" << endl << endl;
	Sleep(SLEEP_TIME); OpeningTag(); cout << "���ڻ� : �ڳ��� �̸��� �˷��ְ�" << endl << endl;
	Sleep(SLEEP_TIME); OpeningTag(); cout << "���ڻ� : �ڳ��� �̸��� �˷��ְڴ�" << endl << endl;
	Sleep(SLEEP_TIME); OpeningTag(); cout << "���ڻ� : �ڳ��� �̸��� �˷��ְڴ°�?" << endl << endl;
}

int main()
{
	srand(time(NULL));

	const int iLevelUpExp[LEVEL_MAX] = { 4000, 10000, 20000, 35000, 50000, 70000, 100000, 150000, 200000, 400000 };

	_tagLevelUpStatus tLvUpTable[POKEMON_END - 1] = {};

	tLvUpTable[POKEMON_PIKACHU - 1].iAttackMin = 4;
	tLvUpTable[POKEMON_PIKACHU - 1].iAttackMax = 10;
	tLvUpTable[POKEMON_PIKACHU - 1].iArmorMin = 8;
	tLvUpTable[POKEMON_PIKACHU - 1].iArmorMax = 16;
	tLvUpTable[POKEMON_PIKACHU - 1].iHPMin = 50;
	tLvUpTable[POKEMON_PIKACHU - 1].iHPMax = 100;
	tLvUpTable[POKEMON_PIKACHU - 1].iMPMin = 10;
	tLvUpTable[POKEMON_PIKACHU - 1].iMPMax = 20;

	tLvUpTable[POKEMON_EEVEE - 1].iAttackMin = 10;
	tLvUpTable[POKEMON_EEVEE - 1].iAttackMax = 15;
	tLvUpTable[POKEMON_EEVEE - 1].iArmorMin = 5;
	tLvUpTable[POKEMON_EEVEE - 1].iArmorMax = 10;
	tLvUpTable[POKEMON_EEVEE - 1].iHPMin = 30;
	tLvUpTable[POKEMON_EEVEE - 1].iHPMax = 60;
	tLvUpTable[POKEMON_EEVEE - 1].iMPMin = 30;
	tLvUpTable[POKEMON_EEVEE - 1].iMPMax = 50;

	tLvUpTable[POKEMON_ARCEUS - 1].iAttackMin = 15;
	tLvUpTable[POKEMON_ARCEUS - 1].iAttackMax = 20;
	tLvUpTable[POKEMON_ARCEUS - 1].iArmorMin = 3;
	tLvUpTable[POKEMON_ARCEUS - 1].iArmorMax = 7;
	tLvUpTable[POKEMON_ARCEUS - 1].iHPMin = 20;
	tLvUpTable[POKEMON_ARCEUS - 1].iHPMax = 40;
	tLvUpTable[POKEMON_ARCEUS - 1].iMPMin = 50;
	tLvUpTable[POKEMON_ARCEUS - 1].iMPMax = 100;


	_tagPlayer	tPlayer = {};

	LoadingDialog();
	OpeningDialog();

	cout << "??? : ";
	cin.getline(tPlayer.strName, NAME_SIZE - 1);

	int iPokemon = POKEMON_NONE;

	while (iPokemon == POKEMON_NONE)
	{
		LoadingDialog();
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
	tPlayer.ePokemon = static_cast<POKEMON>(iPokemon);		// C++ Style
	tPlayer.tInventory.iGold = 100000;

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
	strcpy_s(tMonsterArr[MT_GYM - 1].strName, "������ �ս���");
	tMonsterArr[MT_GYM - 1].iAttackMin = 50;
	tMonsterArr[MT_GYM - 1].iAttackMax = 90;
	tMonsterArr[MT_GYM - 1].iArmorMin = 60;
	tMonsterArr[MT_GYM - 1].iArmorMax = 90;
	tMonsterArr[MT_GYM - 1].iHP = 2000;
	tMonsterArr[MT_GYM - 1].iHPMax = 2000;
	tMonsterArr[MT_GYM - 1].iMP = 20;
	tMonsterArr[MT_GYM - 1].iMPMax = 20;
	tMonsterArr[MT_GYM - 1].iLevel = 5;
	tMonsterArr[MT_GYM - 1].iExp = 7000;
	tMonsterArr[MT_GYM - 1].iGoldMin = 600;
	tMonsterArr[MT_GYM - 1].iGoldMax = 8000;

	// è�Ǿ� ���ϸ�
	strcpy_s(tMonsterArr[MT_POKEMONLEAGUE - 1].strName, "��õ�� �з�ƽ");
	tMonsterArr[MT_POKEMONLEAGUE - 1].iAttackMin = 250;
	tMonsterArr[MT_POKEMONLEAGUE - 1].iAttackMax = 500;
	tMonsterArr[MT_POKEMONLEAGUE - 1].iArmorMin = 200;
	tMonsterArr[MT_POKEMONLEAGUE - 1].iArmorMax = 400;
	tMonsterArr[MT_POKEMONLEAGUE - 1].iHP = 30000;
	tMonsterArr[MT_POKEMONLEAGUE - 1].iHPMax = 30000;
	tMonsterArr[MT_POKEMONLEAGUE - 1].iMP = 20000;
	tMonsterArr[MT_POKEMONLEAGUE - 1].iMPMax = 20000;
	tMonsterArr[MT_POKEMONLEAGUE - 1].iLevel = 10;
	tMonsterArr[MT_POKEMONLEAGUE - 1].iExp = 30000;
	tMonsterArr[MT_POKEMONLEAGUE - 1].iGoldMin = 20000;
	tMonsterArr[MT_POKEMONLEAGUE - 1].iGoldMax = 50000;


	// ����, �� ������ ���� ������ �����͸� �����Ѵ�.
	_tagItem	tStoreWeapon[STORE_WEAPON_MAX] = {};
	_tagItem	tStoreArmor[STORE_ARMOR_MAX] = {};

	// ============ �������� ���� ============
	strcpy_s(tStoreWeapon[POKEMON_PIKACHU - 1].strName, "õ���� ��");
	strcpy_s(tStoreWeapon[POKEMON_PIKACHU - 1].strTypeName, "��������");
	strcpy_s(tStoreWeapon[POKEMON_PIKACHU - 1].strDesc, "��ī�� ��ȭ�� �Ͽ� ���������� ���� ��. ������ ��ī��� ��ȭ�� �ź��Ͽ� �ٸ� �ǹ̷� ����������.(����)");
	tStoreWeapon[POKEMON_PIKACHU - 1].eType = IT_WEAPON;
	tStoreWeapon[POKEMON_PIKACHU - 1].iMin = 10;
	tStoreWeapon[POKEMON_PIKACHU - 1].iMax = 15;
	tStoreWeapon[POKEMON_PIKACHU - 1].iPrice = 1000;
	tStoreWeapon[POKEMON_PIKACHU - 1].iSell = 500;

	strcpy_s(tStoreWeapon[POKEMON_EEVEE - 1].strName, "��ȭ�� ��");
	strcpy_s(tStoreWeapon[POKEMON_EEVEE - 1].strTypeName, "��������");
	strcpy_s(tStoreWeapon[POKEMON_EEVEE - 1].strDesc, "�̺��̰� ��ȭ�� �Ͽ� ���������� ���� ��. ������ ���� ��ȭ�� �������� ���� �ٸ� �ǹ̷� ����������.(����)");
	tStoreWeapon[POKEMON_EEVEE - 1].eType = IT_WEAPON;
	tStoreWeapon[POKEMON_EEVEE - 1].iMin = 20;
	tStoreWeapon[POKEMON_EEVEE - 1].iMax = 40;
	tStoreWeapon[POKEMON_EEVEE - 1].iPrice = 7000;
	tStoreWeapon[POKEMON_EEVEE - 1].iSell = 3500;

	strcpy_s(tStoreWeapon[POKEMON_ARCEUS - 1].strName, "�н� ��ġ");
	strcpy_s(tStoreWeapon[POKEMON_ARCEUS - 1].strTypeName, "��������");
	strcpy_s(tStoreWeapon[POKEMON_ARCEUS - 1].strDesc, "����ġ�� ������ �� �ִ� ������");
	tStoreWeapon[POKEMON_ARCEUS - 1].eType = IT_WEAPON;
	tStoreWeapon[POKEMON_ARCEUS - 1].iMin = 90;
	tStoreWeapon[POKEMON_ARCEUS - 1].iMax = 150;
	tStoreWeapon[POKEMON_ARCEUS - 1].iPrice = 30000;
	tStoreWeapon[POKEMON_ARCEUS - 1].iSell = 15000;

	// ============ ������ ���� ============
	strcpy_s(tStoreArmor[POKEMON_PIKACHU - 1].strName, "õ���� ����");
	strcpy_s(tStoreArmor[POKEMON_PIKACHU - 1].strTypeName, "�� �� ��");
	strcpy_s(tStoreArmor[POKEMON_PIKACHU - 1].strDesc, "��ī�� ������ �ø��� ���� ����");
	tStoreArmor[POKEMON_PIKACHU - 1].eType = IT_ARMOR;
	tStoreArmor[POKEMON_PIKACHU - 1].iMin = 10;
	tStoreArmor[POKEMON_PIKACHU - 1].iMax = 15;
	tStoreArmor[POKEMON_PIKACHU - 1].iPrice = 1000;
	tStoreArmor[POKEMON_PIKACHU - 1].iSell = 500;

	strcpy_s(tStoreArmor[POKEMON_EEVEE - 1].strName, "��ȭ�� ����");
	strcpy_s(tStoreArmor[POKEMON_EEVEE - 1].strTypeName, "�� �� ��");
	strcpy_s(tStoreArmor[POKEMON_EEVEE - 1].strDesc, "�̺��̰� ������ �ø��� ���� ����");
	tStoreArmor[POKEMON_EEVEE - 1].eType = IT_ARMOR;
	tStoreArmor[POKEMON_EEVEE - 1].iMin = 20;
	tStoreArmor[POKEMON_EEVEE - 1].iMax = 40;
	tStoreArmor[POKEMON_EEVEE - 1].iPrice = 7000;
	tStoreArmor[POKEMON_EEVEE - 1].iSell = 3500;

	strcpy_s(tStoreArmor[POKEMON_ARCEUS - 1].strName, "�н� ����");
	strcpy_s(tStoreArmor[POKEMON_ARCEUS - 1].strTypeName, "�� �� ��");
	strcpy_s(tStoreArmor[POKEMON_ARCEUS - 1].strDesc, "�Ƹ����콺�� ������ �ø��� ���� ����");
	tStoreArmor[POKEMON_ARCEUS - 1].eType = IT_ARMOR;
	tStoreArmor[POKEMON_ARCEUS - 1].iMin = 90;
	tStoreArmor[POKEMON_ARCEUS - 1].iMax = 150;
	tStoreArmor[POKEMON_ARCEUS - 1].iPrice = 30000;
	tStoreArmor[POKEMON_ARCEUS - 1].iSell = 15000;

	while (true)
	{
		LoadingDialog();
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

					cout << "======================= �У̣��٣ţ� =======================" << endl << endl;
					cout << "�̡��� : " << tPlayer.strName << "\t\t\t\t���ϸ� : " << tPlayer.strPokemonName << endl;
					cout << "������ : " << tPlayer.iLevel << "\t\t\t\t����ġ : " << tPlayer.iExp 
						<< " / " << iLevelUpExp[tPlayer.iLevel - 1] << endl;

					// ���ݷ��� ������ �ɷ�ġ�� ������Ѽ� �ٲ��ش�.
					if (tPlayer.bEquip[EQ_WEAPON])
					{
						cout << "���ݷ� : " << tPlayer.iAttackMin << "(+"
							<< tPlayer.tEquip[EQ_WEAPON].iMin << ")"
							<< " - "
							<< tPlayer.iAttackMax << "(+"
							<< tPlayer.tEquip[EQ_WEAPON].iMax << ")" << "\t\t";
					}
					else
					{
						cout << "���ݷ� : " << tPlayer.iAttackMin << " - " << tPlayer.iAttackMax
							<< "\t\t\t";
					}

					// ������ ������ �ɷ�ġ�� ������Ѽ� �ٲ��ش�.
					if (tPlayer.bEquip[EQ_ARMOR])
					{
						cout << "���� : " << tPlayer.iArmorMin << "(+"
							<< tPlayer.tEquip[EQ_ARMOR].iMin << ")"
							<< " - "
							<< tPlayer.iArmorMax << "(+"
							<< tPlayer.tEquip[EQ_ARMOR].iMax << ")" << endl;
					}
					else
					{
						cout << "���� : " << tPlayer.iArmorMin << " - " << tPlayer.iArmorMax << endl;
					}

					cout << "ü���� : " << tPlayer.iHP << " / " << tPlayer.iHPMax
						<< "\t\t\t������ : " << tPlayer.iMP << " / " << tPlayer.iMPMax << endl;

					// ���� ������ ǥ��
					if (tPlayer.bEquip[EQ_WEAPON])
						cout << "���� ���� : " << tPlayer.tEquip[EQ_WEAPON].strName << "\t\t\t";

					else
						cout << "���� ���� : �� ��" << "\t\t\t";

					if (tPlayer.bEquip[EQ_ARMOR])
						cout << "���� �� : " << tPlayer.tEquip[EQ_ARMOR].strName << endl;

					else
						cout << "���� �� : �� ��" << endl;

					cout << "������ : " << tPlayer.tInventory.iGold << " Gold" << endl << endl << endl << endl;

					cout << "====================== �ͣϣΣӣԣţ� ======================" << endl << endl;
					cout << "�̡��� : " << tMonster.strName << "\t\t\t������ : " << tMonster.iLevel << endl;
					cout << "���ݷ� : " << tMonster.iAttackMin << " - " << tMonster.iAttackMax
						<< "\t\t\t���� : " << tMonster.iArmorMin << " - " << tMonster.iArmorMax << endl;
					cout << "ü���� : " << tMonster.iHP << " / " << tMonster.iHPMax
						<< "\t\t\t������ : " << tMonster.iMP << " / " << tMonster.iMPMax << endl;
					cout << "ȹ�� ����ġ : " << tMonster.iExp << " Exp"
						<< "\t\t\tȹ�� ��� : " << tMonster.iGoldMin << " - " << tMonster.iGoldMax << " Gold" << endl << endl << endl << endl;


					cout << "1. �����ġ��" << endl << endl;
					cout << "2. ��������" << endl << endl << endl << endl;

					cout << "������ ������ �ұ�? : ";

					cin >> iMenu;

					if (cin.fail())
					{
						cin.clear();
						cin.ignore(1024, '\n');
						continue;
					}
					else if (iMenu == BATTLE_BACK)
						break;

					switch (iMenu)
					{
					case BATTLE_ATTACK:

						// ���⸦ �����ϰ� ���� ��� ������ Min, Max�� �����ش�.

						int iAttackMin = tPlayer.iAttackMin;
						int iAttackMax = tPlayer.iAttackMax;

						if (tPlayer.bEquip[EQ_WEAPON])
						{
							iAttackMin += tPlayer.tEquip[EQ_WEAPON].iMin;
							iAttackMax += tPlayer.tEquip[EQ_WEAPON].iMax;
						}

						int iAttack = rand() % (iAttackMax - iAttackMin + 1) + iAttackMin;
						int iArmor = rand() % (tMonster.iArmorMax - tMonster.iArmorMin + 1) + tMonster.iArmorMin;

						int iDamage = iAttack - iArmor;

						// ���׿����� : ���ǽ� ? true ��Ȳ : false ��Ȳ
						iDamage = iDamage < 1 ? 1 : iDamage;
						/*if (iDamage < 1)
							iDamage = 1;*/

						tMonster.iHP -= iDamage;

						cout << endl;
						cout << tPlayer.strPokemonName << " ��(��) " << tMonster.strName << " ���� " << iDamage << " ���ظ� �������ϴ�." << endl;

						// ���Ͱ� ������� ���
						if (tMonster.iHP <= 0)
						{
							cout << endl;
							cout << tMonster.strName << " ���Ͱ� ���������ϴ�." << endl << endl;
							tPlayer.iExp += tMonster.iExp;

							int iGold = rand() % (tMonster.iGoldMax - tMonster.iGoldMin + 1) + tMonster.iGoldMin;

							tPlayer.tInventory.iGold += iGold;

							cout << tPlayer.strName << " ��(��) " << tMonster.strName << " ���� " << iGold << " Gold�� ȹ���Ͽ����ϴ�." << endl;

							tMonster.iHP = tMonster.iHPMax;
							tMonster.iMP = tMonster.iMPMax;

							cout << endl;

							// ���� �� �ߴ��� üũ
							if (tPlayer.iExp >= iLevelUpExp[tPlayer.iLevel - 1])
							{
								// �÷��̾� ����ġ�� �������� �ʿ��� ����ġ��ŭ ����
								tPlayer.iExp -= iLevelUpExp[tPlayer.iLevel - 1];

								// ������ ���������ش�.
								++tPlayer.iLevel;
								
								cout << "Level Up !!!!!!!" << endl << endl;


								// �ɷ�ġ�� ��½�Ų��.
								int iPokeMonIndex = tPlayer.ePokemon - 1;
								int iHPUP = rand() % (tLvUpTable[iPokeMonIndex].iHPMax - tLvUpTable[iPokeMonIndex].iHPMin + 1) + tLvUpTable[iPokeMonIndex].iHPMin;
								int iMPUP = rand() % (tLvUpTable[iPokeMonIndex].iMPMax - tLvUpTable[iPokeMonIndex].iMPMin + 1) + tLvUpTable[iPokeMonIndex].iMPMin;

								tPlayer.iAttackMin += tLvUpTable[iPokeMonIndex].iAttackMin;
								tPlayer.iAttackMax += tLvUpTable[iPokeMonIndex].iAttackMax;
								tPlayer.iArmorMin += tLvUpTable[iPokeMonIndex].iArmorMin;
								tPlayer.iArmorMax += tLvUpTable[iPokeMonIndex].iArmorMax;

								tPlayer.iHPMax += iHPUP;
								tPlayer.iMPMax += iMPUP;

								// ü�°� ������ ȸ����Ų��.
								tPlayer.iHP = tPlayer.iHPMax;
								tPlayer.iMP = tPlayer.iMPMax;
							}

							system("pause");
							break;
						}

						// ����ִٸ� Player�� ����

						// ���Ͱ� �����ϴ� �κе� ������ ����Ͽ� ó���Ѵ�.

						int iArmorMin = tPlayer.iArmorMin;
						int iArmorMax = tPlayer.iArmorMax;

						if (tPlayer.bEquip[EQ_ARMOR])
						{
							iArmorMin += tPlayer.tEquip[EQ_ARMOR].iMin;
							iArmorMax += tPlayer.tEquip[EQ_ARMOR].iMax;
						}

						iAttack = rand() % (tMonster.iAttackMax - tMonster.iAttackMin + 1) + tMonster.iAttackMin;
						iArmor = rand() % (iArmorMax - iArmorMin + 1) + iArmorMin;

						iDamage = iAttack - iArmor;
						iDamage = iDamage < 1 ? 1 : iDamage;

						tPlayer.iHP -= iDamage;
						cout << tMonster.strName << " ��(��) " << tPlayer.strPokemonName << " ���� " << iDamage << " ���ظ� �������ϴ�." << endl;

						if (tPlayer.iHP <= 0)
						{
							cout << endl;
							cout << tPlayer.strPokemonName << " ��(��) ����Ͽ����ϴ�." << endl;

							// ����� �г�Ƽ 10%
							int iExp = tPlayer.iExp * 0.1f;
							int iGold = tPlayer.tInventory.iGold * 0.1f;

							tPlayer.iExp -= iExp;
							tPlayer.tInventory.iGold -= iGold;

							cout << tPlayer.strName << " ��(��) �� �̻� �ο� ���ϸ��� ����." << endl;
							cout << " �� ���� įį������." << endl << endl;

							cout << iExp << " Exp ����ġ�� �Ҿ����ϴ�." << endl;
							cout << tPlayer.strName << " ��(��) " << tMonster.strName << " ���� " << iGold << " Gold�� ������ϴ�." << endl << endl;

							tPlayer.iHP = tPlayer.iHPMax;
							tPlayer.iMP = tPlayer.iMPMax;
						}
						cout << endl;
						system("pause");

						break;
					}
				}
			}
			break;
		case MM_STORE:
			while (true)
			{
				LoadingDialog();
				cout << "_________________ �Уϣˣš��ͣϣΣӣԣţ� _________________" << endl << endl;

				cout << "****************** ���ʸ��� �߽��� �ް�� ******************" << endl << endl << endl << endl;

				cout << "1. �̽��̳� �������" << endl << endl;
				cout << "2. ���̳� ������" << endl << endl;
				cout << "3. �������� ���ư���" << endl << endl << endl << endl;

				cout << "������ �����ϼ��� : ";

				cin >> iMenu;

				if (cin.fail())
				{
					cin.clear();
					cin.ignore(1024, '\n');
					continue;
				}
				else if (iMenu == SM_BACK)
					break;

				switch (iMenu)
				{
				case SM_WEAPON:
					while (true)
					{
						system("cls");
						cout << "_________________ �Уϣˣš��ͣϣΣӣԣţ� _________________" << endl << endl;

						cout << "******************** �̽��̳� ���� ���� ********************" << endl << endl << endl << endl;

						for (int i = 0; i < STORE_WEAPON_MAX; i++)
						{
							cout << i + 1 << "�� ������" << endl;
							cout << "�̡��� : " << tStoreWeapon[i].strName << "\t\t������ : " << tStoreWeapon[i].strTypeName << endl;
							cout << "���ݷ� : " << tStoreWeapon[i].iMin << " - " << tStoreWeapon[i].iMax << endl;
							cout << "�ǸŰ� : " << tStoreWeapon[i].iPrice << "\t\t\t���Ű� : " << tStoreWeapon[i].iSell << endl;
							cout << "������ : " << tStoreWeapon[i].strDesc << endl << endl << endl;
						}

						cout << STORE_WEAPON_MAX + 1 << ". �ڷΰ���" << endl << endl << endl;

						cout << "�� �� �� : " << tPlayer.tInventory.iGold << " Gold" << endl;
						cout << "�������� : " << INVENTORY_MAX - tPlayer.tInventory.iItemCount << endl << endl << endl << endl;

						cout << "������ �������� �����ϼ��� : ";
						cin >> iMenu;

						if (cin.fail())
						{
							cin.clear();
							cin.ignore(1024, '\n');
							continue;
						}

						// �ڷΰ��� ���
						else if (iMenu == STORE_WEAPON_MAX + 1)
							break;

						else if (iMenu < 1 || iMenu > STORE_WEAPON_MAX + 1)
						{
							cout << "�̽��̰� �װ� �Ĵ°� �ƴ϶�� ��ġ �ݴϴ�." << endl << endl;
							system("pause");
							continue;
						}

						// ���� �Ǹ� ��� �迭�� �ε����� �����ش�.
						int iIndex = iMenu - 1;

						// �κ��丮�� �ڸ��� �ִ��� �˻��Ѵ�.
						if (tPlayer.tInventory.iItemCount == INVENTORY_MAX)
						{
							cout << "����ǰ ������ �����մϴ�." << endl << endl;
							system("pause");
							continue;
						}

						// ���� ������ ���
						else if (tPlayer.tInventory.iGold < tStoreWeapon[iIndex].iPrice)
						{
							cout << "�������� �����մϴ�." << endl << endl;
							system("pause");
							continue;
						}

						tPlayer.tInventory.tItem[tPlayer.tInventory.iItemCount] = tStoreWeapon[iIndex];
						++tPlayer.tInventory.iItemCount;


						// ��带 �����Ѵ�.
						tPlayer.tInventory.iGold -= tStoreWeapon[iIndex].iPrice;

						cout << tStoreWeapon[iIndex].strName << " �������� �����Ͽ����ϴ�." << endl << endl;
						system("pause");
					}
					break;
				case SM_ARMOR:
					while (true)
					{
						system("cls");
						cout << "_________________ �Уϣˣš��ͣϣΣӣԣţ� _________________" << endl << endl;

						cout << "******************** ���̳� �� ���� ********************" << endl << endl << endl << endl;

						for (int i = 0; i < STORE_ARMOR_MAX; i++)
						{
							cout << i + 1 << "�� ������" << endl;
							cout << "�̡��� : " << tStoreArmor[i].strName << "\t\t������ : " << tStoreArmor[i].strTypeName << endl;
							cout << "���� : " << tStoreArmor[i].iMin << " - " << tStoreArmor[i].iMax << endl;
							cout << "�ǸŰ� : " << tStoreArmor[i].iPrice << "\t\t\t���Ű� : " << tStoreArmor[i].iSell << endl;
							cout << "������ : " << tStoreArmor[i].strDesc << endl << endl << endl;
						}

						cout << STORE_ARMOR_MAX + 1 << ". �ڷΰ���" << endl << endl << endl;

						cout << "�� �� �� : " << tPlayer.tInventory.iGold << " Gold" << endl;
						cout << "�������� : " << INVENTORY_MAX - tPlayer.tInventory.iItemCount << endl << endl << endl << endl;

						cout << "������ �������� �����ϼ��� : ";
						cin >> iMenu;

						if (cin.fail())
						{
							cin.clear();
							cin.ignore(1024, '\n');
							continue;
						}

						// �ڷΰ��� ���
						else if (iMenu == STORE_ARMOR_MAX + 1)
							break;

						else if (iMenu < 1 || iMenu > STORE_ARMOR_MAX + 1)
						{
							cout << "���̰� �װ� �Ĵ°� �ƴ϶�� ��ġ �ݴϴ�." << endl << endl;
							system("pause");
							continue;
						}

						// ���� �Ǹ� ��� �迭�� �ε����� �����ش�.
						int iIndex = iMenu - 1;

						// �κ��丮�� �ڸ��� �ִ��� �˻��Ѵ�.
						if (tPlayer.tInventory.iItemCount == INVENTORY_MAX)
						{
							cout << "����ǰ ������ �����մϴ�." << endl << endl;
							system("pause");
							continue;
						}

						// ���� ������ ���
						else if (tPlayer.tInventory.iGold < tStoreArmor[iIndex].iPrice)
						{
							cout << "�������� �����մϴ�." << endl << endl;
							system("pause");
							continue;
						}

						tPlayer.tInventory.tItem[tPlayer.tInventory.iItemCount] = tStoreArmor[iIndex];
						++tPlayer.tInventory.iItemCount;


						// ��带 �����Ѵ�.
						tPlayer.tInventory.iGold -= tStoreArmor[iIndex].iPrice;

						cout << tStoreArmor[iIndex].strName << " �������� �����Ͽ����ϴ�." << endl << endl;
						system("pause");
					}
					break;
				}

			}
			break;
		case MM_INVENTORY:
			while (true)
			{
				system("cls");
				cout << "_________________ �Уϣˣš��ͣϣΣӣԣţ� _________________" << endl << endl;

				cout << "********************* �ɣ֣ţΣԣϣң� *********************" << endl << endl << endl << endl;

				cout << "======================= �У̣��٣ţ� =======================" << endl << endl;
				cout << "�̡��� : " << tPlayer.strName << "\t\t\t\t���ϸ� : " << tPlayer.strPokemonName << endl;
				cout << "������ : " << tPlayer.iLevel << "\t\t\t\t����ġ : " << tPlayer.iExp
					<< " / " << iLevelUpExp[tPlayer.iLevel - 1] << endl;

				// ���ݷ��� ������ �ɷ�ġ�� ������Ѽ� �ٲ��ش�.
				if (tPlayer.bEquip[EQ_WEAPON])
				{
					cout << "���ݷ� : " << tPlayer.iAttackMin << "(+"
						<< tPlayer.tEquip[EQ_WEAPON].iMin << ")"
						<< " - "
						<< tPlayer.iAttackMax << "(+"
						<< tPlayer.tEquip[EQ_WEAPON].iMax << ")" << "\t\t";
				}
				else
				{
					cout << "���ݷ� : " << tPlayer.iAttackMin << " - " << tPlayer.iAttackMax
						<< "\t\t\t";
				}

				// ������ ������ �ɷ�ġ�� ������Ѽ� �ٲ��ش�.
				if (tPlayer.bEquip[EQ_ARMOR])
				{
					cout << "���� : " << tPlayer.iArmorMin << "(+"
						<< tPlayer.tEquip[EQ_ARMOR].iMin << ")"
						<< " - "
						<< tPlayer.iArmorMax << "(+"
						<< tPlayer.tEquip[EQ_ARMOR].iMax << ")" << endl;
				}
				else
				{
					cout << "���� : " << tPlayer.iArmorMin << " - " << tPlayer.iArmorMax << endl;
				}

				cout << "ü���� : " << tPlayer.iHP << " / " << tPlayer.iHPMax
					<< "\t\t\t������ : " << tPlayer.iMP << " / " << tPlayer.iMPMax << endl;

				// ���� ������ ǥ��
				if (tPlayer.bEquip[EQ_WEAPON])
					cout << "���� ���� : " << tPlayer.tEquip[EQ_WEAPON].strName << "\t\t\t";

				else
					cout << "���� ���� : �� ��" << "\t\t\t";

				if (tPlayer.bEquip[EQ_ARMOR])
					cout << "���� �� : " << tPlayer.tEquip[EQ_ARMOR].strName << endl;

				else
					cout << "���� �� : �� ��" << endl;

				cout << "������ : " << tPlayer.tInventory.iGold << " Gold" << endl << endl << endl << endl;

				for (int i = 0; i < tPlayer.tInventory.iItemCount; i++)
				{
					cout << i + 1 << ". �̡��� : " << tPlayer.tInventory.tItem[i].strName << "\t\t������ : " << tPlayer.tInventory.tItem[i].strTypeName << endl;
					cout << "���� : " << tPlayer.tInventory.tItem[i].iMin << " - " << tPlayer.tInventory.tItem[i].iMax << endl;
					cout << "�ǸŰ� : " << tPlayer.tInventory.tItem[i].iPrice << "\t\t\t���Ű� : " << tPlayer.tInventory.tItem[i].iSell << endl;
					cout << "������ : " << tPlayer.tInventory.tItem[i].strDesc << endl << endl << endl;
				}

				cout << tPlayer.tInventory.iItemCount + 1 << ". �ڷΰ���" << endl << endl;

				cout << "������ �������� �����ϼ��� : ";
				cin >> iMenu;

				if (cin.fail())
				{
					cin.clear();
					cin.ignore(1024, '\n');
					continue;
				}
				else if (iMenu == tPlayer.tInventory.iItemCount + 1)
					break;

				else if (iMenu < 1 || iMenu > tPlayer.tInventory.iItemCount + 1)
				{
					cout << "�߸� �����Ͽ����ϴ�." << endl;
					system("pause");
					continue;
				}

				int idx = iMenu - 1;

				EQUIP eq;

				switch (tPlayer.tInventory.tItem[idx].eType)
				{
				case IT_WEAPON:
					eq = EQ_WEAPON;
					break;
				case IT_ARMOR:
					eq = EQ_ARMOR;
					break;
				}


				/*
					�������� �̹� �����Ǿ� ���� ���
					�����Ǿ� �ִ� �����۰� ������ �������� ��ü���־�� �Ѵ�.
					Swap Algorithm
				*/
				if (tPlayer.bEquip[eq])
				{
					_tagItem tSwap = tPlayer.tEquip[eq];
					tPlayer.tEquip[eq] = tPlayer.tInventory.tItem[idx];
					tPlayer.tInventory.tItem[idx] = tSwap;
				}

				/*
					���� �������� ���� ������ ��� �κ��丮 �������� ���� â���� �ű��
					�κ��丮�� 1ĭ ������� �ȴ�.
				*/
				else
				{
					tPlayer.tEquip[eq] = tPlayer.tInventory.tItem[idx];

					for (int i = idx; i < tPlayer.tInventory.iItemCount - 1; i++)
					{
						tPlayer.tInventory.tItem[i] = tPlayer.tInventory.tItem[i + 1];
					}
					--tPlayer.tInventory.iItemCount;

					// ������ �߱� ������ �ش� ������ true�� �ٲ��ش�.
					tPlayer.bEquip[eq] = true;
				}

				cout << endl << tPlayer.tEquip[eq].strName << " �������� �����߽��ϴ�." << endl << endl;

				system("pause");
			}
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