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
	���� = true;

	//STRING strs[3];
	//strs[0].operator=(STRING{ "123" });

	STRING s{ "12345" };
	STRING s2{ "1234567890" };

	s = s2;

	std::cout << s << std::endl;

	//save("stl.cpp");
	
	// cppreference.com ���� Containers Library �κ� ����
} 