#include <iostream>
#include "Person.h"

using namespace std;

// c vs cpp 차이점
// c언어 - 절차 지향 언어 - 함수들로 구성된 프로그램
// cpp - 객체 지향 언어 - 객체들로 구성된 프로그램

// c언어로 프로그래밍을 하면서 겪었던 문제점
// (1) 프로그래밍의 확장이 어려워진다.
// (2) 모든 객체의 정보를 알고 있어야 함수를 다룰 수 있다.
// (3) 프로그램이 커지면 커질수록 다루기가 어려워진다.

//int main()
//{
//	cout << "3강 시작!" << endl;
//
//
//	Person p1{};
//	Person p2(24, "곽동건", "부산");
//	Person p3(24, 10000, "곽동건", "부산");
//	//Person p4(10, 111, "냐옹이", "서울", "야옹");
//	p1.ToString();
//	p2.ToString();
//	p3.ToString();
//	//p4.ToString();
//
//}