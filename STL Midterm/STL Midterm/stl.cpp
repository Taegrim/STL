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
	double speed{ 3.0 };				// 달리기 속력,  1초에 이동한 거리(m/s)
	double distance{};					// 달린거리
	string name{ "이름을 지어주세요"};	// 이름 

public:
	Dog( ) = default;

	void show( ) const {
		cout << format( "{:12}, 시속: {:>5.2f}km,    달린거리: {:>7.2f}m", name, speed * 3.6, distance) << endl;
		// 실행안되면 
		// printf( "%s, 시속: %5.2fkm, 달린거리 %7.2fm\n", name, speed * 3.6, distance );
	}

	void run( ) {	// 달린거리 누적
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
	// 시험문제에서 Dog 객체의 수는 변경되지 않는다.
	// 간결한 코드가 더 낫다

	cout << "소스가 잘 실행되나 확인합니다" << endl;
	Dog dog;
	dog.show( );

	for (int i = 0; i < 10; ++i)
		dog.run( );
	cout << "run() 10번 호출 후" << endl;
	dog.show( );

	ifstream in { "Dog 10000.txt" };

	// [문제 1] 파일에 있는 Dog 객체를 읽어 컨테이너에 저장하라. 
	// 사용한 컨테이너와 읽기 위해 추가한 코드를 빠짐없이 답지에 적어라.      
	// Dog에 멤버함수를 추가할 수 있다.

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

	


	// [문제 2] 모든 Dog 객체의 speed 평균값을 구하고 화면에 출력하라.
	// 답지에 출력결과도 적어라.											


	cout << "평균 : " << sum / (double)v.size() << endl;
	// 평균: 8.95978


	// [문제 3] 모든 Dog 객체 중 speed가 가장 빠른 객체를 찾아 화면에 출력하라.
	// 답지에 출력결과도 적어라.											


	cout << "최고 속도 : " << max_speed << endl;
	// 최고 속도 : 17.9999


	// [문제 4] 전역함수 play는 [문제 1]에서 사용한 컨테이너를 인자로 받는다.
	// play는 컨테이너에 있는 모든 Dog 객체의 run( )을 200번씩 호출한다.
	// 함수 play를 선언하고 정의하라.										
	// 주의 - 답지에 함수의 선언과 정의를 구분하여 적을 것

	double max_distance{ play(v) };

	/*for (const auto& dog : v)
		dog.show();*/

	// [문제 5] [문제 4]의 play()를 호출하여 run()을 200번 실행하였다고 하자. 
	// 가장 멀리 달린(distance값이 가장 큰) 객체를 찾아 화면에 출력하라.
	// 답지에 출력결과도 적어라.											


	cout << "최고 거리 : " << max_distance << endl;
	// 최고 거리 : 10873.9

	// [문제 6] 이 문제를 해결하기 위해 사용한 컨테이너를 선택한 이유를 설명하라. 
}