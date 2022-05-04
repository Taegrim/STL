//-----------------------------------------------------------------------------
// 2022. 5. 4  수34						월23 수34				 (9주 2일)
// 
// 컨테이너 - 다른 객체를 저장하는 객체
// Associative Container
// Unordered Associative Container
// 
// C++20 span
//-----------------------------------------------------------------------------
#include <iostream>
#include <vector>
#include <span>
#include "save.h"
#include "STRING.h"

extern bool 관찰;

// 메모리가 contiguous인 자료구조를 일관된 방식으로 코딩하기 위한 span(view)
void print(std::span<int> a);

void print(const std::span<int> a)
{
	std::cout << "스팬 - 전체 메모리 : " << a.size_bytes() << std::endl;
	for (int n : a)
		std::cout << n << std::endl;
}


// -------
int main()
// -------
{
	std::vector<int> a{1, 2, 3, 4, 5};

	// [문제] print는 a를 인자로 받아 값을 전부 출력한다.
	// p를 선언하고 정의하라
	print(a);

	int b[]{ 1,2,3,4,5,6,7,8,9,10 };
	print(b);


	//save("stl.cpp");
} 