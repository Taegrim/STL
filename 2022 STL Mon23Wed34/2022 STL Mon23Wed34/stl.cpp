//-----------------------------------------------------------------------------
// 2022. 5. 9  월23						월23 수34				 (10주 1일)
// 
// 컨테이너 - 다른 객체를 저장하는 객체
// Associative Container
//  set - 원소를 항상 정렬상태로 유지, 찾기, 제거, 추가( O(log n) )
//      - set의 주요 동작, 멤버 contains, 
//      - 내가 만든 type을 set에 넣으려면?
//      - left, right를 가리키는 메모리를 필요로 하기에 원소당 16바이트씩 추가로 잡음
// 
// Unordered Associative Container
// 
// C++20 span
//-----------------------------------------------------------------------------
#include <iostream>
#include <set>
#include <array>
#include <random>
#include "save.h"
#include "STRING.h"

extern bool 관찰;

std::default_random_engine dre;
std::uniform_int_distribution<int> uidAlpha('a', 'z');
std::uniform_int_distribution<int> uidNum(1, 10000);

class Dog {
	std::string name;	// 10글자 소문자
	int num;			// 1~10000
public:
	Dog(){
		for (int i = 0; i < 10; ++i)
			name += uidAlpha(dre);
		num = uidNum(dre);
	}

	void show() const {
		std::cout << name << " - " << num << std::endl;
	}

	
};

std::array<Dog, 1000> dogs;
// -------
int main()
// -------
{
	for (const Dog& dog : dogs)
		dog.show();

	// class Dog를 set<Dog>에 넣고 출력하자
	
	//std::set<Dog> s{dogs.begin(), dogs.end()};


	//save("stl.cpp");
} 