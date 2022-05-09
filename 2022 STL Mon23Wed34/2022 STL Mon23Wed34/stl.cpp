//-----------------------------------------------------------------------------
// 2022. 5. 9  ��23						��23 ��34				 (10�� 1��)
// 
// �����̳� - �ٸ� ��ü�� �����ϴ� ��ü
// Associative Container
//  set - ���Ҹ� �׻� ���Ļ��·� ����, ã��, ����, �߰�( O(log n) )
//      - set�� �ֿ� ����, ��� contains, 
//      - ���� ���� type�� set�� ��������?
//      - left, right�� ����Ű�� �޸𸮸� �ʿ�� �ϱ⿡ ���Ҵ� 16����Ʈ�� �߰��� ����
// 
// Unordered Associative Container
// 
// C++20 span
//-----------------------------------------------------------------------------
#include <iostream>
#include <set>
#include <array>
#include <random>
#include "save.h"
#include "STRING.h"

extern bool ����;

std::default_random_engine dre;
std::uniform_int_distribution<int> uidAlpha('a', 'z');
std::uniform_int_distribution<int> uidNum(1, 10000);

class Dog {
	std::string name;	// 10���� �ҹ���
	int num;			// 1~10000
public:
	Dog(){
		for (int i = 0; i < 10; ++i)
			name += uidAlpha(dre);
		num = uidNum(dre);
	}

	void show() const {
		std::cout << name << " - " << num << std::endl;
	}

	
};

std::array<Dog, 1000> dogs;
// -------
int main()
// -------
{
	for (const Dog& dog : dogs)
		dog.show();

	// class Dog�� set<Dog>�� �ְ� �������
	
	//std::set<Dog> s{dogs.begin(), dogs.end()};


	//save("stl.cpp");
} 