#include<iostream>
using namespace std;
class calculator
{
	int a,b;
	
	public:
		void getvalue()
		{
			cout<<"Enter the value of a : ";
			cin>>a;
			cout<<"Enter the value of b : ";
			cin>>b;
		}
		void displayData()
		{
			cout<<"a + b = "<<a+b<<endl;
			cout<<"a - b = "<<a-b<<endl;
			cout<<"a * b = "<<a*b<<endl;
			cout<<"a / b = "<<a/b<<endl;
		}
};
main()
{
	calculator c1;
	c1.getvalue();
	c1.displayData();
}
