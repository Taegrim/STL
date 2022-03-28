//-----------------------------------------------------------------------------
// 2022. 3. 28 ��23						��23 ��34				(4�� 1��)
// 
// �ڿ��� �����ϴ� Ŭ���� - STRING (�����̳�, �ݺ���, �˰���)
//-----------------------------------------------------------------------------

#include <iostream>
#include "save.h"

// [STL ������] STRING Ŭ���� �ۼ��Ѵ�
// �ڿ��� �����ϴ� Ŭ�����̴�(RAII)
// ������ ���� ����� �Լ��� ������ ȭ�鿡 ����� �� �ְ� �Ѵ�.
// ǥ�� string Ŭ������ ���۰� ���� �ڵ��Ѵ�. (string�� ������� �ʴ´�)
// ��ü ������ ������ȣ�� �ο�

//bool ����{ flase }

class STRING {
public:
	STRING(const char* s) : id{ ++gid }, num{ strlen(s) }, p{ new char[num] } {
		//if (����)
		//	print("������ - const char*");
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