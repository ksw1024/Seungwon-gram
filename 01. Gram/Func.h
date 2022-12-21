#pragma once

#include <stdio.h>

namespace SEUNGWON
{
	void print_sw(const char* pText)
	{
		printf_s(pText);
	}
}

namespace _TEST
{
	void print_sw(const char* _test)
	{
		printf_s("Somebody Help me");
	}
}