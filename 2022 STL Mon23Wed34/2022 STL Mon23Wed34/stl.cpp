//-----------------------------------------------------------------------------
// 2022. 4. 18  ��23						��23 ��34				(7�� 1��)
// 
// �����̳� - �ٸ� ��ü�� �����ϴ� ��ü
// 
// STL contiguous containers - T[], array<T,N>, vector<T>, string
// 
// Sequence Container - ������ ������ ���� ���� ����
//		- array	   �����ϰ� ũ�Ⱑ ������ Ÿ�ӿ� �����Ǿ�� ��
//		- vector   dynamic array (����ð��� ũ�Ⱑ �ٲ�� �迭)
//				   ������ ũ�Ⱑ ����� �� �ݺ��ڰ� ��ȿȭ �� �� �ִ�(iterator invalidation)
//		- deque	   ���Ϳ� ����Ʈ�� �߰��ܰ�, Contiguous Container�� �ƴϴ�. 
//				   ���ͺ��� �� ���� ���Ҹ� ������ �� �ִ�.
//				   �ݺ��ڰ� ��ȿȭ���� �ʴ´�.
//		- list 
// 
// Associative Container
// Unordered Associative Container
// 
//  �߰����� ���� - 4/20(��) (7�� 2��)
//-----------------------------------------------------------------------------

#include <iostream>
#include <deque>
#include <list>
#include <string>
#include <algorithm>
#include <fstream>
#include "save.h"
#include "STRING.h"

extern bool ����;

// [����] "Test.txt" ������ �ܾ deque<string>�� �����϶�.
// ������������ �����϶�.
// �� �ܾ ������������ �����϶�.
// ���ĵ� ����� ����϶�

// -------
int main()
// -------
{
	std::ifstream in("Test.txt");

	std::list<std::string> cont;
	std::string str;

	while (in >> str)
		cont.push_back(str);

	// [����] cont�� ascending order(��������)�� �����϶�.

	cont.sort();

	// [����] ���ڼ��� 5���� �͸� ȭ�鿡 ����϶�
	

	std::copy_if(cont.begin(), cont.end(), std::ostream_iterator<std::string>{std::cout, "\n"}, [](const std::string& a) {
		return a.size() == 5;
		});

	// ���ڼ� 5�� ī��Ʈ

	int num = std::count_if(cont.begin(), cont.end(), [](const std::string& a) {
		return a.size() == 5;
		});

	std::cout << "5���� ���ڼ��� " << num << std::endl;

	// save("stl.cpp");
} 