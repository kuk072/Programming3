#pragma once

// 접근 제어 지시자
// public : 공공의, 누구나 사용할 수 있는
// private : 사적인, 숨겨진, 함부로 사용할 수 없는

// struct vs class 둘의 차이점이 무엇인지 알아봅시다. // 문법적인 차이가 언어마다 다름. 의미적으로(Sementic) 다른 방식으로 이해한다

// struct를 이용해서 게임 데이터를 메인 함수에 출력하기

#include <string>

class Monster // 클래스로 선언한 객체는 객체의 접근 제어 지시자를 명시하지 않으면 private으로 선언된다.
{
public:
	std :: string name;	// 이름
	int UID;	// ID
	int HP;
};

struct MonsterStruct // 구조체로 선언한 객체의 접근 제어 지시자를 명시하지 않으면 public으로 선언된다.
{
	int a;
	int b;
};


