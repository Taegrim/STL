//-----------------------------------------------------------------------------
// 2022. 4. 4 ��23						��23 ��34				(5�� 1��)
// 
// �����̳� - �ٸ� ��ü�� �����ϴ� ��ü
// Sequence Container
//		- array	   �����ϰ� ũ�Ⱑ ������ Ÿ�ӿ� �����Ǿ�� ��
//		- vector   dynamic array
//-----------------------------------------------------------------------------

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include "save.h"
#include "STRING.h"

extern bool ����;

// -------
int main()
// -------
{
	// [����] Ű���忡�� �Է��ϴ� ��� �ܾ �޾ƶ�.
	// ������������ �����Ѵ�
	// ����� ����Ѵ�

	std::vector<std::string> v;
	std::string str;

	std::cout << "�ܾ �Է�" << std::endl;
	while (std::cin >> str)
		v.push_back(str);
	
	sort(v.begin(), v.end());

	for (const std::string& s : v)
		std::cout << s << std::endl;

	// �����ð� STRING �ڵ� ������ �� ���������� �ľ��ϰ� �˾ƺ���

	//save("stl.cpp");
} 