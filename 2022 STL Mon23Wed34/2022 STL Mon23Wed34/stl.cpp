//-----------------------------------------------------------------------------
// 2022. 5. 25  ��34						��23 ��34				 (12�� 2��)
// 
// 
// 6�� 15�� (15�� 2�� / ������) �⸻ ����
// 6�� 20�� (16�� 1�� / ������) ��
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
	
	// ���ø� �Լ� dist�� �ۼ��϶�
	std::cout << dist(v.begin(), v.end()) << std::endl;
	std::cout << dist(v.end(), v.begin()) << std::endl;

	std::cout << dist(1, 100) << std::endl;

	// �ݺ��ڸ� �Լ��� ����� �����ϴ� �����?

	//save("stl.cpp");
} 