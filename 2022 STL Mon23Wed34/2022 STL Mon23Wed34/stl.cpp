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
#include <memory>
#include "save.h"

// [문제] "stl.cpp" 를 읽어
// 소문자를 전부 대문자로 변경하여
// "소스 대문자.cpp" 에 저장하라

// -------
int main()
// -------
{
	save("stl.cpp");
	
	// 유니크 포인터는 자동으로 해제하기에 아래 프로그램은 죽지 않는다

	while (true) {
		
		
		std::unique_ptr<int[]> p{ new int[1'000'000'000] };

		long long sum{};
		for (int i = 0; i < 1'000'000'000; ++i)
			sum += p[i];

		std::cout << "합계 - " << sum << std::endl;

	}
	
}
