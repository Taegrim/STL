//-----------------------------------------------------------------------------
// 2022. 4. 11  ��23						��23 ��34				(6�� 1��)
// 
// �����̳� - �ٸ� ��ü�� �����ϴ� ��ü
// Sequence Container - ������ ������ ���� ���� ����
//		- array	   �����ϰ� ũ�Ⱑ ������ Ÿ�ӿ� �����Ǿ�� ��
//		- vector   dynamic array (����ð��� ũ�Ⱑ �ٲ�� �迭)
// 
//  STRING Ŭ���� �̵����� - �ڿ��� �����ϴ� Ŭ������ �̵������� �����ؾ� ��
//		���� ����ϴ� ���� �ƴ϶� �����̳�/�˰��򿡼� ���
// 
//  Ŭ������ ��� ������ private�� �ƴ϶�� ???
// 
//  �߰����� ���� - 4/20(��) (7�� 2��)
//-----------------------------------------------------------------------------

#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
#include "save.h"
#include "STRING.h"

extern bool ����;

// -------
int main()
// -------
{
	// [����] "�ҽ�.cpp" �� �о� ���ĺ��� ������ ������ ���� ����϶�.
	// ��ҹ��ڸ� �������� �ʴ´�.

	// [a] - 10
	// [b] - 2
	//  ...
	// [z] - 1

	int alpha_count[26] = {};

	std::ifstream in("stl.cpp");

	std::string s;

	if (in.is_open()) {
		in.seekg(0, std::ios::end);
		int size = in.tellg();

		s.resize(size);
		in.seekg(0, std::ios::beg);

		in.read(&s[0], size);
	}
	
	
	for (int i = 0; i < s.size(); ++i) {
		if ((s[i] >= 'a' && s[i] <= 'z')) {
			
		}
		else if (s[i] >= 'A' && s[i] <= 'Z') {

		}
	}


	 save("stl.cpp");
} 