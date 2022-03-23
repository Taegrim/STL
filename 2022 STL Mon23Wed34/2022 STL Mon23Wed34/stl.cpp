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

// -------
int main()
// -------
{
	//int (*f)(void);
	//f();  -> () �Լ�ȣ�� ������

	Dog dog;
	dog();

	std::array<int, 100> arr;

	for (auto& data : arr)
		data = uid(dre);

	std::cout << "���� ��" << std::endl;
	for (auto data : arr)
		std::cout << std::format("{:4}", data);

	std::cout << std::endl << std::endl;

	// default ��������
	// std::sort(arr.begin(), arr.end());

	// ��������
	// std::sort(arr.begin(), arr.end(), std::greater<>());  	
	std::sort(arr.begin(), arr.end(), game<int>);

	std::cout << "���� ��" << std::endl;
	for (auto data : arr)
		std::cout << std::format("{:4}", data);

	//save("stl.cpp");
}