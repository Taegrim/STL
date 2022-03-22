//-----------------------------------------------------------------------------
// 2022. 3. 21 ��23						��23 ��34				(3�� 1��)
// 
// ���� �ð� - INT[1000] ��� ARRAY<INT, 1000>�� �������
// ����	     - INT* (RAW POINTER) ��� UNIQUE_PTR<INT> �� �������
// 
// �����Ϸ��� ���� �����ϴ� 2���� ����
// 1. ������ Ÿ�� (COMPILE TIME)
// 2. ���� �ð� (RUN TIME)
// 
// ã�ƺ��� - RAII / STACK UNWINDING
//-----------------------------------------------------------------------------

#INCLUDE <IOSTREAM>
#INCLUDE <FSTREAM>
#INCLUDE <STRING>
#INCLUDE <ALGORITHM>
#INCLUDE <VECTOR>
#INCLUDE "SAVE.H"

// [����] "STL.CPP" �� �о�
// �ҹ��ڸ� ���� �빮�ڷ� �����Ͽ�
// "�ҽ� �빮��.CPP" �� �����϶�


// -------
INT MAIN()
// -------
{
	STD::IFSTREAM IN("STL.CPP");

	STD::OFSTREAM OUT("�ҽ� �빮��.CPP");


	// �ѹ��� �б�

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

	//	// �˰������� ó��		(�ٲ� ���� ����, ��,  �ٲ۰��� ��� �������� ������, �ٲ� ���)
	//	STD::TRANSFORM(S.BEGIN(), S.END(), S.BEGIN(), [](UNSIGNED CHAR C) {RETURN TOUPPER(C); });

	//	OUT << S << STD::ENDL;
	//}
	//ELSE {
	//	STD::COUT << "������ ã�� �� �����ϴ� " << STD::ENDL;
	//}


	// ���پ� �б�

	/*STD::STRING S2;

	IF (!IN) {
		STD::COUT << "������ ã�� �� �����ϴ� " << STD::ENDL;
	}
	
	WHILE (IN) {
		STD::GETLINE(IN, S2);
		FOR (INT I = 0; I < S2.SIZE(); ++I)
			S2[I] = TOUPPER(S2[I]);
		OUT << S2 << STD::ENDL;
	}*/


	
	// STL �����̳� Ȱ��
	STD::VECTOR<CHAR> V{ STD::ISTREAMBUF_ITERATOR<CHAR>{IN}, {} };

	FOR (INT I = 0; I < V.SIZE(); ++I) {
		IF (V[I] >= 'A' && V[I] <= 'Z')
			V[I] -= 32;
	}

	COPY(V.BEGIN(), V.END(), STD::OSTREAM_ITERATOR<CHAR>{OUT});

	

	SAVE("STL.CPP");
}
