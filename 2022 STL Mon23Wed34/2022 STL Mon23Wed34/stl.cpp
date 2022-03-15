//-----------------------------------------------------------------------------
// 2022. 3. 14 ��23						��23 ��34				(2�� 1��)
// 
// ���� ���� �ڷḦ �ٷ�� ����
// 1. int -> class
//    int 1000���� ���Ͽ� �����ϱ�
// 
// ���� - ���� ����� �˾ƺ���
//-----------------------------------------------------------------------------

#include <fstream>
#include <format>

#include <iostream>
#include <random>
#include "save.h"

std::random_device rd;
std::default_random_engine dre(rd());
std::uniform_int_distribution<int> uid;

// [����] ������ ������ �̿��Ͽ� ������ int�� 1000����
// ���� "int 1000��.txt"�� �����϶�.

// -------
int main()
// -------
{
	// c++�� �⺻������ ANSI ������� �ؽ�Ʈ ������ ����
	// ���� �ѱ��� �ִٸ� UFT-8 ������� �д´ٰ� ����ؾ���
	//std::locale::global(std::locale("ko_KR.UTF-8"));

	std::ofstream out("test.txt");

	if (out.is_open()) {
		for (int i = 0; i < 100; ++i) {
			for (int j = 0; j < 10; ++j)
				out << std::format("{:14}", uid(dre));
			out << std::endl;
		}
	}

	std::ifstream in("test.txt");
	

	// ã�ƺ� ���

	// 1. �ѹ��� �б�

	/*std::string s;

	if (in.is_open()) {
		in.seekg(0, std::ios::end);
		int size = in.tellg();

		s.resize(size);
		in.seekg(0, std::ios::beg);

		in.read(&s[0], size);
		std::cout << s << std::endl;

	}
	else {
		std::cout << "������ ã�� �� �����ϴ�! " << std::endl;
	}*/


	// 2. ���پ� �о����

	/*if (!in.is_open()) {
		std::cout << "������ ã�� �� �����ϴ�! " << std::endl;
		return 0;
	}
	std::string s2;
	while (in) {
		getline(in, s2);
		std::cout << s2 << std::endl;
	}*/



	
	// ���͸� ����鼭 in ������ ������ �� �о�´�.  (STL �����̳�)
	std::vector<char> v{ std::istreambuf_iterator<char>{in}, {} };

	// ���ͷ� �о�� ������ ����Ѵ�
	for (auto d : v)
		std::cout << d;

	//save("stl.cpp");
}
 