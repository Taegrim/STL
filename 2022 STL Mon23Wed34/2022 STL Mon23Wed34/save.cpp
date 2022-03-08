//-----------------------------------------------------------------------------
// SAVE.CPP
//
// 저장할 파일을 알려주면 한학기 강의를 저장할 파일에 덧붙인다.
//    "2022 STL 월23수34 강의.txt"
// 
// 2022. 3. 7											Programmed by Taegrim
//-----------------------------------------------------------------------------

#include <iostream>
#include <string_view>
#include <filesystem>
#include <fstream>
#include <chrono>
#include <algorithm>
#include "save.h"

void save(std::string_view fname)
{
	// 읽을 파일을 연다.
	std::ifstream in{ fname.data() };

	// 저장할 파일도 덧붙이기 모드로 연다.
	// 상대경로를 활용해 저장하는 위치를 변경한다.
	// .는 현재폴더,		.. 는 상위폴더
	std::ofstream out{ ".\\..\\..\\2022 STL 월23수34 강의.txt", std::ios::app };


	// 현재 시간을 화면에 출력한다.
	auto time = floor<std::chrono::seconds>(std::chrono::system_clock::now());



	// 저장할 파일의 크기와 현재 시간을 파일에 기록한다.
	out << "파일 이름 : " << fname << ", 파일 크기 : " << std::filesystem::file_size(fname) << std::endl;
	// file_size 는 c++17에 있는 기능
	out << "저장 시간 : " << std::chrono::zoned_time("Asia/Seoul", time) << std::endl;
	// zoned_time 은 c++20 에 있는 기능
	out << std::endl;

	// 벡터를 만들면서 in 파일의 내용을 다 읽어온다.  (STL 컨테이너)
	std::vector<char> v{ std::istreambuf_iterator<char>{in}, {} };

	// 벡터로 읽어온 파일을 출력 파일로 내보낸다. (STL 알고리즘)
	copy(v.begin(), v.end(), std::ostream_iterator<char>{out});

}