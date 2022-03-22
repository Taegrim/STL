//-----------------------------------------------------------------------------
// 2022. 3. 21 월23						월23 수34				(3주 1일)
// 
// 지난 시간 - int[1000] 대신 array<int, 1000>을 사용하자
// 오늘	     - int* (raw pointer) 대신 unique_ptr<int> 를 사용하자
// 
// 컴파일러가 값을 결정하는 2가지 시점
// 1. 컴파일 타임 (Compile Time)
// 2. 실행 시간 (Run Time)
// 
// 찾아보기 - RAII / Stack unwinding
//-----------------------------------------------------------------------------

#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
#include <vector>
#include "save.h"

// [문제] "stl.cpp" 를 읽어
// 소문자를 전부 대문자로 변경하여
// "소스 대문자.cpp" 에 저장하라


// -------
int main()
// -------
{
	std::ifstream in("stl.cpp");

	std::ofstream out("소스 대문자.cpp");


	// 한번에 읽기

	//std::string s;

	//if (in) {
	//	in.seekg(0, std::ios::end);
	//	
	//	int size = in.tellg();
	//	s.resize(size);

	//	in.seekg(0, std::ios::beg);

	//	in.read(&s[0], size);
	//	
	//	/*for (int i = 0; i < s.size(); ++i) {
	//		s[i] = toupper(s[i]);
	//	}*/

	//	// 알고리즘으로 처리		(바꿀 것의 시작, 끝,  바꾼것이 담길 목적지의 시작점, 바뀔 방법)
	//	std::transform(s.begin(), s.end(), s.begin(), [](unsigned char c) {return toupper(c); });

	//	out << s << std::endl;
	//}
	//else {
	//	std::cout << "파일을 찾을 수 없습니다 " << std::endl;
	//}


	// 한줄씩 읽기

	/*std::string s2;

	if (!in) {
		std::cout << "파일을 찾을 수 없습니다 " << std::endl;
	}
	
	while (in) {
		std::getline(in, s2);
		for (int i = 0; i < s2.size(); ++i)
			s2[i] = toupper(s2[i]);
		out << s2 << std::endl;
	}*/


	
	// STL 컨테이너 활용
	std::vector<char> v{ std::istreambuf_iterator<char>{in}, {} };

	for (int i = 0; i < v.size(); ++i) {
		if (v[i] >= 'a' && v[i] <= 'z')
			v[i] -= 32;
	}

	copy(v.begin(), v.end(), std::ostream_iterator<char>{out});

	

	//save("stl.cpp");
}
