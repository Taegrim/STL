//-----------------------------------------------------------------------------
// 2022. 6. 6  ��23						��23 ��34				 (13�� 2��)
// 
// Range/View
// 
// 6�� 15�� (15�� 1�� / ������) �⸻ ����
// 6�� 20�� (15�� 2�� / ������) ��
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

	// [����] 1���� �����ϴ� �ڿ������� Ȧ���� ��� �����Ͽ� ����϶�
	// 100���� ����϶�
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