#include <iostream> // cout, cin
#include <cstdio>	// c언어에서 사용했던 라이브러리 사용하고 싶을 때는 앞에 c 붙이기
#include <strstream>
#include <string>

using namespace std;

// 주소를 저장하는 변수
// (1) cpp 방식의 변수 선언.
// (2) 포인터의 동적 할당 변경 사항
// (3) 참조자

// int& a = b1;
void MySwap(int& a, int& b)
{
	int temp = b;
	b = a; 
	a = temp;
}

void MySwap(int * a, int * b)
{
	int temp = *b;
	*b = *a;
	*a = temp;
}

int& RefExample(int& mainRef)
{
	int temp = ++mainRef;
	return temp;
}

// 포인터를 대체할 수 있는가?
// 참조자로는 표현할 수 없는 내용이 있다. -> 참조자가 null이 될 수 없다.

/*
*  (1) 포인터를 사용하는 이유.
*  (2) 참조자를 사용할 때의 주의 사항.
*  (3) 포인터와 참조자를 같이 사용해야 하는 이유.
*/

struct Monster
{
	string name;
	int HP{NULL};
	int ATK{NULL};
};

void MonsterHP(Monster* monster)
{
	monster->HP--;
	cout << monster->name << "의 체력이 1 깎였습니다." << endl;
}



int main()
{
	// 보충 설명
	std::ostrstream oss;
	oss << "2강 포인터와 참조자" << ends;

	printf("%s \n", oss.str());

	// (1) cpp 방식의 변수 선언.

	cout << "2-1 cpp 방식의 변수 선언" << endl;

	int a = 10;
	int a2(20.9999999999);	  // cpp 언어에서의 변수 초기화 방식.
	int a3{ 30 }; // cpp 언어에서의 변수 초기화 방식2.

	cout << a << endl;
	cout << a2 << endl;
	cout << a3 << endl;

	int* a_ptr = &a;
	int* a2_ptr{ nullptr };
	int* a3_ptr = &a3;

	cout << a_ptr << endl;
	cout << a2_ptr << endl;
	cout << a3_ptr << endl;

	cout << "2-2 nullptr 주소에 주소 생성하기 런타임 시점에. " << endl;

	a2_ptr = new int;
	cout << a2_ptr << endl;

	delete a2_ptr;

	// 스마트 포인터 -> 포인터 할당 후 메모리 누수가 안 일어나게 해주는 것

	cout << "2-3 SWAP 함수 예제. " << endl;

	int b1{};
	int b2{};
	cin >> b1;
	cin >> b2;

	cout << "b1의 값 : " << b1 << endl;
	cout << "b2의 값 : " << b2 << endl;

	MySwap(b1, b2);

	cout << "b1의 값 : " << b1 << endl;
	cout << "b2의 값 : " << b2 << endl;

	// 그래서 참조자가 뭔데 이게 가능한거임?

	cout << "2-4 참조자" << endl;

	// 선언 방법
	int& aRef = a; // aRef라는 별명이 a이름의 변수에 생성

	int* c_ptr{};
	c_ptr = new int;
	cout << c_ptr << endl;

	int*& c_ptrRef = c_ptr;
	delete c_ptr;
	// 주소를 생성할 때 복제를 할 수도 있고, 참조를 할 수도 있음.

	// 참조자 사용 시 주의사항
	// 1. 참조자는 선언과 동시에 초기화를 해줘야 한다.

	// int& myRef; << XX

	// 2. 함수에서 반환하는 값이 소멸되지 않도록 해야한다.
	int mainNum = 10;
	int& refValue = RefExample(mainNum);
	cout << refValue << endl;


	Monster m;
	m.name = "슬라임";
	m.HP = 5;
	m.ATK = 1;
	MonsterHP(&m);
	cout << m.HP << endl;

}