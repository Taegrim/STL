//-----------------------------------------------------------------------------
// 2022. 5. 2  ��23						��23 ��34				 (9�� 1��)
// 
// �����̳� - �ٸ� ��ü�� �����ϴ� ��ü
// 
// STL contiguous containers - T[], array<T,N>, vector<T>, string
// 
// Sequence Container
// 
// �ݺ��� -
//	C++ ���α׷����� �����̳ʿ� ������� �ϰ��� ������� �۵��ϱ� ���� �����͸� �߻�ȭ�� ����
//
// Associative Container
// Unordered Associative Container
// 
// ���� �ڵ��ؼ� �˾ƺ� ����
// STRING�� �����ϴ� �ݺ��ڰ� random_access_iterator�� �ǵ��� �ڵ��Ѵ�
//-----------------------------------------------------------------------------
#include <iostream>
#include <algorithm>
#include <vector>
#include <fstream>
#include <string>
#include "save.h"
#include "STRING.h"

extern bool ����;

//bool operator<(const STRING& lhs, const STRING& rhs)
//{
//	// ������ �� �˰��� �Լ�
//	return std::lexicographical_compare(lhs.begin(), lhs.end(), rhs.begin(), rhs.end());
//
//	//return std::string(lhs.begin(), lhs.end()) < std::string(rhs.begin(), rhs.end());
//}


// -------
int main()
// -------
{
	STRING str;
	
	// [����] ���ڸ� �Է¹޾� �ܾ��� �� ��° �������� ����϶�
	save("stl.cpp");

	std::cout << "�ܾ �Է��ϼ���: ";
	std::cin >> str;


	while(true){
		std::cout << "ã�� ���ڴ�? ";
		char c;
		std::cin >> c;
		
		// ������ �ذ�ǵ��� my_find �Լ��� ������
		//auto p = my_find(str.begin(), str.end(), c);
		auto p = std::find(str.begin(), str.end(), c);
		if (p == str.end())
			std::cout << c << "�� �ܾ �����ϴ�" << std::endl;
		else
			std::cout << c << "�� " << std::distance(str.begin(), p) + 1 
			<< "��° �����Դϴ�." << std::endl;
	}

} 