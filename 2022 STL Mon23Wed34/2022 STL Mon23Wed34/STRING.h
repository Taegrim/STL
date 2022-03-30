//-----------------------------------------------------------------------------
// STRING - STL 관찰하려고 만든 자원 관리 클래스
// 
// 2022. 3. 30									Programmed by Taegrim
//-----------------------------------------------------------------------------

#pragma once

#include <iostream>

class STRING {
public:
	STRING();

	STRING(const char* s);

	~STRING();

	STRING(const STRING& other);

	STRING& operator=(const STRING& other) noexcept;

	STRING operator+(const STRING& rhs) const;

	void print(const char* s) const;


	friend std::ostream& operator<<(std::ostream&, const STRING&);

private:
	char* p;				// 확보한 자원 주소
	size_t num;				// 관리하는 바이트 수
	int id;					// 생성 시 id
	static int gid;			// 클래스 스태틱 - id 관리
};
