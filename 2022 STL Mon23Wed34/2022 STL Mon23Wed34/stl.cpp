//-----------------------------------------------------------------------------
// 2022. 3. 8 ��23						��23 ��34				(1�� 2��)
// 
// C++ ���� - &, class Dog
// 
//-----------------------------------------------------------------------------

#include <iostream>
#include <string_view>
#include "save.h"

//[����] ���� main�� �������� ����Ǵ� ���ø� �Լ��� �ۼ��϶�

template<typename T>
void change(T& a, T& b)
{
	T temp{ a };
	a = b;
	b = temp;
}

class Dog {
public:
	Dog(std::string str, int num) : name{ str }, age{ num } {}
	

	friend std::ostream& operator<<(std::ostream& , const Dog&);
private:
	std::string name;
	int age;
};

std::ostream& operator<<(std::ostream& os, const Dog& dog)
{
	os << "�̸� : " << dog.name << ",  ���� : " << dog.age << std::endl;
	return os;
}

int main()
{
	
	int a{ 1 }, b{ 2 };
	change(a, b);

	std::cout << a << ", " << b << std::endl;

	std::string c = "STL";
	std::string d = "C++ Programming";
	change(c, d);

	std::cout << c << ", " << d << std::endl;

	Dog e{ "����", 3 };
	Dog f{ "�����", 2 };
	change(e, f);
	
	std::cout << e << f << std::endl;

	save("stl.cpp");
}
