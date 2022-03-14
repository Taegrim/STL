//-----------------------------------------------------------------------------
// 2022. 3. 14 월23						월23 수34				(2주 1일)
// 
// 많은 수의 자료를 다루는 연습
// 1. int -> class
//    int 1000개를 파일에 저장하기
// 
// 숙제 - 파일 입출력 알아보기
//-----------------------------------------------------------------------------

#include <iostream>
#include <random>
#include "save.h"

std::default_random_engine dre;
std::uniform_int_distribution<int> uid;

// [문제] 엔진과 분포를 이용하여 생성한 int값 1000개를
// 파일 "int 1000개.txt"에 저장하라.

// -------
int main()
// -------
{

	for (int i = 0; i < 1'000; ++i)
		std::cout << uid(dre) << "\t";
	
	save("stl.cpp");
}
 