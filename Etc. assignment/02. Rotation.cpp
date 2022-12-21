#include <iostream>

using namespace std;

int leftRotate(int n, unsigned int d) 
{
	// TODO
	
	for (int i = 0; i < d; i++)
	{
		bool LeftBit = (n & 128);
		n <<= 1;
		
		if (LeftBit)		
			n |= 1;
		
		n &= 0x000000ff;	// 상위 24비트 날림
	}

	return n;
}


int rightRotate(int n, unsigned int d) 
{
	// TODO
	for (int i = 0; i < d; i++)
	{
		bool RightBit = (n & 1);
		n >>= 1;

		if (RightBit)
			n |= 128;

		n &= 0x000000ff;	// 상위 24비트 날림
	}

	return n;
}


int main()
{
	int iValue = 2;

	cout << leftRotate(iValue, 1);
	cout << rightRotate(iValue, 2);

	return 0;
}