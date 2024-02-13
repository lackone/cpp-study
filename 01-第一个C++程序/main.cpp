#include <iostream>

int main()
{
	std::cout << "hello,world" << std::endl;

	int a = 070; //八进制
	int b = 0x44; //十六进制
	int c = 10; //十进制

	float d = 3.14f; //浮点数

	char e = 'A'; //字符

	const char* f = "ABC"; //字符串

	std::cout << e << std::endl;

	std::cout << f << std::endl;

	return 0;
}