//-----------------------------------------------------------------------------
// 2022. 5. 4  ��34						��23 ��34				 (9�� 2��)
// 
// �����̳� - �ٸ� ��ü�� �����ϴ� ��ü
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

extern bool ����;

// �޸𸮰� contiguous�� �ڷᱸ���� �ϰ��� ������� �ڵ��ϱ� ���� span(view)
void print(std::span<int> a);

void print(const std::span<int> a)
{
	std::cout << "���� - ��ü �޸� : " << a.size_bytes() << std::endl;
	for (int n : a)
		std::cout << n << std::endl;
}


// -------
int main()
// -------
{
	std::vector<int> a{1, 2, 3, 4, 5};

	// [����] print�� a�� ���ڷ� �޾� ���� ���� ����Ѵ�.
	// p�� �����ϰ� �����϶�
	print(a);

	int b[]{ 1,2,3,4,5,6,7,8,9,10 };
	print(b);


	//save("stl.cpp");
} 