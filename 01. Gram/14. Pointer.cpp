#include <iostream>

using namespace std;

int main()
{
	/*
		Pointer :	����Ű��. �Ϲ� ������ �Ϲ����� ���� ���������� ������ ������ �޸� �ּҸ� �����Ѵ�.
					��� ���� Ÿ���� ������ Ÿ������ ������ �� �ִ�.
					int ������ �ּҴ� int Pointer ������ ������ �ؾ��Ѵ�.
					Pointer�� �޸� �ּҸ� ��Ƴ��� �����̱� ������ �޸� �ּҴ� x86(32��Ʈ) x64�� �����ϸ� 64��Ʈ�� ������ �Ǵµ�
					���� x86���� ������ ���� 4byte�� ���´�. x64�� ������ ���� 8����Ʈ�� ���´�.

					�����ʹ� �ڱ� ������ �ƹ��� �ϵ� �� �� ����.
					�ݵ�� �ٸ� ������ �޸� �ּҸ� ������ �־�� ���� �� �� �ִµ� ������ �ִ� �� �޸� �ּҿ� �����ؼ� ���� ������ �� �ִ�.
	
		���� : ����Ÿ��* ������;	�� ���·� �����Ѵ�.
	*/

	// �ּ� : ��⵵ ȭ���� ��ź ��õ�� ��ź����Ʈ����Ͼ���Ʈ 636�� 1602ȣ �������κ��� 4���� ���濡 ��ġ�� �湮���κ��� �������� 1M �ٹ濡 ��ġ�� å�� ��.
		
	int iNumber = 100;

	// ���� ����� *�� �ٿ��ְ� �Ǹ� �ش� Ÿ���� ������ ������ ����ȴ�.
	// ���� �տ� &�� �ٿ��ָ� �ش� ������ �޸� �ּҰ� �ȴ�.
	// pNum�� iNumber������ �޸� �ּҸ� ������ ���� �ȴ�.
	// �׷��Ƿ� pNum�� �̿��ؼ� iNumber�� ���� ������ �� �ִ�.

	int* pNum;

	cout << "ũ�� : " << sizeof(int*) << endl;		// 4	4
	cout << "ũ�� : " << sizeof(char*) << endl;		// 1	4
	cout << "ũ�� : " << sizeof(double*) << endl;	// 8	4
	cout << "ũ�� : " << sizeof(double) << endl;		// 8	8
	
	/*
		16��Ʈ : 65536
		32��Ʈ : 4,294,967,296
		64��Ʈ : 1800�� 
	*/

	pNum = &iNumber;

	cout << "iNumber Value : " << iNumber << endl;
	cout << "iNumber Address : " << &iNumber << endl;
	cout << "pNum Value : " << pNum << endl;
	cout << "pNum Address : " << &pNum << endl;


	/*
		������ : pNum�� �̿��ؼ� iNumber�� ���� ��� �����ϴ�.
		�������� �̿��ؼ� ���� �����ų� ������ �� �ִ�.
		�������� ������ ���� �տ� *�� ���̰� �Ǹ� �������� �ȴ�.
	*/
	
	*pNum = 5000;

	cout << "pNum Data (Dereference) : " << *pNum << endl;
	cout << "iNumber Value : " << iNumber << endl;

	pNum = &iNumber;	//  pNum�� iNumber�� ����Ų��.
	*pNum = iNumber;	//	iNumber = iNumber;
	*pNum = 10;			//	iNumber = 10;


	/*
		Ư���� ������ : ����������, char*, void*, func*

		�����Ϳ� �迭�� ���� : �迭���� �������̴�. �迭�� ��ü�� �ش� �迭�� �޸𸮿����� ������ �ּҸ� �ǹ��Ѵ�.
	*/

	int iArray[10] = { 1,2,3,4,5,6,7,8,9 };
	int* pArray = iArray;


	cout << "iArray Address : " << iArray << endl;
	cout << "Arr[0] Address : " << &iArray[0] << endl;
	cout << "Arra ptr Data : " << pArray << endl;

	cout << "iArray�� ���� : " << iArray[2] << endl;
	cout << "pArray�� ���� : " << pArray[2] << endl;

	/*
		������ ���� : + - ������ �����Ѵ�. �׷��� ������ ++, --���� ������ �����ϴ�.
		1�� �����ϰ� �Ǹ� �ܼ��� �޸� �ּҰ��� 1�����ϴ� ���� �ƴϴ�.

		int Pointer�� ��� int Type�� �޸� �ּҸ� ���ԵǴµ�, �޸� �ּҿ� 1�� �����ָ�
		1������ �ƴ� ����Ű�� �ش� �����Ͱ� ����Ű�� ���� Ÿ���� ũ�⸸ŭ �����ϰ� �ȴ�.
		int Pointer�̹Ƿ� 4����Ʈ ��ŭ �����Ѵ�.
	*/

	cout << pArray << endl;
	cout << pArray + 2 << endl;

	
	cout << *pArray << endl;
	cout << *(pArray + 2) << endl;
	cout << *pArray + 100 << endl;
	
	return 0;
}