//-----------------------------------------------------------------------------
// 2022. 3. 2 수34						월23 수34				(1주 1일)
// 
// - 강의소개 (책, cppreference.com)
// - 코딩 스타일 -> Google c++ style guide 참고
// - 컴파일 환경 세팅 - Release, x64   (시험에도 명시해둘 예정)
// 	 			      - 메뉴, 프로젝트 - 속성 - 최신 C++ 초안의 기능
// - save 파일 작성 (한학기 강의 내용을 자동저장 한다)
// 
// 공부해야 할 내용 - 파일 입출력(텍스트/바이너리 모드)
//-----------------------------------------------------------------------------


#include <iostream>
#include <string_view>
#include <fstream>
#include <filesystem>
#include <vector>
#include <iterator>
#include <chrono>
#include <algorithm>

// 코딩할 내용 - "stl.cpp" 를 읽어 강의저장 파일에 덧붙인다.

void save( std::string_view );

int main()
{
	//std::cout << "string의 크기 - " << sizeof(std::string) << std::endl;
	//std::cout << "string_view의 크기 - " << sizeof(std::string_view) << std::endl;

	save("stl.cpp");
}

void save(std::string_view file_name) 
{
	// 현재 시간을 화면에 출력한다.
	auto time = floor<std::chrono::seconds>(std::chrono::system_clock::now());

	// 읽을 파일을 연다.
	std::ifstream in{ file_name.data() };

	// 저장할 파일도 덧붙이기 모드로 연다.
	std::ofstream out{ "2022 STL 월23수34 강의.txt", std::ios::app };

	// 저장할 파일의 크기와 현재 시간을 파일에 기록한다.
	out << "파일 이름 : " << file_name  << ", 파일 크기 : " << std::filesystem::file_size(file_name) << std::endl;
	out << "저장 시간 : " << std::chrono::zoned_time("Asia/Seoul", time) << std::endl;
	out << std::endl;

	// 벡터를 만들면서 in 파일의 내용을 다 읽어온다.
	std::vector<char> v{ std::istreambuf_iterator<char>{in}, {} };

	// 벡터로 읽어온 파일을 출력 파일로 내보낸다.
	
	copy(v.begin(), v.end(), std::ostream_iterator<char>{out});

}
