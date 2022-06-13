//-----------------------------------------------------------------------------
// 2022. 6. 13  월23						월23 수34				 (14주 2일)
// 
// anagram 찾기
// 
// 6월 15일 (15주 1일 / 수요일) 기말 시험
// 6월 20일 (15주 2일 / 월요일) 끝
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

	std::ifstream in{ "단어들.txt" };	// 단어 수 369882
	
	std::vector<WP> v{std::istream_iterator<std::string>{in}, {}};
	std::cout << "단어 수 - " << v.size() << std::endl;
	
	std::ranges::sort(v, {}, &WP::first);

	for (const WP& words : v | std::views::drop(10'000) 
							 | std::views::take(200))
		std::cout << words.first << " --- " << words.second << std::endl;

	// [문제] 전체 anagram 쌍을 출력하라

	// 현재 WP와 다음 WP에서 first가 같니?  - adjacent_find()
	// 같은 위치를 발견했다면
	// 달라지는 곳은 어디?


	// [문제] 전체 anagram 쌍을 개수 기준 내림차순으로 출력하라.

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
		
		// [i, j) 구간은 서로 anagram 관계이다.
		std::list<std::string> ls;

		
		for (auto p = i; p != j; ++p)
			ls.push_back(p->second);
		vls.push_back(ls);

		b = j;
	}

	// vector<list<string>> 단어 길이가 긴 거 우선
	std::sort(vls.begin(), vls.end(),
		[](const std::list<std::string>& a, const std::list<std::string>& b) {
			return a.begin()->size() > b.begin()->size();
		});
	
	std::cout << "가장 긴 단어 - " << vls[0].begin()->size() << std::endl;

	//앞에서 부터 10개 출력

	for (const std::list<std::string>& ls : vls | std::views::take(2000)) {
		for (const std::string& s : ls)
			std::cout << s << " ";
		std::cout << std::endl;
	}
	std::cout << std::endl;

} 