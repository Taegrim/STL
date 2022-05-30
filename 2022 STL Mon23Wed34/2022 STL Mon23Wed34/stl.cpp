//-----------------------------------------------------------------------------
// 2022. 5. 30  ��23						��23 ��34				 (13�� 1��)
// 
// C++20�� 4���� �ٽ� ��ȭ
// range / module / concepts / coroutine
// 
// type-traits
// range - view
// 
// 
// 6�� 6��						�����ؾ� ��
// 6�� 15�� (15�� 2�� / ������) �⸻ ����
// 6�� 20�� (16�� 1�� / ������) ��
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