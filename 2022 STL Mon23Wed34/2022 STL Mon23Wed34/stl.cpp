//-----------------------------------------------------------------------------
// 2022. 3. 31 ��34						��23 ��34				(4�� 2��)
// 
// �ڿ��� �����ϴ� Ŭ���� - STRING (�����̳�, �ݺ���, �˰���)
//-----------------------------------------------------------------------------

#include <iostream>
#include <array>
#include "save.h"
#include "STRING.h"

extern bool ����;

// -------
int main()
// -------
{	
	//���� = true;

	std::array<STRING, 3> strs{ "2022�� 1�б� STL", "��23 ��34", "3�� 30�� ������ ��34���� 4�� 2�� ����" };

	for (int i = 0; i < strs.size(); ++i)
		std::cout << "strs[" << i << "] - " << strs[i] << std::endl;

	std::cout << std::endl << std::endl;
	std::cout << "strs�� STRING 3��ü�� ��� ���� ��ü�� ����� ����" << std::endl << std::endl;

	STRING all = strs[0] + strs[1] + strs[2];
	std::cout << "��� ���ϸ� - " << all << std::endl;

	//save("stl.cpp");
	
	// cppreference.com ���� Containers Library �κ� ����
} 