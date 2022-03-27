//-----------------------------------------------------------------------------
// 2022. 3. 23 ��34						��23 ��34				(3�� 2��)
// 
// ���� - ȣ�Ⱑ�� Ÿ��(callable type) : () �� ȣ���� �� �ִ°�  ->  ����(sort)�� ���
// �ڿ��� �����ϴ� Ŭ���� - STRING (�����̳�, �ݺ���, �˰���)
// 
// ���� - ȣ�Ⱑ�� Ÿ�� ����
//-----------------------------------------------------------------------------

#include <iostream>
#include <array>
#include <random>
#include <format>
#include <algorithm>
#include "save.h"

// [����] ���� [1, 100] ���� int 100���� �����ϰ�
// ��������, ������������ ������ �� 
// ���ĵ� int 100���� ȭ�鿡 ����Ͻÿ�.

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
		std::cout << "���� �θ� �� �ִ�" << std::endl;
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
	//f();  -> () �Լ�ȣ�� ������

	Dog dog;
	dog();

	Accumulate accumulator;

	std::cout << "�հ� : " << accumulator(1000) << std::endl;
	std::cout << "�հ� : " << accumulator(1000) << std::endl;
	std::cout << "�հ� : " << accumulator(1000) << std::endl;

	//save("stl.cpp");
}