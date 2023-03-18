#include <iostream>
#include <string>
#include <algorithm>


int main()
{
	std::string s1("hello");
	std::string s2;

	s2 = s1;		// ���� ������ �����ε�
	std::cout << s1[0] << std::endl;	// ÷�� ������ �����ε�

	
	// intŸ���� ���ڿ��� ġȯ
	int number{ 123 };
	std::string str{};

	str = std::to_string(number);	// cppreference�� �˻��غ��� <string>�� �־�� �Ѵ�!
	std::cout << str << std::endl;
	// STL�� �����Ϸ����� �� �ٸ��� �۵��ϹǷ�
	// ������ �߻� ��, �˻��� �̿�����.

	// ���ڿ��� intŸ������ ġȯ
	number = std::stoi(str);
    // std::stoi �� base = ���� (������ �ٲ� �� �ִ�!)
	std::cout << number << std::endl;


	// ���ͷ�����
	std::string str{ "hello" };

	std::string::iterator itr = str.begin();	// iterator�� std::string �ȿ� ����ִ�

	std::cout << *itr << std::endl;
	std::cout << *(itr + 1) << std::endl;
	// ������ó�� ����� �۵��Ѵ�.


	// �˰���				#include <algorithm> �ʿ�
	std::find(str.begin(), str.end(), 'e');

}