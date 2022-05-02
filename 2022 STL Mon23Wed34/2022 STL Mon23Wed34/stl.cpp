//-----------------------------------------------------------------------------
// 2022. 5. 2  월23						월23 수34				 (9주 1일)
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
// 오늘 코딩해서 알아볼 내용
// STRING이 제공하는 반복자가 random_access_iterator가 되도록 코딩한다
//-----------------------------------------------------------------------------
#include <iostream>
#include <algorithm>
#include <vector>
#include <fstream>
#include <string>
#include "save.h"
#include "STRING.h"

extern bool 관찰;

//bool operator<(const STRING& lhs, const STRING& rhs)
//{
//	// 사전식 비교 알고리즘 함수
//	return std::lexicographical_compare(lhs.begin(), lhs.end(), rhs.begin(), rhs.end());
//
//	//return std::string(lhs.begin(), lhs.end()) < std::string(rhs.begin(), rhs.end());
//}


// -------
int main()
// -------
{
	STRING str;
	
	// [문제] 글자를 입력받아 단어의 몇 번째 글자인지 출력하라
	save("stl.cpp");

	std::cout << "단어를 입력하세요: ";
	std::cin >> str;


	while(true){
		std::cout << "찾을 글자는? ";
		char c;
		std::cin >> c;
		
		// 다음이 해결되도록 my_find 함수를 만들어라
		//auto p = my_find(str.begin(), str.end(), c);
		auto p = std::find(str.begin(), str.end(), c);
		if (p == str.end())
			std::cout << c << "는 단어에 없습니다" << std::endl;
		else
			std::cout << c << "는 " << std::distance(str.begin(), p) + 1 
			<< "번째 글자입니다." << std::endl;
	}

} 