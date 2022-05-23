//-----------------------------------------------------------------------------
// 2022. 5. 23  월23						월23 수34				 (12주 1일)
// 
// 알고리즘
// 
// 6월 15일 (15주 2일 / 수요일) 기말 시험
//-----------------------------------------------------------------------------
#include <iostream>
#include <algorithm>
#include <vector>
#include "save.h"
#include "STRING.h"

extern bool 관찰;

// -------
int main()
// -------
{
	// erase-remove idiom
	std::vector<int> v { 1,2,3,4,5,6 };

	// v에서 홀수를 삭제하라

	/*auto p = std::remove_if(v.begin(), v.end(), [](int n) { return n % 2; });
	v.erase(p, v.end());*/
	
	// C++20에서는 전역 erase 함수를 제공한다.
	std::erase_if(v, [](int n) { return n % 2; });

	for (int n : v)
		std::cout << n << std::endl;

	//save("stl.cpp");
} 