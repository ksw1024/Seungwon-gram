#include <iostream>

#pragma warning(disable:4996)

#define BUFFER_SIZE		256


using namespace std;

char g_strTest[BUFFER_SIZE] = {};

int StringLength(char* pString)
{
	int iCount = 0;

	for (int i = 0; true; i++)
	{
		if (pString[i] == NULL)
			break;

		iCount++;
	}

	return iCount;
}

void InputFile()
{
	FILE* pFile = nullptr;

	fopen_s(&pFile, "input.txt", "rt");

	if (pFile != nullptr)
	{
		fscanf(pFile, "%s", g_strTest);

		fclose(pFile);
	}	
}

void TextOffset()
{
	for (int i = 0; i < StringLength(g_strTest); i++)
	{
		g_strTest[i] += 1;
	}

	cout << g_strTest << endl;
}

void OutputFile()
{
	FILE* pFile = nullptr;

	fopen_s(&pFile, "Output.txt", "wt");

	if (pFile != nullptr)
	{
		fwrite(g_strTest, sizeof(char), StringLength(g_strTest), pFile);

		fclose(pFile);
	}
}

int main()
{
	InputFile();
	TextOffset();
	OutputFile();

	return 0;
}