// c언어를 배운 후에
// c++ 시작하기

// c언어와 c++은 뭐가 다를까

// Hello World를 출력해보자 (언어 start 할 땐)

#include "01_이름공간.h"
#include "Monster.h"

using namespace A;
using namespace std;


int main()
{
	printf("C Style\n");
	printf("Hello World!\n");
	
	((cout << "CPP Style") << " append") << endl;
	cout << "Hello, World!" << endl;

	ShowPlayer();

	cout << "사용자 정의 자료형 사용해보기 : Struct" << endl;

	Monster monclass;
	monclass.name = "슬라임"; // c언어에서는 실행이 안되는 문법 -> cpp에 존재하는 특별한 문법으로 가능
	monclass.HP = 10;
	monclass.UID = 1;

	cout << "몬스터의 이름 " << monclass.name << endl;
	cout << "몬스터의 체력 " << monclass.HP << endl;
	cout << "몬스터의 UID " << monclass.UID << endl;

}

// (1)   (이름) :: (이름) ?? what the...		- 이름 공간(name space)
// 스코프(범위) 연산자 :: ,, {} 영역을 표현한다.
// namespace 키워드를 선언
// namespace 사용한다. using 키워드 함께
// 
// (2)   <<  이건 또 뭐여
// (3)   endl what??


// c언어와 cpp언어 변경 사항이 무엇이 있는가?
// 1. 함수 오버로딩
// c언어 : 반환값 이름(...)
// cpp : 이름 같더라도 인자가 다르면 다른 함수로 인식한다
// ex) void(int a, int b) /= void(int a, int b, int c)

// 게임을 만들기 위해~
// 컴퓨터에게 명령을 시켜서 실행하게 만든다.
// 게임 안에 있는 데이터를 만들고 싶은거임.

// struct(구조체) - class(객체) 하는 역할은 같지만 의미적으로는 다름

// 포인터, 참조자 -> 사용자를 위한 문법이 있음
// cpp 만들어진 코드가 쓰고 싶다 vs 설계 해보고 싶다.

// c언어 프로젝트에서 사용한 게임 데이터를 범용으로 사용할 수 있게 변경해보기


