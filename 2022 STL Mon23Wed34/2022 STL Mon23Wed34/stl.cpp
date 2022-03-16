//-----------------------------------------------------------------------------
// 2022. 3. 16 수34						월23 수34				(2주 2일)
// 
// 파일 입출력은 더 이상 알아볼 것이 없다
//	 text / binary  mod 와   read / write 와  >> , <<  의 조합말곤 없기 떄문이다.
// 
// - 파일 입출력 복습 할 것
// 
// 다음 시간 : 메모리
//			   class 입출력
// 
//  숙제 - 동적 메모리 할당
//-----------------------------------------------------------------------------

#include <iostream>
#include <fstream>
#include <vector>
#include <random>
#include "save.h"

// [문제] 사용자가 원하는 갯수만큼 int를 저장할 메모리를 만들어라
// 그 메모리를 1부터 증가하는 int 값으로 채워라

std::random_device rd;
std::default_random_engine dre;
std::uniform_int_distribution uid;

// -------
int main()
// -------
{
	int num;
	std::cout << "몇 개의 int 를 원하십니까? ";
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
