//-----------------------------------------------------------------------------
// 2022. 3. 23 수34						월23 수34				(3주 2일)
// 
// 오늘 - 호출가능 타입(callable type) : () 로 호출할 수 있는가  ->  정렬(sort)에 사용
// 자원을 관리하는 클래스 - STRING (컨테이너, 반복자, 알고리즘)
// 
// 숙제 - 호출가능 타입 공부
//-----------------------------------------------------------------------------

#include <iostream>
#include <array>
#include <random>
#include <format>
#include <algorithm>
#include "save.h"

// [문제] 값이 [1, 100] 랜덤 int 100개를 생성하고
// 오름차순, 내림차순으로 정렬한 후 
// 정렬된 int 100개를 화면에 출력하시오.

std::default_random_engine dre;
std::uniform_int_distribution uid{ 1,100 };

template<typename T>
T game(T a, T b)
{
	return a > b;
}

class Dog {

public:
	void operator()(void) {
		std::cout << "나를 부를 수 있다" << std::endl;
	}
};

class Accumulate{
public:
	int operator()(int num) {
		total += num;
		return total;
	}
private:
	int total{};
};

// -------
int main()
// -------
{
	//int (*f)(void);
	//f();  -> () 함수호출 연산자

	Dog dog;
	dog();

	Accumulate accumulator;

	std::cout << "합계 : " << accumulator(1000) << std::endl;
	std::cout << "합계 : " << accumulator(1000) << std::endl;
	std::cout << "합계 : " << accumulator(1000) << std::endl;

	//save("stl.cpp");
}