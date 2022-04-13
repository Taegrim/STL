//-----------------------------------------------------------------------------
// 2022. 4. 13  수34						월23 수34				(6주 2일)
// 
// 컨테이너 - 다른 객체를 저장하는 객체
// Sequence Container - 원소의 순서를 임의 지정 가능
//		- array	   유일하게 크기가 컴파일 타임에 결정되어야 함
//		- vector   dynamic array (실행시간에 크기가 바뀌는 배열)
//		- deque	   벡터와 리스트의 중간단계, Contiguous Container가 아니다. 
//				   벡터보다 더 많은 원소를 저장할 수 있다.
//	
// Associative Container
// Unordered Associative Container
// 
//  중간시험 예정 - 4/20(수) (7주 2일)
//-----------------------------------------------------------------------------

#include <iostream>
#include <deque>
#include <string>
#include <algorithm>
#include <fstream>
#include "save.h"
#include "STRING.h"

extern bool 관찰;

// [문제] "stl.cpp" 파일의 단어를 deque<string>에 저장하라.
// 길이 오름차순으로 정렬하라
// 정렬된 결과를 출력하라

// -------
int main()
// -------
{
	std::ifstream in("stl.cpp");

	std::deque<std::string> d;

	std::string s;
	while (in >> s)
		d.push_back(s);
	
	sort(d.begin(), d.end(), [](const std::string& a, const std::string& b) {
		return a.size() < b.size();
		});

	for (int i = 0; i < d.size(); ++i) 
		std::cout << d[i] << std::endl;
	
	// save("stl.cpp");
} 