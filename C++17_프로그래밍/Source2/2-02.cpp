#include <iostream>
#include <cstring>

int main()
{
	char en[] = "Hello World";
	std::cout << "char " << en << std::endl;

	std::cout << "입력 문자 : ";
	std::cin >> en;
	for (int i = 0; en[i]; ++i)
	{
		std::cout << (char)en[i];
	}
	std::cout << std::endl;

	char wc1[] = "한글화 작업"; //OK
	std::cout << wc1 << std::endl; // 직접 콘솔 화면으로 출력도 가능하다.

	// 아래와 같이 한바이트 단위로 문자를 화면에 출력하더라도 유니코드가 출력된다.
	int i = 0;
	while (wc1[i])
	{
		std::cout << (char)wc1[i];
		++i;
	}
	std::cout << std::endl;

	const char* wc2 = "한글화 작업"; //OK
	std::cout << wc2 << ", 문자 크기 : " << strlen(wc2) << std::endl;
	return 0;
}