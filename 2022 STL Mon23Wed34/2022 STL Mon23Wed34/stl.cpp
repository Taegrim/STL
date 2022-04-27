//-----------------------------------------------------------------------------
// 2022. 4. 27  수34						월23 수34				(8주 2일)
// 
// 컨테이너 - 다른 객체를 저장하는 객체
// 
// STL contiguous containers - T[], array<T,N>, vector<T>, string
// 
// Sequence Container
// 
// 반복자 -
//	C++ 프로그램에서 컨테이너와 상관없이 일관된 방식으로 작동하기 위한 포인터를 추상화한 형태
//
// Associative Container
// Unordered Associative Container
// 
// C++20 concept / (나머지3개) module, range, coroutine
// 
// 오늘 코딩해서 알아볼 내용
// - 반복자 종류 판정
// - STRING의 반복자를 코딩 - 반복자는 컨테이너가 제공하는 클래스가 되어야 함
// - sort(str.begin(), str.end()); STRING을 sort 되도록 하자
//-----------------------------------------------------------------------------
#include <iostream>
#include <algorithm>
#include <string>
#include <array>
#include "save.h"
#include "STRING.h"

extern bool 관찰;

// -------
int main()
// -------
{
	STRING str{ "The quick brown fox jumps over the lazy dog" };

	// [도전!] str을 sort로 정렬할 수 있게 한다.

	// std::sort(str.begin(), str.end());

	for (char c : str)
		std::cout << c;
	std::cout << std::endl;
	
	save("stl.cpp");
} 