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
#include <vector>
#include <random>
#include "save.h"

// [����] ����ڰ� ���ϴ� ������ŭ int�� ������ �޸𸮸� ������
// �� �޸𸮸� 1���� �����ϴ� int ������ ä����

std::random_device rd;
std::default_random_engine dre;
std::uniform_int_distribution uid;

// -------
int main()
// -------
{
	int num;
	std::cout << "�� ���� int �� ���Ͻʴϱ�? ";
	std::cin >> num;

	int* arr = new int[num];

	for (int i{}; i < num; ++i)
		arr[i] = i + 1;

	int sum = 0;
	for (int i{}; i < num; ++i)
		sum += arr[i];

	std::cout << sum;

	delete[] arr;

	//save("stl.cpp");
}
