//-----------------------------------------------------------------------------
// 2022. 3. 14 월23						월23 수34				(2주 1일)
// 
// 많은 수의 자료를 다루는 연습
// 1. int -> class
//    int 1000개를 파일에 저장하기
// 
// 숙제 - 파일 입출력 알아보기
//-----------------------------------------------------------------------------

#include <fstream>
#include <format>

#include <iostream>
#include <random>
#include "save.h"

std::random_device rd;
std::default_random_engine dre(rd());
std::uniform_int_distribution<int> uid;

// [문제] 엔진과 분포를 이용하여 생성한 int값 1000개를
// 파일 "int 1000개.txt"에 저장하라.

// -------
int main()
// -------
{
	// c++이 기본적으로 ANSI 방식으로 텍스트 파일을 읽음
	// 따라서 한글이 있다면 UFT-8 방식으로 읽는다고 명시해야함
	//std::locale::global(std::locale("ko_KR.UTF-8"));

	std::ofstream out("test.txt");

	if (out.is_open()) {
		for (int i = 0; i < 100; ++i) {
			for (int j = 0; j < 10; ++j)
				out << std::format("{:14}", uid(dre));
			out << std::endl;
		}
	}

	std::ifstream in("test.txt");
	

	// 찾아본 방식

	// 1. 한번에 읽기

	/*std::string s;

	if (in.is_open()) {
		in.seekg(0, std::ios::end);
		int size = in.tellg();

		s.resize(size);
		in.seekg(0, std::ios::beg);

		in.read(&s[0], size);
		std::cout << s << std::endl;

	}
	else {
		std::cout << "파일을 찾을 수 없습니다! " << std::endl;
	}*/


	// 2. 한줄씩 읽어오기

	/*if (!in.is_open()) {
		std::cout << "파일을 찾을 수 없습니다! " << std::endl;
		return 0;
	}
	std::string s2;
	while (in) {
		getline(in, s2);
		std::cout << s2 << std::endl;
	}*/



	
	// 벡터를 만들면서 in 파일의 내용을 다 읽어온다.  (STL 컨테이너)
	std::vector<char> v{ std::istreambuf_iterator<char>{in}, {} };

	// 벡터로 읽어온 파일을 출력한다
	for (auto d : v)
		std::cout << d;

	//save("stl.cpp");
}
 