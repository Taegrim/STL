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

	int alphabet_count[26] = {};

	std::ifstream in("stl.cpp");

	char c;
	while (in >> c) {
		if (islower(c)) 
			alphabet_count[c - 'a'] += 1;

		 else if (isupper(c)) 
			alphabet_count[c - 'A'] += 1;
			
	}

	for (int i{}; i < sizeof(alphabet_count) / sizeof(alphabet_count[0]); ++i) {
		std::cout << (char)('a' + i) << " : " << alphabet_count[i] << std::endl;
	}


	 save("stl.cpp");
} 