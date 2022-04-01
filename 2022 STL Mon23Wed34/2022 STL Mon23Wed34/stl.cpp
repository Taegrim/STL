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
	//관찰 = true;

	std::array<STRING, 3> strs{ "2022년 1학기 STL", "월23 수34", "3월 30일 수요일 수34교시 4주 2일 강의" };

	for (int i = 0; i < strs.size(); ++i)
		std::cout << "strs[" << i << "] - " << strs[i] << std::endl;

	std::cout << std::endl << std::endl;
	std::cout << "strs의 STRING 3객체를 모두 더한 객체를 만들어 본다" << std::endl << std::endl;

	STRING all = strs[0] + strs[1] + strs[2];
	std::cout << "모두 더하면 - " << all << std::endl;

	//save("stl.cpp");
	
	// cppreference.com 에서 Containers Library 부분 볼것
} 