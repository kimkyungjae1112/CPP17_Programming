#include <iostream>
using namespace std;

typedef long long ll;

class Test
{
public:
	Test(int x) : i(x)
	{
		cout << "Text(int x)" << endl;
	}
	explicit Test(double x, double y)
	{
		cout << "Test(double x, double y)" << endl;
	}
	Test(Test&& Other) noexcept : i(Other.i)
	{
		cout << "Test(Test&& Other)" << endl;
	}

	~Test()
	{
		cout << "¼Ò¸êÀÚ : " << i << endl;
	}

private:
	int i;
};

int main()
{
	Test T1 = 1;
	Test T2 = 2;
	Test T3 = 3;
	Test T7(std::move(T2));
}