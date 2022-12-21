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
	cout << "_________________ ＰＯＫＥ　ＭＯＮＳＴＥＲ _________________" << endl << endl << endl << endl;
}

void LoadingDialog()
{
	for (int i = 0; i < 1; i++)
	{
		Sleep(1); LoadingTag();
		Sleep(1); LoadingTag(); cout << "　　　　　　　　Ｍ" << endl << endl << endl << endl;
		Sleep(1); LoadingTag(); cout << "　　　　　　　　ＭＡ" << endl << endl << endl << endl;
		Sleep(1); LoadingTag(); cout << "　　　　　　　　ＭＡＰ" << endl << endl << endl << endl;
		Sleep(1); LoadingTag(); cout << "　　　　　　　　ＭＡＰ　" << endl << endl << endl << endl;
		Sleep(1); LoadingTag(); cout << "　　　　　　　　ＭＡＰ　Ｌ" << endl << endl << endl << endl;
		Sleep(1); LoadingTag(); cout << "　　　　　　　　ＭＡＰ　ＬＯ" << endl << endl << endl << endl;
		Sleep(1); LoadingTag(); cout << "　　　　　　　　ＭＡＰ　ＬＯＡ" << endl << endl << endl << endl;
		Sleep(1); LoadingTag(); cout << "　　　　　　　　ＭＡＰ　ＬＯＡＤ" << endl << endl << endl << endl;
		Sleep(1); LoadingTag(); cout << "　　　　　　　　ＭＡＰ　ＬＯＡＤＩ" << endl << endl << endl << endl;
		Sleep(1); LoadingTag(); cout << "　　　　　　　　ＭＡＰ　ＬＯＡＤＩＮ" << endl << endl << endl << endl;
		Sleep(1); LoadingTag(); cout << "　　　　　　　　ＭＡＰ　ＬＯＡＤＩＮＧ" << endl << endl << endl << endl;
		Sleep(1); LoadingTag(); cout << "　　　　　　　　ＭＡＰ　ＬＯＡＤＩＮＧ．" << endl << endl << endl << endl;
		Sleep(1); LoadingTag(); cout << "　　　　　　　　ＭＡＰ　ＬＯＡＤＩＮＧ．．" << endl << endl << endl << endl;
		Sleep(1); LoadingTag(); cout << "　　　　　　　　ＭＡＰ　ＬＯＡＤＩＮＧ．．．" << endl << endl << endl << endl;
		Sleep(1); LoadingTag(); cout << "　　　　　　　　ＭＡＰ　ＬＯＡＤＩＮＧ．．．．　　　　　　　　" << endl << endl << endl << endl;
	}
	system("cls");
}

void OpeningTag()
{
	system("cls");
	cout << "_________________ ＰＯＫＥ　ＭＯＮＳＴＥＲ _________________" << endl << endl;
	cout << "************************* 오 프 닝 *************************" << endl << endl << endl << endl;
}

