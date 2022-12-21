#include <iostream>
#include <vector>

using namespace std;

std::vector<bool> bVec;

void Print(const std::vector<int>& iVec, const std::vector<bool>& bVec)
{
	for (int i = 0; i < iVec.size(); i++)
	{
		if (bVec[i] == true)
		{
			cout << iVec[i] << " ";
		}
	}
	cout << endl;

}

void DFS(int Idx, int Cnt, int r, const std::vector<int>& iVec, std::vector<bool>& bVec)
{
	if (Cnt == r)
	{
		Print(iVec, bVec);
		return;
	}

	for (int i = Idx; i < iVec.size(); i++)
	{
		if (bVec[i] == true) 
			continue;

		bVec[i] = true;

		DFS(i, Cnt + 1, r, iVec, bVec);
		bVec[i] = false;
	}
}

void InitBooleanVecter(const std::vector<int>& vec)
{
	for (int i = 0; i < vec.size(); i++)
	{
		bVec.push_back(false);
	}
}

void generate_r_combinations(const std::vector<int>& vec, int r)
{
	InitBooleanVecter(vec);

	DFS(0, 0, r, vec, bVec);
}

// Usage
int main()
{
	std::vector<int> vec = { 1, 2, 3, 4 };
	int r = 2;
	
	generate_r_combinations(vec, r);
}

