//-----------------------------------------------------------------------------
// 2022. 4. 25  ��23						��23 ��34				(8�� 1��)
// 
// �����̳� - �ٸ� ��ü�� �����ϴ� ��ü
// 
// STL contiguous containers - T[], array<T,N>, vector<T>, string
// 
// Sequence Container
// 
// �ݺ��� -
//	C++ ���α׷����� �����̳ʿ� ������� �ϰ��� ������� �۵��ϱ� ���� �����͸� �߻�ȭ�� ����
//
// Associative Container
// Unordered Associative Container
// 
// 6/6(��) ������ ������ ���� - (6/1(��) �� ���ų��̾ �����Ͽ� ����)
//-----------------------------------------------------------------------------

#include <iostream>
#include "save.h"
#include "STRING.h"

extern bool ����;

template<typename T>
void show(T iter)
{
	// [����] iter�� category�� ����϶�.

	std::cout << typeid(iter).name() << std::endl;
}

// -------
int main()
// -------
{
	// �ݺ��� ������ ����� ���� - show() : �ݺ��� ������ ����ϴ� �Լ�
	
	// ���ø� �Լ����� ���� ���޵��� �𸥴�. - �˾����� �� ���� �ڵ��ϰڴµ�...

	show(1);
	show(1.0);
	show(std::istream_iterator<char>{std::cin});
	show(std::ostream_iterator<char>{std::cout});

	save("stl.cpp");
} 