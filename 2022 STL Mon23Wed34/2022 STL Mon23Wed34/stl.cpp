//-----------------------------------------------------------------------------
// 2022. 4. 4 월23						월23 수34				(5주 1일)
// 
// 컨테이너 - 다른 객체를 저장하는 객체
// Sequence Container
//		- array	   유일하게 크기가 컴파일 타임에 결정되어야 함
//		- vector   dynamic array
//-----------------------------------------------------------------------------

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include "save.h"
#include "STRING.h"

extern bool 관찰;

// -------
int main()
// -------
{
	// [문제] 키보드에서 입력하는 모든 단어를 받아라.
	// 오름차순으로 정렬한다
	// 결과를 출력한다

	std::vector<std::string> v;
	std::string str;

	std::cout << "단어를 입력" << std::endl;
	while (std::cin >> str)
		v.push_back(str);
	
	sort(v.begin(), v.end());

	for (const std::string& s : v)
		std::cout << s << std::endl;

	// 저번시간 STRING 코드 문제점 왜 문제였는지 파악하고 알아보기

	//save("stl.cpp");
} 