void OpeningDialog()
{
	OpeningTag();

	Sleep(SLEEP_TIME); OpeningTag(); cout << "오박사 : 오" << endl << endl;
	Sleep(SLEEP_TIME); OpeningTag(); cout << "오박사 : 오 반" << endl << endl;
	Sleep(SLEEP_TIME); OpeningTag(); cout << "오박사 : 오 반갑" << endl << endl;
	Sleep(SLEEP_TIME); OpeningTag(); cout << "오박사 : 오 반갑네" << endl << endl;
	Sleep(SLEEP_TIME); OpeningTag(); cout << "오박사 : 오 반갑네." << endl << endl;
	Sleep(SLEEP_TIME); OpeningTag(); cout << "오박사 : 오 반갑네.." << endl << endl;
	Sleep(SLEEP_TIME); OpeningTag(); cout << "오박사 : 오 반갑네..." << endl << endl;
	Sleep(SLEEP_TIME); OpeningTag(); cout << "오박사 : 오 반갑네... 포" << endl << endl;
	Sleep(SLEEP_TIME); OpeningTag(); cout << "오박사 : 오 반갑네... 포켓" << endl << endl;
	Sleep(SLEEP_TIME); OpeningTag(); cout << "오박사 : 오 반갑네... 포켓몬" << endl << endl;
	Sleep(SLEEP_TIME); OpeningTag(); cout << "오박사 : 오 반갑네... 포켓몬 세" << endl << endl;
	Sleep(SLEEP_TIME); OpeningTag(); cout << "오박사 : 오 반갑네... 포켓몬 세계" << endl << endl;
	Sleep(SLEEP_TIME); OpeningTag(); cout << "오박사 : 오 반갑네... 포켓몬 세계에" << endl << endl;
	Sleep(SLEEP_TIME); OpeningTag(); cout << "오박사 : 오 반갑네... 포켓몬 세계에 온" << endl << endl;
	Sleep(SLEEP_TIME); OpeningTag(); cout << "오박사 : 오 반갑네... 포켓몬 세계에 온걸" << endl << endl;
	Sleep(SLEEP_TIME); OpeningTag(); cout << "오박사 : 오 반갑네... 포켓몬 세계에 온걸 환" << endl << endl;
	Sleep(SLEEP_TIME); OpeningTag(); cout << "오박사 : 오 반갑네... 포켓몬 세계에 온걸 환영" << endl << endl;
	Sleep(SLEEP_TIME); OpeningTag(); cout << "오박사 : 오 반갑네... 포켓몬 세계에 온걸 환영하" << endl << endl;
	Sleep(SLEEP_TIME); OpeningTag(); cout << "오박사 : 오 반갑네... 포켓몬 세계에 온걸 환영하네" << endl << endl;
	Sleep(SLEEP_TIME); OpeningTag(); cout << "오박사 : 오 반갑네... 포켓몬 세계에 온걸 환영하네." << endl << endl;
	Sleep(SLEEP_TIME); OpeningTag(); cout << "오박사 : 오 반갑네... 포켓몬 세계에 온걸 환영하네.." << endl << endl;
	Sleep(SLEEP_TIME); OpeningTag(); cout << "오박사 : 오 반갑네... 포켓몬 세계에 온걸 환영하네..." << endl << endl;

	Sleep(200);
	Sleep(SLEEP_TIME); OpeningTag(); cout << "오박사 : 자" << endl << endl;
	Sleep(SLEEP_TIME); OpeningTag(); cout << "오박사 : 자네" << endl << endl;
	Sleep(SLEEP_TIME); OpeningTag(); cout << "오박사 : 자네의" << endl << endl;
	Sleep(SLEEP_TIME); OpeningTag(); cout << "오박사 : 자네의 이" << endl << endl;
	Sleep(SLEEP_TIME); OpeningTag(); cout << "오박사 : 자네의 이름" << endl << endl;
	Sleep(SLEEP_TIME); OpeningTag(); cout << "오박사 : 자네의 이름을" << endl << endl;
	Sleep(SLEEP_TIME); OpeningTag(); cout << "오박사 : 자네의 이름을 알" << endl << endl;
	Sleep(SLEEP_TIME); OpeningTag(); cout << "오박사 : 자네의 이름을 알려" << endl << endl;
	Sleep(SLEEP_TIME); OpeningTag(); cout << "오박사 : 자네의 이름을 알려주" << endl << endl;
	Sleep(SLEEP_TIME); OpeningTag(); cout << "오박사 : 자네의 이름을 알려주겠" << endl << endl;
	Sleep(SLEEP_TIME); OpeningTag(); cout << "오박사 : 자네의 이름을 알려주겠는" << endl << endl;
	Sleep(SLEEP_TIME); OpeningTag(); cout << "오박사 : 자네의 이름을 알려주겠는가?" << endl << endl;
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
		cout << "_________________ ＰＯＫＥ　ＭＯＮＳＴＥＲ _________________" << endl << endl;

		cout << "*********************** 오박사연구실 ***********************" << endl << endl << endl << endl;

		cout << "1. 피　카　츄" << endl << endl;
		cout << "2. 이　브　이" << endl << endl;
		cout << "3. 아르세우스" << endl << endl << endl << endl;

		cout << "포켓몬 세계로 같이 모험을 떠날 친구를 선택해주세요 : ";

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
		strcpy_s(tPlayer.strPokemonName, "피　카　츄");
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
		strcpy_s(tPlayer.strPokemonName, "이　브　이");
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
		strcpy_s(tPlayer.strPokemonName, "아르세우스 ");
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

	// 야생 포켓몬
	strcpy_s(tMonsterArr[MT_FIELD - 1].strName, "야생의 구구　");
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

	// 체육관 관장
	strcpy_s(tMonsterArr[MT_GYM - 1].strName, "웅이의 롱스톤");
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

	// 챔피언 포켓몬
	strcpy_s(tMonsterArr[MT_POKEMONLEAGUE - 1].strName, "난천의 밀로틱");
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


	// 무기, 방어구 상점에 쓰일 아이템 데이터를 셋팅한다.
	_tagItem	tStoreWeapon[STORE_WEAPON_MAX] = {};
	_tagItem	tStoreArmor[STORE_ARMOR_MAX] = {};

	// ============ 무기정보 설정 ============
	strcpy_s(tStoreWeapon[POKEMON_PIKACHU - 1].strName, "천둥의 돌");
	strcpy_s(tStoreWeapon[POKEMON_PIKACHU - 1].strTypeName, "무　　기");
	strcpy_s(tStoreWeapon[POKEMON_PIKACHU - 1].strDesc, "피카츄가 진화를 하여 강력해지기 위한 돌. 하지만 피카츄는 진화를 거부하여 다른 의미로 강력해졌다.(물리)");
	tStoreWeapon[POKEMON_PIKACHU - 1].eType = IT_WEAPON;
	tStoreWeapon[POKEMON_PIKACHU - 1].iMin = 10;
	tStoreWeapon[POKEMON_PIKACHU - 1].iMax = 15;
	tStoreWeapon[POKEMON_PIKACHU - 1].iPrice = 1000;
	tStoreWeapon[POKEMON_PIKACHU - 1].iSell = 500;

	strcpy_s(tStoreWeapon[POKEMON_EEVEE - 1].strName, "진화의 돌");
	strcpy_s(tStoreWeapon[POKEMON_EEVEE - 1].strTypeName, "무　　기");
	strcpy_s(tStoreWeapon[POKEMON_EEVEE - 1].strDesc, "이브이가 진화를 하여 강력해지기 위한 돌. 하지만 아직 진화를 결정하지 못해 다른 의미로 강력해졌다.(물리)");
	tStoreWeapon[POKEMON_EEVEE - 1].eType = IT_WEAPON;
	tStoreWeapon[POKEMON_EEVEE - 1].iMin = 20;
	tStoreWeapon[POKEMON_EEVEE - 1].iMax = 40;
	tStoreWeapon[POKEMON_EEVEE - 1].iPrice = 7000;
	tStoreWeapon[POKEMON_EEVEE - 1].iSell = 3500;

	strcpy_s(tStoreWeapon[POKEMON_ARCEUS - 1].strName, "학습 장치");
	strcpy_s(tStoreWeapon[POKEMON_ARCEUS - 1].strTypeName, "무　　기");
	strcpy_s(tStoreWeapon[POKEMON_ARCEUS - 1].strDesc, "경험치를 공유할 수 있는 아이템");
	tStoreWeapon[POKEMON_ARCEUS - 1].eType = IT_WEAPON;
	tStoreWeapon[POKEMON_ARCEUS - 1].iMin = 90;
	tStoreWeapon[POKEMON_ARCEUS - 1].iMax = 150;
	tStoreWeapon[POKEMON_ARCEUS - 1].iPrice = 30000;
	tStoreWeapon[POKEMON_ARCEUS - 1].iSell = 15000;

	// ============ 방어구정보 설정 ============
	strcpy_s(tStoreArmor[POKEMON_PIKACHU - 1].strName, "천둥의 갑옷");
	strcpy_s(tStoreArmor[POKEMON_PIKACHU - 1].strTypeName, "방 어 구");
	strcpy_s(tStoreArmor[POKEMON_PIKACHU - 1].strDesc, "피카츄가 맷집을 올리기 위한 갑옷");
	tStoreArmor[POKEMON_PIKACHU - 1].eType = IT_ARMOR;
	tStoreArmor[POKEMON_PIKACHU - 1].iMin = 10;
	tStoreArmor[POKEMON_PIKACHU - 1].iMax = 15;
	tStoreArmor[POKEMON_PIKACHU - 1].iPrice = 1000;
	tStoreArmor[POKEMON_PIKACHU - 1].iSell = 500;

	strcpy_s(tStoreArmor[POKEMON_EEVEE - 1].strName, "진화의 갑옷");
	strcpy_s(tStoreArmor[POKEMON_EEVEE - 1].strTypeName, "방 어 구");
	strcpy_s(tStoreArmor[POKEMON_EEVEE - 1].strDesc, "이브이가 맷집을 올리기 위한 갑옷");
	tStoreArmor[POKEMON_EEVEE - 1].eType = IT_ARMOR;
	tStoreArmor[POKEMON_EEVEE - 1].iMin = 20;
	tStoreArmor[POKEMON_EEVEE - 1].iMax = 40;
	tStoreArmor[POKEMON_EEVEE - 1].iPrice = 7000;
	tStoreArmor[POKEMON_EEVEE - 1].iSell = 3500;

	strcpy_s(tStoreArmor[POKEMON_ARCEUS - 1].strName, "학습 갑옷");
	strcpy_s(tStoreArmor[POKEMON_ARCEUS - 1].strTypeName, "방 어 구");
	strcpy_s(tStoreArmor[POKEMON_ARCEUS - 1].strDesc, "아르세우스가 맷집을 올리기 위한 갑옷");
	tStoreArmor[POKEMON_ARCEUS - 1].eType = IT_ARMOR;
	tStoreArmor[POKEMON_ARCEUS - 1].iMin = 90;
	tStoreArmor[POKEMON_ARCEUS - 1].iMax = 150;
	tStoreArmor[POKEMON_ARCEUS - 1].iPrice = 30000;
	tStoreArmor[POKEMON_ARCEUS - 1].iSell = 15000;

	while (true)
	{
		LoadingDialog();
		cout << "_________________ ＰＯＫＥ　ＭＯＮＳＴＥＲ _________________" << endl << endl;

		cout << "************************* 태초마을 *************************" << endl << endl << endl << endl;


		cout << "1. 마을 밖 모험을 떠나기" << endl << endl;
		cout << "2. 태초마을 야시장" << endl << endl;
		cout << "3. 인벤토리 열기" << endl << endl;
		cout << "4. 게임 종료" << endl << endl << endl << endl;

		cout << "메뉴를 선택하세요 : ";

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
				cout << "_________________ ＰＯＫＥ　ＭＯＮＳＴＥＲ _________________" << endl << endl;

				cout << "********************** 태초 마을 외곽 **********************" << endl << endl << endl << endl;

				cout << "1. 마을 밖 야생 포켓몬" << endl << endl;
				cout << "2. 체육관에 도전하기" << endl << endl;
				cout << "3. 포켓몬 리그에 도전하기" << endl << endl;
				cout << "4. 태초 마을로 돌아가기" << endl << endl << endl << endl;

				cout << "맵을 선택하세요 : ";

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
					cout << "_________________ ＰＯＫＥ　ＭＯＮＳＴＥＲ _________________" << endl << endl;

					switch (iMenu)
					{
					case MT_FIELD:
						cout << "******************* 야생 포켓몬 출현지역 *******************" << endl << endl << endl << endl;
						break;
					case MT_GYM:
						cout << "********************* 태초마을  체육관 *********************" << endl << endl << endl << endl;
						break;
					case MT_POKEMONLEAGUE:
						cout << "*********************** 포켓몬　리그 ***********************" << endl << endl << endl << endl;
						break;
					}

					cout << "======================= ＰＬＡＹＥＲ =======================" << endl << endl;
					cout << "이　름 : " << tPlayer.strName << "\t\t\t\t포켓몬 : " << tPlayer.strPokemonName << endl;
					cout << "레　벨 : " << tPlayer.iLevel << "\t\t\t\t경험치 : " << tPlayer.iExp 
						<< " / " << iLevelUpExp[tPlayer.iLevel - 1] << endl;

					// 공격력을 아이템 능력치를 적용시켜서 바꿔준다.
					if (tPlayer.bEquip[EQ_WEAPON])
					{
						cout << "공격력 : " << tPlayer.iAttackMin << "(+"
							<< tPlayer.tEquip[EQ_WEAPON].iMin << ")"
							<< " - "
							<< tPlayer.iAttackMax << "(+"
							<< tPlayer.tEquip[EQ_WEAPON].iMax << ")" << "\t\t";
					}
					else
					{
						cout << "공격력 : " << tPlayer.iAttackMin << " - " << tPlayer.iAttackMax
							<< "\t\t\t";
					}

					// 방어력을 아이템 능력치를 적용시켜서 바꿔준다.
					if (tPlayer.bEquip[EQ_ARMOR])
					{
						cout << "방어력 : " << tPlayer.iArmorMin << "(+"
							<< tPlayer.tEquip[EQ_ARMOR].iMin << ")"
							<< " - "
							<< tPlayer.iArmorMax << "(+"
							<< tPlayer.tEquip[EQ_ARMOR].iMax << ")" << endl;
					}
					else
					{
						cout << "방어력 : " << tPlayer.iArmorMin << " - " << tPlayer.iArmorMax << endl;
					}

					cout << "체　력 : " << tPlayer.iHP << " / " << tPlayer.iHPMax
						<< "\t\t\t마　력 : " << tPlayer.iMP << " / " << tPlayer.iMPMax << endl;

					// 장착 아이템 표기
					if (tPlayer.bEquip[EQ_WEAPON])
						cout << "장착 무기 : " << tPlayer.tEquip[EQ_WEAPON].strName << "\t\t\t";

					else
						cout << "장착 무기 : 없 음" << "\t\t\t";

					if (tPlayer.bEquip[EQ_ARMOR])
						cout << "장착 방어구 : " << tPlayer.tEquip[EQ_ARMOR].strName << endl;

					else
						cout << "장착 방어구 : 없 음" << endl;

					cout << "소지금 : " << tPlayer.tInventory.iGold << " Gold" << endl << endl << endl << endl;

					cout << "====================== ＭＯＮＳＴＥＲ ======================" << endl << endl;
					cout << "이　름 : " << tMonster.strName << "\t\t\t레　벨 : " << tMonster.iLevel << endl;
					cout << "공격력 : " << tMonster.iAttackMin << " - " << tMonster.iAttackMax
						<< "\t\t\t방어력 : " << tMonster.iArmorMin << " - " << tMonster.iArmorMax << endl;
					cout << "체　력 : " << tMonster.iHP << " / " << tMonster.iHPMax
						<< "\t\t\t마　력 : " << tMonster.iMP << " / " << tMonster.iMPMax << endl;
					cout << "획득 경험치 : " << tMonster.iExp << " Exp"
						<< "\t\t\t획득 골드 : " << tMonster.iGoldMin << " - " << tMonster.iGoldMax << " Gold" << endl << endl << endl << endl;


					cout << "1. 몸통박치기" << endl << endl;
					cout << "2. 도망가기" << endl << endl << endl << endl;

					cout << "다음은 무엇을 할까? : ";

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

						// 무기를 장착하고 있을 경우 무기의 Min, Max를 더해준다.

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

						// 삼항연산자 : 조건식 ? true 상황 : false 상황
						iDamage = iDamage < 1 ? 1 : iDamage;
						/*if (iDamage < 1)
							iDamage = 1;*/

						tMonster.iHP -= iDamage;

						cout << endl;
						cout << tPlayer.strPokemonName << " 이(가) " << tMonster.strName << " 에게 " << iDamage << " 피해를 입혔습니다." << endl;

						// 몬스터가 사망했을 경우
						if (tMonster.iHP <= 0)
						{
							cout << endl;
							cout << tMonster.strName << " 몬스터가 쓰러졌습니다." << endl << endl;
							tPlayer.iExp += tMonster.iExp;

							int iGold = rand() % (tMonster.iGoldMax - tMonster.iGoldMin + 1) + tMonster.iGoldMin;

							tPlayer.tInventory.iGold += iGold;

							cout << tPlayer.strName << " 이(가) " << tMonster.strName << " 에게 " << iGold << " Gold를 획득하였습니다." << endl;

							tMonster.iHP = tMonster.iHPMax;
							tMonster.iMP = tMonster.iMPMax;

							cout << endl;

							// 레벨 업 했는지 체크
							if (tPlayer.iExp >= iLevelUpExp[tPlayer.iLevel - 1])
							{
								// 플레이어 경험치를 레벨업에 필요한 경험치만큼 차감
								tPlayer.iExp -= iLevelUpExp[tPlayer.iLevel - 1];

								// 레벨을 증가시켜준다.
								++tPlayer.iLevel;
								
								cout << "Level Up !!!!!!!" << endl << endl;


								// 능력치를 상승시킨다.
								int iPokeMonIndex = tPlayer.ePokemon - 1;
								int iHPUP = rand() % (tLvUpTable[iPokeMonIndex].iHPMax - tLvUpTable[iPokeMonIndex].iHPMin + 1) + tLvUpTable[iPokeMonIndex].iHPMin;
								int iMPUP = rand() % (tLvUpTable[iPokeMonIndex].iMPMax - tLvUpTable[iPokeMonIndex].iMPMin + 1) + tLvUpTable[iPokeMonIndex].iMPMin;

								tPlayer.iAttackMin += tLvUpTable[iPokeMonIndex].iAttackMin;
								tPlayer.iAttackMax += tLvUpTable[iPokeMonIndex].iAttackMax;
								tPlayer.iArmorMin += tLvUpTable[iPokeMonIndex].iArmorMin;
								tPlayer.iArmorMax += tLvUpTable[iPokeMonIndex].iArmorMax;

								tPlayer.iHPMax += iHPUP;
								tPlayer.iMPMax += iMPUP;

								// 체력과 마나를 회복시킨다.
								tPlayer.iHP = tPlayer.iHPMax;
								tPlayer.iMP = tPlayer.iMPMax;
							}

							system("pause");
							break;
						}

						// 살아있다면 Player를 공격

						// 몬스터가 공격하는 부분도 방어력을 고려하여 처리한다.

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
						cout << tMonster.strName << " 이(가) " << tPlayer.strPokemonName << " 에게 " << iDamage << " 피해를 입혔습니다." << endl;

						if (tPlayer.iHP <= 0)
						{
							cout << endl;
							cout << tPlayer.strPokemonName << " 이(가) 사망하였습니다." << endl;

							// 사망시 패널티 10%
							int iExp = tPlayer.iExp * 0.1f;
							int iGold = tPlayer.tInventory.iGold * 0.1f;

							tPlayer.iExp -= iExp;
							tPlayer.tInventory.iGold -= iGold;

							cout << tPlayer.strName << " 은(는) 더 이상 싸울 포켓몬이 없다." << endl;
							cout << " 눈 앞이 캄캄해진다." << endl << endl;

							cout << iExp << " Exp 경험치를 잃었습니다." << endl;
							cout << tPlayer.strName << " 이(가) " << tMonster.strName << " 에게 " << iGold << " Gold를 뺏겼습니다." << endl << endl;

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
				cout << "_________________ ＰＯＫＥ　ＭＯＮＳＴＥＲ _________________" << endl << endl;

				cout << "****************** 태초마을 야시장 뒷골목 ******************" << endl << endl << endl << endl;

				cout << "1. 이슬이네 무기상점" << endl << endl;
				cout << "2. 웅이네 방어구상점" << endl << endl;
				cout << "3. 광장으로 돌아가기" << endl << endl << endl << endl;

				cout << "상점을 선택하세요 : ";

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
						cout << "_________________ ＰＯＫＥ　ＭＯＮＳＴＥＲ _________________" << endl << endl;

						cout << "******************** 이슬이네 무기 상점 ********************" << endl << endl << endl << endl;

						for (int i = 0; i < STORE_WEAPON_MAX; i++)
						{
							cout << i + 1 << "번 진열대" << endl;
							cout << "이　름 : " << tStoreWeapon[i].strName << "\t\t종　류 : " << tStoreWeapon[i].strTypeName << endl;
							cout << "공격력 : " << tStoreWeapon[i].iMin << " - " << tStoreWeapon[i].iMax << endl;
							cout << "판매가 : " << tStoreWeapon[i].iPrice << "\t\t\t구매가 : " << tStoreWeapon[i].iSell << endl;
							cout << "설　명 : " << tStoreWeapon[i].strDesc << endl << endl << endl;
						}

						cout << STORE_WEAPON_MAX + 1 << ". 뒤로가기" << endl << endl << endl;

						cout << "소 지 금 : " << tPlayer.tInventory.iGold << " Gold" << endl;
						cout << "여유공간 : " << INVENTORY_MAX - tPlayer.tInventory.iItemCount << endl << endl << endl << endl;

						cout << "구입할 아이템을 선택하세요 : ";
						cin >> iMenu;

						if (cin.fail())
						{
							cin.clear();
							cin.ignore(1024, '\n');
							continue;
						}

						// 뒤로가기 기능
						else if (iMenu == STORE_WEAPON_MAX + 1)
							break;

						else if (iMenu < 1 || iMenu > STORE_WEAPON_MAX + 1)
						{
							cout << "이슬이가 그건 파는게 아니라고 눈치 줍니다." << endl << endl;
							system("pause");
							continue;
						}

						// 상점 판매 목록 배열의 인덱스를 구해준다.
						int iIndex = iMenu - 1;

						// 인벤토리가 자리가 있는지 검사한다.
						if (tPlayer.tInventory.iItemCount == INVENTORY_MAX)
						{
							cout << "소지품 공간이 부족합니다." << endl << endl;
							system("pause");
							continue;
						}

						// 돈이 부족한 경우
						else if (tPlayer.tInventory.iGold < tStoreWeapon[iIndex].iPrice)
						{
							cout << "소지금이 부족합니다." << endl << endl;
							system("pause");
							continue;
						}

						tPlayer.tInventory.tItem[tPlayer.tInventory.iItemCount] = tStoreWeapon[iIndex];
						++tPlayer.tInventory.iItemCount;


						// 골드를 차감한다.
						tPlayer.tInventory.iGold -= tStoreWeapon[iIndex].iPrice;

						cout << tStoreWeapon[iIndex].strName << " 아이템을 구매하였습니다." << endl << endl;
						system("pause");
					}
					break;
				case SM_ARMOR:
					while (true)
					{
						system("cls");
						cout << "_________________ ＰＯＫＥ　ＭＯＮＳＴＥＲ _________________" << endl << endl;

						cout << "******************** 웅이네 방어구 상점 ********************" << endl << endl << endl << endl;

						for (int i = 0; i < STORE_ARMOR_MAX; i++)
						{
							cout << i + 1 << "번 진열대" << endl;
							cout << "이　름 : " << tStoreArmor[i].strName << "\t\t종　류 : " << tStoreArmor[i].strTypeName << endl;
							cout << "방어력 : " << tStoreArmor[i].iMin << " - " << tStoreArmor[i].iMax << endl;
							cout << "판매가 : " << tStoreArmor[i].iPrice << "\t\t\t구매가 : " << tStoreArmor[i].iSell << endl;
							cout << "설　명 : " << tStoreArmor[i].strDesc << endl << endl << endl;
						}

						cout << STORE_ARMOR_MAX + 1 << ". 뒤로가기" << endl << endl << endl;

						cout << "소 지 금 : " << tPlayer.tInventory.iGold << " Gold" << endl;
						cout << "여유공간 : " << INVENTORY_MAX - tPlayer.tInventory.iItemCount << endl << endl << endl << endl;

						cout << "구입할 아이템을 선택하세요 : ";
						cin >> iMenu;

						if (cin.fail())
						{
							cin.clear();
							cin.ignore(1024, '\n');
							continue;
						}

						// 뒤로가기 기능
						else if (iMenu == STORE_ARMOR_MAX + 1)
							break;

						else if (iMenu < 1 || iMenu > STORE_ARMOR_MAX + 1)
						{
							cout << "웅이가 그건 파는게 아니라고 눈치 줍니다." << endl << endl;
							system("pause");
							continue;
						}

						// 상점 판매 목록 배열의 인덱스를 구해준다.
						int iIndex = iMenu - 1;

						// 인벤토리가 자리가 있는지 검사한다.
						if (tPlayer.tInventory.iItemCount == INVENTORY_MAX)
						{
							cout << "소지품 공간이 부족합니다." << endl << endl;
							system("pause");
							continue;
						}

						// 돈이 부족한 경우
						else if (tPlayer.tInventory.iGold < tStoreArmor[iIndex].iPrice)
						{
							cout << "소지금이 부족합니다." << endl << endl;
							system("pause");
							continue;
						}

						tPlayer.tInventory.tItem[tPlayer.tInventory.iItemCount] = tStoreArmor[iIndex];
						++tPlayer.tInventory.iItemCount;


						// 골드를 차감한다.
						tPlayer.tInventory.iGold -= tStoreArmor[iIndex].iPrice;

						cout << tStoreArmor[iIndex].strName << " 아이템을 구매하였습니다." << endl << endl;
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
				cout << "_________________ ＰＯＫＥ　ＭＯＮＳＴＥＲ _________________" << endl << endl;

				cout << "********************* ＩＶＥＮＴＯＲＹ *********************" << endl << endl << endl << endl;

				cout << "======================= ＰＬＡＹＥＲ =======================" << endl << endl;
				cout << "이　름 : " << tPlayer.strName << "\t\t\t\t포켓몬 : " << tPlayer.strPokemonName << endl;
				cout << "레　벨 : " << tPlayer.iLevel << "\t\t\t\t경험치 : " << tPlayer.iExp
					<< " / " << iLevelUpExp[tPlayer.iLevel - 1] << endl;

				// 공격력을 아이템 능력치를 적용시켜서 바꿔준다.
				if (tPlayer.bEquip[EQ_WEAPON])
				{
					cout << "공격력 : " << tPlayer.iAttackMin << "(+"
						<< tPlayer.tEquip[EQ_WEAPON].iMin << ")"
						<< " - "
						<< tPlayer.iAttackMax << "(+"
						<< tPlayer.tEquip[EQ_WEAPON].iMax << ")" << "\t\t";
				}
				else
				{
					cout << "공격력 : " << tPlayer.iAttackMin << " - " << tPlayer.iAttackMax
						<< "\t\t\t";
				}

				// 방어력을 아이템 능력치를 적용시켜서 바꿔준다.
				if (tPlayer.bEquip[EQ_ARMOR])
				{
					cout << "방어력 : " << tPlayer.iArmorMin << "(+"
						<< tPlayer.tEquip[EQ_ARMOR].iMin << ")"
						<< " - "
						<< tPlayer.iArmorMax << "(+"
						<< tPlayer.tEquip[EQ_ARMOR].iMax << ")" << endl;
				}
				else
				{
					cout << "방어력 : " << tPlayer.iArmorMin << " - " << tPlayer.iArmorMax << endl;
				}

				cout << "체　력 : " << tPlayer.iHP << " / " << tPlayer.iHPMax
					<< "\t\t\t마　력 : " << tPlayer.iMP << " / " << tPlayer.iMPMax << endl;

				// 장착 아이템 표기
				if (tPlayer.bEquip[EQ_WEAPON])
					cout << "장착 무기 : " << tPlayer.tEquip[EQ_WEAPON].strName << "\t\t\t";

				else
					cout << "장착 무기 : 없 음" << "\t\t\t";

				if (tPlayer.bEquip[EQ_ARMOR])
					cout << "장착 방어구 : " << tPlayer.tEquip[EQ_ARMOR].strName << endl;

				else
					cout << "장착 방어구 : 없 음" << endl;

				cout << "소지금 : " << tPlayer.tInventory.iGold << " Gold" << endl << endl << endl << endl;

				for (int i = 0; i < tPlayer.tInventory.iItemCount; i++)
				{
					cout << i + 1 << ". 이　름 : " << tPlayer.tInventory.tItem[i].strName << "\t\t종　류 : " << tPlayer.tInventory.tItem[i].strTypeName << endl;
					cout << "방어력 : " << tPlayer.tInventory.tItem[i].iMin << " - " << tPlayer.tInventory.tItem[i].iMax << endl;
					cout << "판매가 : " << tPlayer.tInventory.tItem[i].iPrice << "\t\t\t구매가 : " << tPlayer.tInventory.tItem[i].iSell << endl;
					cout << "설　명 : " << tPlayer.tInventory.tItem[i].strDesc << endl << endl << endl;
				}

				cout << tPlayer.tInventory.iItemCount + 1 << ". 뒤로가기" << endl << endl;

				cout << "장착할 아이템을 선택하세요 : ";
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
					cout << "잘못 선택하였습니다." << endl;
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
					아이템이 이미 장착되어 있을 경우
					장착되어 있는 아이템과 장착할 아이템을 교체해주어야 한다.
					Swap Algorithm
				*/
				if (tPlayer.bEquip[eq])
				{
					_tagItem tSwap = tPlayer.tEquip[eq];
					tPlayer.tEquip[eq] = tPlayer.tInventory.tItem[idx];
					tPlayer.tInventory.tItem[idx] = tSwap;
				}

				/*
					만약 장착하지 않은 슬롯일 경우 인벤토리 아이템을 장착 창으로 옮기고
					인벤토리는 1칸 비워지게 된다.
				*/
				else
				{
					tPlayer.tEquip[eq] = tPlayer.tInventory.tItem[idx];

					for (int i = idx; i < tPlayer.tInventory.iItemCount - 1; i++)
					{
						tPlayer.tInventory.tItem[i] = tPlayer.tInventory.tItem[i + 1];
					}
					--tPlayer.tInventory.iItemCount;

					// 장착을 했기 때문에 해당 슬롯을 true로 바꿔준다.
					tPlayer.bEquip[eq] = true;
				}

				cout << endl << tPlayer.tEquip[eq].strName << " 아이템을 장착했습니다." << endl << endl;

				system("pause");
			}
			break;
		case MM_EXIT:
			break;
		default:
			cout << endl << "잘못 선택하였습니다." << endl << endl;
			system("pause");
			break;
		}
	}

	return 0;
}