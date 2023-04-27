#include<iostream>
using namespace std;
class calculator
{
	public:
		calculator(int a, int b)
		{
			cout<<"a + b = "<<a+b<<endl;
			cout<<"a - b = "<<a-b<<endl;
			cout<<"a * b = "<<a*b<<endl;
			cout<<"a / b = "<<a/b<<endl;
		}
};
main()
{
	calculator c1 = calculator(20,10);
}
