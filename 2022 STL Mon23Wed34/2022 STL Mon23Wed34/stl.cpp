//-----------------------------------------------------------------------------
// 2022. 6. 8  ��34						��23 ��34				 (14�� 1��)
// 
// anagram ã��
// 
// 6�� 15�� (15�� 1�� / ������) �⸻ ����
// 6�� 20�� (15�� 2�� / ������) ��
//-----------------------------------------------------------------------------
#include <iostream>
#include <fstream>
#include <vector>
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

	for (WP words : v | std::views::drop(1'000)
					  | std::views::take(50))
		std::cout << words.first << " --- " << words.second << std::endl;

	
} 