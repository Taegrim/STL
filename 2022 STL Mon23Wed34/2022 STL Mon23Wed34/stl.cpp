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

	Dog e{ "����"s, 3 };
	Dog f{ "�����"s, 2 };
	change(e, f);
	*/

	save("stl.cpp");
}
