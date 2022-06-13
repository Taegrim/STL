//-----------------------------------------------------------------------------
// 2022. 6. 13  ��23						��23 ��34				 (14�� 2��)
// 
// anagram ã��
// 
// 6�� 15�� (15�� 1�� / ������) �⸻ ����
// 6�� 20�� (15�� 2�� / ������) ��
//-----------------------------------------------------------------------------
#include <iostream>
#include <fstream>
#include <vector>
#include <list>
#include <algorithm>
#include <ranges>
#include "save.h"
#include "STRING.h"

struct WP : std::pair<std::string, std::string> {		// word pair 
	WP(std::string s) : std::pair<std::string, std::string> { s, s }{
		std::sort(first.begin(), first.end());
	}
};


// -------
int main()
// -------
{
	//save("stl.cpp");

	std::ifstream in{ "�ܾ��.txt" };	// �ܾ� �� 369882
	
	std::vector<WP> v{std::istream_iterator<std::string>{in}, {}};
	std::cout << "�ܾ� �� - " << v.size() << std::endl;
	
	std::ranges::sort(v, {}, &WP::first);

	for (const WP& words : v | std::views::drop(10'000) 
							 | std::views::take(200))
		std::cout << words.first << " --- " << words.second << std::endl;

	// [����] ��ü anagram ���� ����϶�

	// ���� WP�� ���� WP���� first�� ����?  - adjacent_find()
	// ���� ��ġ�� �߰��ߴٸ�
	// �޶����� ���� ���?


	// [����] ��ü anagram ���� ���� ���� ������������ ����϶�.

	auto b = v.cbegin();
	int cnt{};

	std::vector<std::list<std::string>> vls;

	while (true) {
		auto i = std::adjacent_find(b, v.cend(), [](const WP& a, const WP& b) {
			return a.first == b.first;
			});
		
		if (i == v.cend())
			break;

		auto j = std::find_if_not(i + 1, v.cend(), [i](const WP& a) {
			return a.first == i->first;
			});
		
		// [i, j) ������ ���� anagram �����̴�.
		std::list<std::string> ls;

		
		for (auto p = i; p != j; ++p)
			ls.push_back(p->second);
		vls.push_back(ls);

		b = j;
	}

	// vector<list<string>> �ܾ� ���̰� �� �� �켱
	std::sort(vls.begin(), vls.end(),
		[](const std::list<std::string>& a, const std::list<std::string>& b) {
			return a.begin()->size() > b.begin()->size();
		});
	
	std::cout << "���� �� �ܾ� - " << vls[0].begin()->size() << std::endl;

	//�տ��� ���� 10�� ���

	for (const std::list<std::string>& ls : vls | std::views::take(2000)) {
		for (const std::string& s : ls)
			std::cout << s << " ";
		std::cout << std::endl;
	}
	std::cout << std::endl;

} 