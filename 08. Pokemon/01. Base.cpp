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
	
	Sleep(3000);
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
		system("cls");
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
	strcpy_s(tMonsterArr[MT_FIELD - 1].strName, "웅이의 롱스톤");
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

	// 챔피언 포켓몬
	strcpy_s(tMonsterArr[MT_FIELD - 1].strName, "난천의 밀로틱");
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
				system("cls");
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
			cout << endl << "잘못 선택하였습니다." << endl << endl;
			system("pause");
			break;
		}
	}

	return 0;
}