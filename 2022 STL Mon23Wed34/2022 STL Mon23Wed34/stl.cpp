//-----------------------------------------------------------------------------
// 2022. 4. 18  월23						월23 수34				(7주 1일)
// 
// 컨테이너 - 다른 객체를 저장하는 객체
// 
// STL contiguous containers - T[], array<T,N>, vector<T>, string
// 
// Sequence Container - 원소의 순서를 임의 지정 가능
//		- array	   유일하게 크기가 컴파일 타임에 결정되어야 함
//		- vector   dynamic array (실행시간에 크기가 바뀌는 배열)
//				   벡터의 크기가 변경될 때 반복자가 무효화 될 수 있다(iterator invalidation)
//		- deque	   벡터와 리스트의 중간단계, Contiguous Container가 아니다. 
//				   벡터보다 더 많은 원소를 저장할 수 있다.
//				   반복자가 무효화되지 않는다.
//		- list 
// 
// Associative Container
// Unordered Associative Container
// 
//  중간시험 예정 - 4/20(수) (7주 2일)
//-----------------------------------------------------------------------------

#include <iostream>
#include <deque>
#include <list>
#include <string>
#include <algorithm>
#include <fstream>
#include "save.h"
#include "STRING.h"

extern bool 관찰;

// [문제] "Test.txt" 파일의 단어를 deque<string>에 저장하라.
// 내림차순으로 정렬하라.
// 각 단어를 오름차순으로 정렬하라.
// 정렬된 결과를 출력하라

// -------
int main()
// -------
{
	std::ifstream in("Test.txt");

	std::list<std::string> cont;
	std::string str;

	while (in >> str)
		cont.push_back(str);

	// [문제] cont를 ascending order(오름차순)로 정렬하라.

	cont.sort();

	// [문제] 글자수가 5개인 것만 화면에 출력하라
	

	std::copy_if(cont.begin(), cont.end(), std::ostream_iterator<std::string>{std::cout, "\n"}, [](const std::string& a) {
		return a.size() == 5;
		});

	// 글자수 5개 카운트

	int num = std::count_if(cont.begin(), cont.end(), [](const std::string& a) {
		return a.size() == 5;
		});

	std::cout << "5개의 글자수는 " << num << std::endl;

	// save("stl.cpp");
} 