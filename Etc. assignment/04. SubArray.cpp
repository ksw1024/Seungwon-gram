#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int max_subarray_sum(const std::vector<int>& array) 
{
	// TODO
	
	vector<int> vTotal;

	int iTotal = 0;

	for (int i = 0; i < array.size(); i++)
	{
		for (int j = i; j < array.size(); j++)
		{
			iTotal += array[j];
			vTotal.push_back(iTotal);
		}
		iTotal = 0;
	}

	sort(vTotal.begin(),vTotal.end());

	return vTotal.back();
}

int main() 
{
	std::vector<int> array = { -2, -3, 4, -1, -2, 1, 5, -3 };
	std::cout << max_subarray_sum(array) << '\n';

}
