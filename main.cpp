#include <iostream>
#include <string>
#include <algorithm>


int main()
{
	std::string s1("hello");
	std::string s2;

	s2 = s1;		// 대입 연산자 오버로딩
	std::cout << s1[0] << std::endl;	// 첨자 연산자 오버로딩

	
	// int타입을 문자열로 치환
	int number{ 123 };
	std::string str{};

	str = std::to_string(number);	// cppreference에 검색해보니 <string>이 있어야 한다!
	std::cout << str << std::endl;
	// STL은 컴파일러마다 다 다르게 작동하므로
	// 오류가 발생 시, 검색을 이용하자.

	// 문자열을 int타입으로 치환
	number = std::stoi(str);
    // std::stoi 의 base = 진수 (진수도 바꿀 수 있다!)
	std::cout << number << std::endl;


	// 이터레이터
	std::string str{ "hello" };

	std::string::iterator itr = str.begin();	// iterator가 std::string 안에 들어있다

	std::cout << *itr << std::endl;
	std::cout << *(itr + 1) << std::endl;
	// 포인터처럼 제대로 작동한다.


	// 알고리즘				#include <algorithm> 필요
	std::find(str.begin(), str.end(), 'e');

}