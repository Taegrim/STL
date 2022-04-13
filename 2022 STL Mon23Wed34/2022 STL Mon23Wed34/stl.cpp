//-----------------------------------------------------------------------------
// 2022. 4. 13  ��34						��23 ��34				(6�� 2��)
// 
// �����̳� - �ٸ� ��ü�� �����ϴ� ��ü
// Sequence Container - ������ ������ ���� ���� ����
//		- array	   �����ϰ� ũ�Ⱑ ������ Ÿ�ӿ� �����Ǿ�� ��
//		- vector   dynamic array (����ð��� ũ�Ⱑ �ٲ�� �迭)
//		- deque	   ���Ϳ� ����Ʈ�� �߰��ܰ�, Contiguous Container�� �ƴϴ�. 
//				   ���ͺ��� �� ���� ���Ҹ� ������ �� �ִ�.
//	
// Associative Container
// Unordered Associative Container
// 
//  �߰����� ���� - 4/20(��) (7�� 2��)
//-----------------------------------------------------------------------------

#include <iostream>
#include <deque>
#include <string>
#include <algorithm>
#include <fstream>
#include "save.h"
#include "STRING.h"

extern bool ����;

// [����] "stl.cpp" ������ �ܾ deque<string>�� �����϶�.
// ���� ������������ �����϶�
// ���ĵ� ����� ����϶�

// -------
int main()
// -------
{
	std::ifstream in("stl.cpp");

	std::deque<std::string> d;

	std::string s;
	while (in >> s)
		d.push_back(s);
	
	sort(d.begin(), d.end(), [](const std::string& a, const std::string& b) {
		return a.size() < b.size();
		});

	for (int i = 0; i < d.size(); ++i) 
		std::cout << d[i] << std::endl;
	
	// save("stl.cpp");
} 