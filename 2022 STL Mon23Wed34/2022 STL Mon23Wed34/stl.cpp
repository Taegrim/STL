//-----------------------------------------------------------------------------
// 2022. 4. 11  월23						월23 수34				(6주 1일)
// 
// 컨테이너 - 다른 객체를 저장하는 객체
// Sequence Container - 원소의 순서를 임의 지정 가능
//		- array	   유일하게 크기가 컴파일 타임에 결정되어야 함
//		- vector   dynamic array (실행시간에 크기가 바뀌는 배열)
// 
//  STRING 클래스 이동지원 - 자원을 관리하는 클래스는 이동문법을 지원해야 함
//		내가 사용하는 것이 아니라 컨테이너/알고리즘에서 사용
// 
//  클래스의 멤버 변수가 private이 아니라면 ???
// 
//  중간시험 예정 - 4/20(수) (7주 2일)
//-----------------------------------------------------------------------------

#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
#include "save.h"
#include "STRING.h"

extern bool 관찰;

// -------
int main()
// -------
{
	// [문제] "소스.cpp" 를 읽어 알파벳의 갯수를 다음과 같이 출력하라.
	// 대소문자를 구분하진 않는다.

	// [a] - 10
	// [b] - 2
	//  ...
	// [z] - 1

	int alpha_count[26] = {};

	std::ifstream in("stl.cpp");

	std::string s;

	if (in.is_open()) {
		in.seekg(0, std::ios::end);
		int size = in.tellg();

		s.resize(size);
		in.seekg(0, std::ios::beg);

		in.read(&s[0], size);
	}
	
	
	for (int i = 0; i < s.size(); ++i) {
		if ((s[i] >= 'a' && s[i] <= 'z')) {
			
		}
		else if (s[i] >= 'A' && s[i] <= 'Z') {

		}
	}


	 save("stl.cpp");
} 