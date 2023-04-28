#include<iostream>
using namespace std;
class student
{
	int value = 47;
	int amount = 25000;
	int balance = 87000;
	public:
		void getbalance()
		{
			cout<<"The value is : "<<value<<endl;
			cout<<"The amout is : "<<amount<<endl;
			cout<<"The balance is : "<<balance;
		}
};
main()
{
	student s1;
	s1.getbalance();
}
