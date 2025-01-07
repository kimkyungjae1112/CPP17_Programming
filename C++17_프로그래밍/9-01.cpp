#include <iostream>
#include <vector>

int main()
{
	int N = 100;
	void* NV = &N; // 암시적 변환 작업을 수행

	// long 타입의 포인터가 정수 타입의 변수를 가리키도록 만든다.
	long* N01 = static_cast<long*>(NV);
	int* N02 = static_cast<int*>(&N);

	// 간접 참조를 사용하여 데이터를 출력시킨다.
	std::cout << "N = " << N << ", *N01 = " << *N01 <<
		" , *N02 = " << *N02 << '\n';

	std::vector<long> E = { 1,23,10 };
	void* VoidP = &E; // void 타입의 포인터를 선언하고 컨테이너 객체의 주소를 넣음

	// 컨테이너 객체가 관리하는 요소의 타입을 long 타입에서 int 타입으로 바꿈
	std::vector<int>* Vec = static_cast<std::vector<int>*>(VoidP);

	// 또 다른 컨테이너 객체에 데이터를 대입 복사
	std::vector<int> Vr = *Vec;
	for (int a : Vr)
	{
		std::cout << a << " "; 
	}
	std::cout << std::endl;
}