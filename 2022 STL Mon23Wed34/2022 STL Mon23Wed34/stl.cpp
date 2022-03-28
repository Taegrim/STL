//-----------------------------------------------------------------------------
// 2022. 3. 28 월23						월23 수34				(4주 1일)
// 
// 자원을 관리하는 클래스 - STRING (컨테이너, 반복자, 알고리즘)
//-----------------------------------------------------------------------------

#include <iostream>
#include "save.h"

// [STL 관찰용] STRING 클래스 작성한다
// 자원을 관리하는 클래스이다(RAII)
// 관찰을 위해 스페셜 함수의 동작을 화면에 출력할 수 있게 한다.
// 표준 string 클래스의 동작과 같이 코딩한다. (string을 사용하지 않는다)
// 객체 생성시 고유번호를 부여

//bool 관찰{ flase }

class STRING {
public:
	STRING(const char* s) : id{ ++gid }, num{ strlen(s) }, p{ new char[num] } {
		//if (관찰)
		//	print("생성자 - const char*");
		memcpy(p, s, num);
	}
	
	~STRING() { delete[] p; }

	friend std::ostream& operator<<(std::ostream&, const STRING&);

private:
	char* p;
	size_t num;
	int id;
	static int gid;
};

int STRING::gid{};

std::ostream& operator<<(std::ostream& os, const STRING& s)
{
	for (int i{}; i < s.num; ++i)
		os << s.p[i];
	return os;
}

// -------
int main()
// -------
{	
	STRING a{"2022. 3. 28" };
	STRING b{ "STL" };
	// STRING c = a + b;

	std::cout << a << std::endl;
	std::cout << b << std::endl;
	//std::cout << b << std::endl;

	//save("stl.cpp");
} 