//-----------------------------------------------------------------------------
// 2022. 6. 6  월23						월23 수34				 (13주 2일)
// 
// Range/View
// 
// 6월 15일 (15주 1일 / 수요일) 기말 시험
// 6월 20일 (15주 2일 / 월요일) 끝
//-----------------------------------------------------------------------------
#include <iostream>
#include <ranges>
#include <algorithm>
#include <format>
#include "save.h"
#include "STRING.h"


// -------
int main()
// -------
{
	int a[]{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	// [문제] 1부터 시작하는 자연수에서 홀수만 골라 제곱하여 출력하라
	// 100개만 출력하라
	auto odd = [](int n) { return n % 2; };
	auto POW = [](int n) { return n * n; };

	for (int n : std::views::iota(1) 
			   | std::views::filter( odd ) 
			   | std::views::transform(POW) 
			   | std::views::take(1000)
		)
		std::cout << std::format("{:10}", n);
	std::cout << std::endl;
	
	//save("stl.cpp");
} 