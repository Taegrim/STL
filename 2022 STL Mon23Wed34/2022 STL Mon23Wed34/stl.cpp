//-----------------------------------------------------------------------------
// 2022. 5. 30  월23						월23 수34				 (13주 1일)
// 
// C++20의 4가지 핵심 변화
// range / module / concepts / coroutine
// 
// type-traits
// range - view
// 
// 
// 6월 6일						수업해야 함
// 6월 15일 (15주 2일 / 수요일) 기말 시험
// 6월 20일 (16주 1일 / 월요일) 끝
//-----------------------------------------------------------------------------
#include <iostream>
#include <ranges>
#include <random>
#include "save.h"
#include "STRING.h"

std::default_random_engine dre;
std::uniform_int_distribution<> uid{ 1,100 };
std::uniform_int_distribution<> uidName{ 'a', 'z' };

using namespace std::literals;

struct Dog {
	std::string name;
	int n;

	Dog() {
		n = uid(dre);
		for (int i = 0; i < 5; ++i)
			name += uidName(dre);
	}
};

// -------
int main()
// -------
{
	std::vector<Dog> v(100);

	for (const Dog& dog : v)
		std::cout << dog.name << " - " << dog.n << std::endl;

	std::ranges::sort( v, {}, &Dog::n );

	std::ranges::sort( v, {}, &Dog::name );

	for (const Dog& dog : v)
		std::cout << dog.name << " - " << dog.n << std::endl;


	//save("stl.cpp");
} 