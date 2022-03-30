//-----------------------------------------------------------------------------
// 2022. 3. 31 수34						월23 수34				(4주 2일)
// 
// 자원을 관리하는 클래스 - STRING (컨테이너, 반복자, 알고리즘)
//-----------------------------------------------------------------------------

#include <iostream>
#include <array>
#include "save.h"
#include "STRING.h"

extern bool 관찰;

// -------
int main()
// -------
{	
	관찰 = true;

	//STRING strs[3];
	//strs[0].operator=(STRING{ "123" });

	STRING s{ "12345" };
	STRING s2{ "1234567890" };

	s = s2;

	std::cout << s << std::endl;

	//save("stl.cpp");
	
	// cppreference.com 에서 Containers Library 부분 볼것
} 