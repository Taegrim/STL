//-----------------------------------------------------------------------------
// 2022. 4. 27  ��34						��23 ��34				(8�� 2��)
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
// C++20 concept / (������3��) module, range, coroutine
// 
// ���� �ڵ��ؼ� �˾ƺ� ����
// - �ݺ��� ���� ����
// - STRING�� �ݺ��ڸ� �ڵ� - �ݺ��ڴ� �����̳ʰ� �����ϴ� Ŭ������ �Ǿ�� ��
// - sort(str.begin(), str.end()); STRING�� sort �ǵ��� ����
//-----------------------------------------------------------------------------
#include <iostream>
#include <algorithm>
#include <string>
#include <array>
#include "save.h"
#include "STRING.h"

extern bool ����;

// -------
int main()
// -------
{
	STRING str{ "The quick brown fox jumps over the lazy dog" };

	// [����!] str�� sort�� ������ �� �ְ� �Ѵ�.

	// std::sort(str.begin(), str.end());

	for (char c : str)
		std::cout << c;
	std::cout << std::endl;
	
	save("stl.cpp");
} 