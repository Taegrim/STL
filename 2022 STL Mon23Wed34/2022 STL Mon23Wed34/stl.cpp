//-----------------------------------------------------------------------------
// 2022. 3. 21 ��23						��23 ��34				(3�� 1��)
// 
// ���� �ð� - int[1000] ��� array<int, 1000>�� �������
// ����	     - int* (raw pointer) ��� unique_ptr<int> �� �������
// 
// �����Ϸ��� ���� �����ϴ� 2���� ����
// 1. ������ Ÿ�� (Compile Time)
// 2. ���� �ð� (Run Time)
// 
// ã�ƺ��� - RAII / Stack unwinding
//-----------------------------------------------------------------------------

#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
#include <vector>
#include "save.h"

// [����] "stl.cpp" �� �о�
// �ҹ��ڸ� ���� �빮�ڷ� �����Ͽ�
// "�ҽ� �빮��.cpp" �� �����϶�


// -------
int main()
// -------
{
	std::ifstream in("stl.cpp");

	std::ofstream out("�ҽ� �빮��.cpp");


	// �ѹ��� �б�

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

	//	// �˰������� ó��		(�ٲ� ���� ����, ��,  �ٲ۰��� ��� �������� ������, �ٲ� ���)
	//	std::transform(s.begin(), s.end(), s.begin(), [](unsigned char c) {return toupper(c); });

	//	out << s << std::endl;
	//}
	//else {
	//	std::cout << "������ ã�� �� �����ϴ� " << std::endl;
	//}


	// ���پ� �б�

	/*std::string s2;

	if (!in) {
		std::cout << "������ ã�� �� �����ϴ� " << std::endl;
	}
	
	while (in) {
		std::getline(in, s2);
		for (int i = 0; i < s2.size(); ++i)
			s2[i] = toupper(s2[i]);
		out << s2 << std::endl;
	}*/


	
	// STL �����̳� Ȱ��
	std::vector<char> v{ std::istreambuf_iterator<char>{in}, {} };

	for (int i = 0; i < v.size(); ++i) {
		if (v[i] >= 'a' && v[i] <= 'z')
			v[i] -= 32;
	}

	copy(v.begin(), v.end(), std::ostream_iterator<char>{out});

	

	//save("stl.cpp");
}
