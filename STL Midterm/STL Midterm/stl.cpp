#include <iostream>
#include <fstream>
#include <string>
#include <random>
#include <format>
#include <array>
#include <vector>
#include <list>
#include <algorithm>
using namespace std;

default_random_engine dre;
uniform_int_distribution uid{ 1, 10 };

class Dog {
	double speed{ 3.0 };				// �޸��� �ӷ�,  1�ʿ� �̵��� �Ÿ�(m/s)
	double distance{};					// �޸��Ÿ�
	string name{ "�̸��� �����ּ���"};	// �̸� 

public:
	Dog( ) = default;

	void show( ) const {
		cout << format( "{:12}, �ü�: {:>5.2f}km,    �޸��Ÿ�: {:>7.2f}m", name, speed * 3.6, distance) << endl;
		// ����ȵǸ� 
		// printf( "%s, �ü�: %5.2fkm, �޸��Ÿ� %7.2fm\n", name, speed * 3.6, distance );
	}

	void run( ) {	// �޸��Ÿ� ����
		distance += speed * uid( dre ) * 0.5;
	}

	void resetDistance( ) {
		distance = 0;
	}

	string getName( ) const {
		return name;
	}

	double getSpeed( ) const {
		return speed;
	}

	double getDistance( ) const {
		return distance;
	}

	void setName(string s) {
		name = s;
	}

	void setDistance(double d) {
		distance = d;
	}

	void setSpeed(double d) {
		speed = d;
	}

	void write( ostream& os ) const {
		os << name << "\t" << speed << "\t" << distance << endl;
	}
};

double play(vector<Dog>& v)
{
	double max_distance{};
	
	for (Dog& dog : v) {
		for (int i = 0; i < 200; ++i)
			dog.run();

		double dog_distance{ dog.getDistance() };
		if (max_distance < dog_distance)
			max_distance = dog_distance;
	}

	return max_distance;
}


//---------
int main()
//---------
{
	// ���蹮������ Dog ��ü�� ���� ������� �ʴ´�.
	// ������ �ڵ尡 �� ����

	cout << "�ҽ��� �� ����ǳ� Ȯ���մϴ�" << endl;
	Dog dog;
	dog.show( );

	for (int i = 0; i < 10; ++i)
		dog.run( );
	cout << "run() 10�� ȣ�� ��" << endl;
	dog.show( );

	ifstream in { "Dog 10000.txt" };

	// [���� 1] ���Ͽ� �ִ� Dog ��ü�� �о� �����̳ʿ� �����϶�. 
	// ����� �����̳ʿ� �б� ���� �߰��� �ڵ带 �������� ������ �����.      
	// Dog�� ����Լ��� �߰��� �� �ִ�.

	vector<Dog> v(10'000);

	int cnt{};
	int step{};

	double sum{};
	double max_speed{};
	
	double dog_count = v.size();

	string s;
	while (in >> s) {
		if (cnt == 0)
			v[step].setName(s);
		else if (cnt == 1) {
			double speed = stod(s);
			v[step].setSpeed(speed);
			
			sum += speed;

			if (max_speed < speed)
				max_speed = speed;
		}
		else
			v[step].setDistance(stod(s));

		cnt = (cnt + 1) % 3;
		if (cnt == 0)
			step++;
	}

	


	// [���� 2] ��� Dog ��ü�� speed ��հ��� ���ϰ� ȭ�鿡 ����϶�.
	// ������ ��°���� �����.											


	cout << "��� : " << sum / (double)v.size() << endl;
	// ���: 8.95978


	// [���� 3] ��� Dog ��ü �� speed�� ���� ���� ��ü�� ã�� ȭ�鿡 ����϶�.
	// ������ ��°���� �����.											


	cout << "�ְ� �ӵ� : " << max_speed << endl;
	// �ְ� �ӵ� : 17.9999


	// [���� 4] �����Լ� play�� [���� 1]���� ����� �����̳ʸ� ���ڷ� �޴´�.
	// play�� �����̳ʿ� �ִ� ��� Dog ��ü�� run( )�� 200���� ȣ���Ѵ�.
	// �Լ� play�� �����ϰ� �����϶�.										
	// ���� - ������ �Լ��� ����� ���Ǹ� �����Ͽ� ���� ��

	double max_distance{ play(v) };

	/*for (const auto& dog : v)
		dog.show();*/

	// [���� 5] [���� 4]�� play()�� ȣ���Ͽ� run()�� 200�� �����Ͽ��ٰ� ����. 
	// ���� �ָ� �޸�(distance���� ���� ū) ��ü�� ã�� ȭ�鿡 ����϶�.
	// ������ ��°���� �����.											


	cout << "�ְ� �Ÿ� : " << max_distance << endl;
	// �ְ� �Ÿ� : 10873.9

	// [���� 6] �� ������ �ذ��ϱ� ���� ����� �����̳ʸ� ������ ������ �����϶�. 
}