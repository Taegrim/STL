//-----------------------------------------------------------------------------
// 2022. 5. 11  수34						월23 수34				 (10주 2일)
// 
// 컨테이너 - 다른 객체를 저장하는 객체
// Associative Container
//  map
// 
// Unordered Associative Container
// 
// C++20 span
//-----------------------------------------------------------------------------
#include <iostream>
#include <fstream>
#include <map>
#include <vector>
#include "save.h"
#include "STRING.h"

extern bool 관찰;

// -------
int main()
// -------
{
	//[문제] "stl.cpp"의 소문자 갯수를 세서 출력하라
	std::ifstream in{ "stl.cpp" };

	std::map<char, int> cim;

	char c;
	while (in >> c)
		if ( std::islower(c))
			cim[c]++;
	
	for (auto [c, num] : cim)
		std::cout << c << " - " << num << std::endl;

	//save("stl.cpp");
} 