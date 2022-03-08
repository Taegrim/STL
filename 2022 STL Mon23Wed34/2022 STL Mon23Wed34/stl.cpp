//-----------------------------------------------------------------------------
// 2022. 3. 8 월23						월23 수34				(1주 2일)
// 
// C++ 복습 - &, class Dog
// 
//-----------------------------------------------------------------------------

#include <iostream>
#include <string_view>
#include "save.h"

//[문제] 다음 main을 수정없이 실행되는 템플릿 함수를 작성하라

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
	os << "이름 : " << dog.name << ",  나이 : " << dog.age << std::endl;
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

	Dog e{ "코코", 3 };
	Dog f{ "댕댕이", 2 };
	change(e, f);
	
	std::cout << e << f << std::endl;

	save("stl.cpp");
}
