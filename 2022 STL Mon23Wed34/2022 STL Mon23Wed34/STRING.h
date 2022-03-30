//-----------------------------------------------------------------------------
// STRING - STL �����Ϸ��� ���� �ڿ� ���� Ŭ����
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
	char* p;				// Ȯ���� �ڿ� �ּ�
	size_t num;				// �����ϴ� ����Ʈ ��
	int id;					// ���� �� id
	static int gid;			// Ŭ���� ����ƽ - id ����
};
