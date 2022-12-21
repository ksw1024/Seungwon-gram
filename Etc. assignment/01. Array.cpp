#include <iostream>
#include <vector>

using namespace std;

int max_consecutive_ones(std::vector<int>& nums) 
{
	// TODO    
	int iResult = 0;
	int iCount = 1;

	for (int i = 0; i < nums.size() - 1; i++)
	{
		if (nums[i] == nums[i + 1] && nums[i] == 1)
		{
			iCount++;
		}
		else
		{
			iCount = 1;
		}

		iResult = iCount > iResult ? iCount : iResult;
	}

	if (iResult == 0)
		iResult = 0;

	return iResult;
}


int main()
{
	std::vector<int> Number;

	Number.push_back(1);
	Number.push_back(1);
	Number.push_back(0);
	Number.push_back(1);
	Number.push_back(1);
	Number.push_back(1);
	Number.push_back(0);
	Number.push_back(1);
	Number.push_back(1);
	Number.push_back(1);
	Number.push_back(0);
	Number.push_back(1);
	Number.push_back(1);
	Number.push_back(1);
	Number.push_back(1);

	std::cout << max_consecutive_ones(Number) << std::endl;



	return 0;
}
