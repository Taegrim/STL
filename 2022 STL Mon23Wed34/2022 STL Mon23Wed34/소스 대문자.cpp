//-----------------------------------------------------------------------------
// 2022. 3. 21 월23						월23 수34				(3주 1일)
// 
// 지난 시간 - INT[1000] 대신 ARRAY<INT, 1000>을 사용하자
// 오늘	     - INT* (RAW POINTER) 대신 UNIQUE_PTR<INT> 를 사용하자
// 
// 컴파일러가 값을 결정하는 2가지 시점
// 1. 컴파일 타임 (COMPILE TIME)
// 2. 실행 시간 (RUN TIME)
// 
// 찾아보기 - RAII / STACK UNWINDING
//-----------------------------------------------------------------------------

#INCLUDE <IOSTREAM>
#INCLUDE <FSTREAM>
#INCLUDE <STRING>
#INCLUDE <ALGORITHM>
#INCLUDE <VECTOR>
#INCLUDE "SAVE.H"

// [문제] "STL.CPP" 를 읽어
// 소문자를 전부 대문자로 변경하여
// "소스 대문자.CPP" 에 저장하라


// -------
INT MAIN()
// -------
{
	STD::IFSTREAM IN("STL.CPP");

	STD::OFSTREAM OUT("소스 대문자.CPP");


	// 한번에 읽기

	//STD::STRING S;

	//IF (IN) {
	//	IN.SEEKG(0, STD::IOS::END);
	//	
	//	INT SIZE = IN.TELLG();
	//	S.RESIZE(SIZE);

	//	IN.SEEKG(0, STD::IOS::BEG);

	//	IN.READ(&S[0], SIZE);
	//	
	//	/*FOR (INT I = 0; I < S.SIZE(); ++I) {
	//		S[I] = TOUPPER(S[I]);
	//	}*/

	//	// 알고리즘으로 처리		(바꿀 것의 시작, 끝,  바꾼것이 담길 목적지의 시작점, 바뀔 방법)
	//	STD::TRANSFORM(S.BEGIN(), S.END(), S.BEGIN(), [](UNSIGNED CHAR C) {RETURN TOUPPER(C); });

	//	OUT << S << STD::ENDL;
	//}
	//ELSE {
	//	STD::COUT << "파일을 찾을 수 없습니다 " << STD::ENDL;
	//}


	// 한줄씩 읽기

	/*STD::STRING S2;

	IF (!IN) {
		STD::COUT << "파일을 찾을 수 없습니다 " << STD::ENDL;
	}
	
	WHILE (IN) {
		STD::GETLINE(IN, S2);
		FOR (INT I = 0; I < S2.SIZE(); ++I)
			S2[I] = TOUPPER(S2[I]);
		OUT << S2 << STD::ENDL;
	}*/


	
	// STL 컨테이너 활용
	STD::VECTOR<CHAR> V{ STD::ISTREAMBUF_ITERATOR<CHAR>{IN}, {} };

	FOR (INT I = 0; I < V.SIZE(); ++I) {
		IF (V[I] >= 'A' && V[I] <= 'Z')
			V[I] -= 32;
	}

	COPY(V.BEGIN(), V.END(), STD::OSTREAM_ITERATOR<CHAR>{OUT});

	

	SAVE("STL.CPP");
}
