//-----------------------------------------------------------------------------
// 2022. 5. 25  수34						월23 수34				 (12주 2일)
// 
// 
// 6월 15일 (15주 2일 / 수요일) 기말 시험
// 6월 20일 (16주 1일 / 월요일) 끝
//-----------------------------------------------------------------------------
#include <iostream>
#include <vector>
#include "save.h"
#include "STRING.h"

template<typename Iter>
long long dist(Iter b, Iter e)
{
	return e - b;
}


// -------
int main()
// -------
{
	std::vector<int> v{ 1, 2, 3, 4, 5 };
	
	// 템플릿 함수 dist를 작성하라
	std::cout << dist(v.begin(), v.end()) << std::endl;
	std::cout << dist(v.end(), v.begin()) << std::endl;

	std::cout << dist(1, 100) << std::endl;

	// 반복자만 함수의 결과를 리턴하는 방법은?

	//save("stl.cpp");
} 