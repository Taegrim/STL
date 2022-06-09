//-----------------------------------------------------------------------------
// 2022. 6. 8  수34						월23 수34				 (14주 1일)
// 
// anagram 찾기
// 
// 6월 15일 (15주 1일 / 수요일) 기말 시험
// 6월 20일 (15주 2일 / 월요일) 끝
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

	std::ifstream in{ "단어들.txt" };	// 단어 수 369882
	
	std::vector<WP> v{std::istream_iterator<std::string>{in}, {}};
	std::cout << "단어 수 - " << v.size() << std::endl;
	
	std::ranges::sort(v, {}, &WP::first);

	for (WP words : v | std::views::drop(1'000)
					  | std::views::take(50))
		std::cout << words.first << " --- " << words.second << std::endl;

	
} 