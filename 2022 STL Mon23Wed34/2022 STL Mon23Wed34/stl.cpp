//-----------------------------------------------------------------------------
// 2022. 5. 11  ��34						��23 ��34				 (10�� 2��)
// 
// �����̳� - �ٸ� ��ü�� �����ϴ� ��ü
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

extern bool ����;

// -------
int main()
// -------
{
	//[����] "stl.cpp"�� �ҹ��� ������ ���� ����϶�
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