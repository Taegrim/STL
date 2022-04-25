//-----------------------------------------------------------------------------
// 2022. 4. 25  월23						월23 수34				(8주 1일)
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
// 6/6(월) 현충일 수업할 예정 - (6/1(수) 에 선거날이어서 현충일에 수업)
//-----------------------------------------------------------------------------

#include <iostream>
#include "save.h"
#include "STRING.h"

extern bool 관찰;

template<typename T>
void show(T iter)
{
	// [문제] iter의 category를 출력하라.

	std::cout << typeid(iter).name() << std::endl;
}

// -------
int main()
// -------
{
	// 반복자 종류를 출력해 본다 - show() : 반복자 종류를 출력하는 함수
	
	// 템플릿 함수에는 뭐가 전달될지 모른다. - 알았으면 더 좋은 코딩하겠는데...

	show(1);
	show(1.0);
	show(std::istream_iterator<char>{std::cin});
	show(std::ostream_iterator<char>{std::cout});

	save("stl.cpp");
} 