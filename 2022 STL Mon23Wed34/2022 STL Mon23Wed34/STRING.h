//-----------------------------------------------------------------------------
// STRING - STL 관찰하려고 만든 자원 관리 클래스
// 
// 2022. 3. 30									Programmed by Taegrim
//-----------------------------------------------------------------------------

#pragma once

#include <iostream>
#include <compare>		// C++20 spaceship operator(three-way comparator)

// 2022. 4. 27 STRING이 제공하는 반복자
class STRING_iterator {
public:
	// 2022. 5. 2 모든 표준 반복자는 이 다섯가지 타입을 정의해야 한다
	using iterator_category = std::random_access_iterator_tag;
	using value_type = char;
	using difference_type = ptrdiff_t;
	using pointer = const char*;
	using reference = const char&;

private:
	char* p;

public:
	STRING_iterator(char* p) : p{ p } {}

	// 2022. 5. 2 sort에 필요한 연산자들 정의
	difference_type operator-(const STRING_iterator& rhs) const {
		return p - rhs.p;
	}

	STRING_iterator& operator++() {
		++p;
		return *this;
	}

	auto operator<=>(const STRING_iterator&) const = default;

	char& operator*() const {
		return *p;
	}

	STRING_iterator& operator--() {
		--p;
		return *this;
	}

	STRING_iterator operator+(difference_type d) const {
		return STRING_iterator{ p + d };
	}

	STRING_iterator operator-(difference_type d) const {
		return STRING_iterator{ p - d };
	}
};


// 2022. 4. 27 STRING이 제공하는 역방향 반복자
class STRING_reverse_iterator {
public:
	STRING_reverse_iterator(char* p) : p{ p } {}

	STRING_reverse_iterator& operator++() {
		--p;
		return *this;
	}

	char& operator* () const {
		return *(p - 1);
	}

	// <, >, ==, !=, <=, >=		6가지 관계연산자를 한번에 정의할 수 있음
	auto operator<=>(const STRING_reverse_iterator& rhs) const = default;

	/*bool operator!= (const STRING_reverse_iterator& rhs) const {
		return p != rhs.p;
	}*/

private:
	char* p;
};

class STRING {
public:
	using iterator = STRING_iterator;
	using reverse_iterator = STRING_reverse_iterator;

private:
	char* p;				// 확보한 자원 주소
	size_t num;				// 관리하는 바이트 수
	int id;					// 생성 시 id
	static int gid;			// 클래스 스태틱 - id 관리

public:
	STRING();
	STRING(const char* s);

	~STRING();

	STRING(const STRING& other);
	STRING& operator=(const STRING& other);
	
	// 이동생성 / 이동할당(대입)연산자 2022.04.11
	STRING(STRING&& other) noexcept;
	STRING& operator=(STRING&& other) noexcept;

	STRING operator+(const STRING& rhs) const;
	
	// 2022. 5. 2 default < 연산자
	bool operator<(const STRING& rhs) const {
		return num < rhs.num;
	}

	// 2022. 4. 27 begin()/end() 제공, const를 붙일 것
	iterator begin() const {
		return iterator{ p };
	}
	iterator end() const {
		return iterator{ p + num };
	}

	reverse_iterator rbegin() const {
		return reverse_iterator{ p + num };
	}
	reverse_iterator rend() const {
		return reverse_iterator{ p };
	}

	// 2022. 4. 4 추가
	size_t getNum() const;

	void print(const char* s) const;

	friend std::ostream& operator<<(std::ostream&, const STRING&);
	// 2022. 5. 2 입력 반복자가 >> 로 읽을 수 있게
	friend std::istream& operator>>(std::istream&, STRING&);

	
};

