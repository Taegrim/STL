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

template<class T>
void change(T &a, T &b)
{
	T temp{ a };
	a = b;
	b = temp;
}

class Dog {
public:
	Dog(std::string, int) {}
private:

};

int main()
{
	/*
	int a{ 1 }, b{ 2 };
	change(a, b);

	std::string c = "STL"s;
	std::string d = "C++"s;
	change(c, d);

	Dog e{ "코코"s, 3 };
	Dog f{ "댕댕이"s, 2 };
	change(e, f);
	*/

	save("stl.cpp");
}
