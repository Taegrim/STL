//-----------------------------------------------------------------------------
// 2022. 3. 16 ��34						��23 ��34				(2�� 2��)
// 
// ���� ������� �� �̻� �˾ƺ� ���� ����
//	 text / binary  mod ��   read / write ��  >> , <<  �� ���ո��� ���� �����̴�.
// 
// - ���� ����� ���� �� ��
// 
// ���� �ð� : �޸�
//			   class �����
// 
//  ���� - ���� �޸� �Ҵ�
//-----------------------------------------------------------------------------

#include <iostream>
#include <fstream>
#include <memory>
#include "save.h"

// [����] ����ڰ� ���ϴ� ������ŭ int�� ������ �޸𸮸� ������
// �� �޸𸮸� 1���� �����ϴ� int ������ ä����


class number
{
public:
	number() { num = 0; }
	number(int a) : num{ a } {}

	void setNumber(int a) { num = a; }

	friend std::ostream& operator<<(std::ostream& os, const number& num);

private:
	int num;
};

std::ostream& operator<<(std::ostream& os, const number& number)
{
	os << number.num;
	return os;
}

// -------
int main()
// -------
{
	int num;
	std::cout << "�� ���� int �� ���Ͻʴϱ�? ";
	std::cin >> num;

	auto arr = std::make_unique<int[]>(num);

	for (int i{}; i < num; ++i)
		arr[i] = i + 1;

	int sum = 0;
	for (int i{}; i < num; ++i)
		sum += arr[i];

	std::cout << sum << std::endl;




	auto arr2 = std::make_unique<number[]>(num);

	for (int i{}; i < num; ++i)
		arr2[i].setNumber(i + 1);

	for (int i{}; i < num; ++i)
		std::cout << arr2[i] << ' ';




	//save("stl.cpp");
}
