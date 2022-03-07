//-----------------------------------------------------------------------------
// SAVE.CPP
//
// ������ ������ �˷��ָ� ���б� ���Ǹ� ������ ���Ͽ� �����δ�.
//    "2022 STL ��23��34 ����.txt"
// 
// 2022. 3. 7											Programmed by Taegrim
//-----------------------------------------------------------------------------

/*

#include <iostream>
#include "save.h"
#include <string_view>

void save(std::string_view file_name)
{
	// ���� ������ ����.
	std::ifstream in{ file_name.data() };

	// ������ ���ϵ� �����̱� ���� ����.
	// ����θ� Ȱ���� �����ϴ� ��ġ�� �����Ѵ�.
	// .�� ��������,		.. �� ��������
	std::ofstream out{ ".\\..\\..\\2022 STL ��23��34 ����.txt", std::ios::app };


	// ���� �ð��� ȭ�鿡 ����Ѵ�.
	auto time = floor<std::chrono::seconds>(std::chrono::system_clock::now());



	// ������ ������ ũ��� ���� �ð��� ���Ͽ� ����Ѵ�.
	out << "���� �̸� : " << file_name << ", ���� ũ�� : " << std::filesystem::file_size(file_name) << std::endl;
	// file_size �� c++17�� �ִ� ���
	out << "���� �ð� : " << std::chrono::zoned_time("Asia/Seoul", time) << std::endl;
	// zoned_time �� c++20 �� �ִ� ���
	out << std::endl;

	// ���͸� ����鼭 in ������ ������ �� �о�´�.  (STL �����̳�)
	std::vector<char> v{ std::istreambuf_iterator<char>{in}, {} };

	// ���ͷ� �о�� ������ ��� ���Ϸ� ��������. (STL �˰���)
	copy(v.begin(), v.end(), std::ostream_iterator<char>{out});

}

*/
