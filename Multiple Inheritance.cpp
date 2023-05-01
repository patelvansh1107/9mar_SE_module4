#include<iostream>
using namespace std;
class person
{
	public:
		void name()
		{
			cout<<"Vansh"<endl;
		}
		void age()
		{
			cout<<"20"<<endl;
		}
};
class student:public person
{
	public:
		void percentage()
		{
			cout<<"Percentage = 80%"<<endl;
		}
};
class teacher : public student
{
	public:
		void salary()
		{
			cout<<"Salary = 25,000";
		}
};
main()
{
	teacher obj;
	obj.name();
	obj.age();
	obj.percentage();
	obj.age();
}
