#include <iostream>
#include <Windows.h>

#define		NAME_SIZE			32
#define		INVENTORY_MAX		10
#define		ITEM_DESC_LENGTH	512

#define		STORE_WEAPON_MAX	3
#define		STORE_ARMOR_MAX		3

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
	cout << "_________________ ＰＯＫＥ　ＭＯＮＳＴＥＲ _________________" << endl << endl << endl << endl;
}

void LoadingDialog()
{
	for (int i = 0; i < 2; i++)
	{
		Sleep(20); LoadingTag();
		Sleep(20); LoadingTag(); cout << "　　　　　　　　Ｍ" << endl << endl << endl << endl;
		Sleep(20); LoadingTag(); cout << "　　　　　　　　ＭＡ" << endl << endl << endl << endl;
		Sleep(20); LoadingTag(); cout << "　　　　　　　　ＭＡＰ" << endl << endl << endl << endl;
		Sleep(20); LoadingTag(); cout << "　　　　　　　　ＭＡＰ　" << endl << endl << endl << endl;
		Sleep(20); LoadingTag(); cout << "　　　　　　　　ＭＡＰ　Ｌ" << endl << endl << endl << endl;
		Sleep(20); LoadingTag(); cout << "　　　　　　　　ＭＡＰ　ＬＯ" << endl << endl << endl << endl;
		Sleep(20); LoadingTag(); cout << "　　　　　　　　ＭＡＰ　ＬＯＡ" << endl << endl << endl << endl;
		Sleep(20); LoadingTag(); cout << "　　　　　　　　ＭＡＰ　ＬＯＡＤ" << endl << endl << endl << endl;
		Sleep(20); LoadingTag(); cout << "　　　　　　　　ＭＡＰ　ＬＯＡＤＩ" << endl << endl << endl << endl;
		Sleep(20); LoadingTag(); cout << "　　　　　　　　ＭＡＰ　ＬＯＡＤＩＮ" << endl << endl << endl << endl;
		Sleep(20); LoadingTag(); cout << "　　　　　　　　ＭＡＰ　ＬＯＡＤＩＮＧ" << endl << endl << endl << endl;
		Sleep(20); LoadingTag(); cout << "　　　　　　　　ＭＡＰ　ＬＯＡＤＩＮＧ．" << endl << endl << endl << endl;
		Sleep(20); LoadingTag(); cout << "　　　　　　　　ＭＡＰ　ＬＯＡＤＩＮＧ．．" << endl << endl << endl << endl;
		Sleep(20); LoadingTag(); cout << "　　　　　　　　ＭＡＰ　ＬＯＡＤＩＮＧ．．．" << endl << endl << endl << endl;
		Sleep(20); LoadingTag(); cout << "　　　　　　　　ＭＡＰ　ＬＯＡＤＩＮＧ．．．．　　　　　　　　" << endl << endl << endl << endl;
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

	Sleep(100); OpeningTag(); cout << "오박사 : 오" << endl << endl;
	Sleep(100); OpeningTag(); cout << "오박사 : 오 반" << endl << endl;
	Sleep(100); OpeningTag(); cout << "오박사 : 오 반갑" << endl << endl;
	Sleep(100); OpeningTag(); cout << "오박사 : 오 반갑네" << endl << endl;
	Sleep(100); OpeningTag(); cout << "오박사 : 오 반갑네." << endl << endl;
	Sleep(100); OpeningTag(); cout << "오박사 : 오 반갑네.." << endl << endl;
	Sleep(100); OpeningTag(); cout << "오박사 : 오 반갑네..." << endl << endl;
	Sleep(100); OpeningTag(); cout << "오박사 : 오 반갑네... 포" << endl << endl;
	Sleep(100); OpeningTag(); cout << "오박사 : 오 반갑네... 포켓" << endl << endl;
	Sleep(100); OpeningTag(); cout << "오박사 : 오 반갑네... 포켓몬" << endl << endl;
	Sleep(100); OpeningTag(); cout << "오박사 : 오 반갑네... 포켓몬 세" << endl << endl;
	Sleep(100); OpeningTag(); cout << "오박사 : 오 반갑네... 포켓몬 세계" << endl << endl;
	Sleep(100); OpeningTag(); cout << "오박사 : 오 반갑네... 포켓몬 세계에" << endl << endl;
	Sleep(100); OpeningTag(); cout << "오박사 : 오 반갑네... 포켓몬 세계에 온" << endl << endl;
	Sleep(100); OpeningTag(); cout << "오박사 : 오 반갑네... 포켓몬 세계에 온걸" << endl << endl;
	Sleep(100); OpeningTag(); cout << "오박사 : 오 반갑네... 포켓몬 세계에 온걸 환" << endl << endl;
	Sleep(100); OpeningTag(); cout << "오박사 : 오 반갑네... 포켓몬 세계에 온걸 환영" << endl << endl;
	Sleep(100); OpeningTag(); cout << "오박사 : 오 반갑네... 포켓몬 세계에 온걸 환영하" << endl << endl;
	Sleep(100); OpeningTag(); cout << "오박사 : 오 반갑네... 포켓몬 세계에 온걸 환영하네" << endl << endl;
	Sleep(100); OpeningTag(); cout << "오박사 : 오 반갑네... 포켓몬 세계에 온걸 환영하네." << endl << endl;
	Sleep(100); OpeningTag(); cout << "오박사 : 오 반갑네... 포켓몬 세계에 온걸 환영하네.." << endl << endl;
	Sleep(100); OpeningTag(); cout << "오박사 : 오 반갑네... 포켓몬 세계에 온걸 환영하네..." << endl << endl;

	Sleep(2000);
	Sleep(100); OpeningTag(); cout << "오박사 : 자" << endl << endl;
	Sleep(100); OpeningTag(); cout << "오박사 : 자네" << endl << endl;
	Sleep(100); OpeningTag(); cout << "오박사 : 자네의" << endl << endl;
	Sleep(100); OpeningTag(); cout << "오박사 : 자네의 이" << endl << endl;
	Sleep(100); OpeningTag(); cout << "오박사 : 자네의 이름" << endl << endl;
	Sleep(100); OpeningTag(); cout << "오박사 : 자네의 이름을" << endl << endl;
	Sleep(100); OpeningTag(); cout << "오박사 : 자네의 이름을 알" << endl << endl;
	Sleep(100); OpeningTag(); cout << "오박사 : 자네의 이름을 알려" << endl << endl;
	Sleep(100); OpeningTag(); cout << "오박사 : 자네의 이름을 알려주" << endl << endl;
	Sleep(100); OpeningTag(); cout << "오박사 : 자네의 이름을 알려주겠" << endl << endl;
	Sleep(100); OpeningTag(); cout << "오박사 : 자네의 이름을 알려주겠는" << endl << endl;
	Sleep(100); OpeningTag(); cout << "오박사 : 자네의 이름을 알려주겠는가?" << endl << endl;
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
	tPlayer.ePokemon = static_cast<POKEMON>(iPokemon);	// C++ Style

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
					cout << "레　벨 : " << tPlayer.iLevel << "\t\t\t\t경험치 : " << tPlayer.iExp << endl;
					cout << "공격력 : " << tPlayer.iAttackMin << " - " << tPlayer.iAttackMax
						<< "\t\t\t방어력 : " << tPlayer.iArmorMin << " - " << tPlayer.iArmorMax << endl;
					cout << "체　력 : " << tPlayer.iHP << " / " << tPlayer.iHPMax
						<< "\t\t\t마　력 : " << tPlayer.iMP << " / " << tPlayer.iMPMax << endl;

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
						
						int iAttack = rand() % (tPlayer.iAttackMax - tPlayer.iAttackMin + 1) + tPlayer.iAttackMin;
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
							system("pause");
							break;
						}

						// 살아있다면 Player를 공격
						iAttack = rand() % (tMonster.iAttackMax - tMonster.iAttackMin + 1) + tMonster.iAttackMin;
						iArmor = rand() % (tPlayer.iArmorMax - tPlayer.iArmorMin + 1) + tPlayer.iArmorMin;

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
						// 판매 목록을 보여준다.
					}
					break;
				case SM_ARMOR:
					while (true)
					{
						system("cls");
						cout << "_________________ ＰＯＫＥ　ＭＯＮＳＴＥＲ _________________" << endl << endl;

						cout << "******************** 웅이네 방어구 상점 ********************" << endl << endl << endl << endl;
						// 판매 목록을 보여준다.

					}
					break;
				}
				
			}
			break;
		case MM_INVENTORY:
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


/*
	숙제 : 각 아이템 정보들을 설정한다.	방식은 몬스터와 동일

	1.	무기 상점에서 판매할 아이템 목록을 만들어주고, 해당 목록을 출력해준다.
	2.	출력할 때 앞에 번호를 자동적으로 부여해주고 번호를 입력받아서 해당 번호를 누르면 해당 아이템을 구입하게 한다.
		(가장 마지막 번호에는 뒤로가기 기능을 구현)
		단, 아이템이 꽉찼거나 돈이 부족한 경우에는 구매하지 못하게 한다.

	3.	가방을 선택하면 가방 안의 구입한 아이템 목록을 보여준다.
*/