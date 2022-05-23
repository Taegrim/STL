//-----------------------------------------------------------------------------
// 2022. 5. 23  ��23						��23 ��34				 (12�� 1��)
// 
// �˰���
// 
// 6�� 15�� (15�� 2�� / ������) �⸻ ����
//-----------------------------------------------------------------------------
#include <iostream>
#include <algorithm>
#include <vector>
#include "save.h"
#include "STRING.h"

extern bool ����;

// -------
int main()
// -------
{
	// erase-remove idiom
	std::vector<int> v { 1,2,3,4,5,6 };

	// v���� Ȧ���� �����϶�

	/*auto p = std::remove_if(v.begin(), v.end(), [](int n) { return n % 2; });
	v.erase(p, v.end());*/
	
	// C++20������ ���� erase �Լ��� �����Ѵ�.
	std::erase_if(v, [](int n) { return n % 2; });

	for (int n : v)
		std::cout << n << std::endl;

	//save("stl.cpp");
} 