//-----------------------------------------------------------------------------
// STRING - STL �����Ϸ��� ���� �ڿ� ���� Ŭ����
// 
// 2022. 3. 30									Programmed by Taegrim
//-----------------------------------------------------------------------------

#include <iostream>
#include "STRING.h"

bool ����{ false };		// �����޼����� ������ -> true
int STRING::gid{};		// STRING static


STRING::STRING() : id{ ++gid }, num{}, p{} 
{
	if (����)
		print("����Ʈ");
}

STRING::STRING(const char* s) : id{ ++gid }, num{ strlen(s) }, p{ new char[num] } 
{
	memcpy(p, s, num);
	if (����)
		print("������(*)");
}

STRING::~STRING() 
{
	if (����)
		print("�Ҹ���");
	if (num)
		delete[] p;
}

STRING::STRING(const STRING& other) 
	: id{ ++gid }, num{ other.num }, p{ new char[num] } 
{
	memcpy(p, other.p, num);
	if (����)
		print("���� ������");
}

STRING& STRING::operator=(const STRING& other) noexcept
{
	std::cout << "�Ҵ� ������" << std::endl;

	if (this == &other)
		return *this;

	if (num)
		delete[] p;

	num = other.num;

	p = new char[num];
	memcpy(p, other.p, num);

	if (����)
		print("�����Ҵ�");

	return *this;
}

STRING STRING::operator+(const STRING& rhs) const 
{
	STRING temp;
	temp.num = num + rhs.num;
	temp.p = new char[temp.num];
	memcpy(temp.p, p, num);
	memcpy(temp.p + num, rhs.p, rhs.num);

	return temp;

}

void STRING::print(const char* s) const 
{
	std::cout << s << " [" << id << "] ��ü�ּ� : " << this << " �ڿ� -";
	if (num != 0)
		std::cout << " ���� : " << num << " �ڿ� �ּ�: " << (void*)p << std::endl;
	else
		std::cout << "  ����" << std::endl;
}

std::ostream& operator<<(std::ostream& os, const STRING& s)
{
	for (int i{}; i < s.num; ++i)
		os << s.p[i];
	return os;
}