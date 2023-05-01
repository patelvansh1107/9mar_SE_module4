#include<iostream>
using namespace std;
class student
{
	public:
		void roll_number()
		{
			cout<<"Roll Number = 8"<<endl;
		}
};
class test
{
	public:
		void mark()
		{
			cout<<"Scienc = 78"<<endl;
			cout<<"Maths = 82"<<endl;
		}
};
class result : public student, public test
{
	public:
		void total_mark()
		{
			cout<<"Total Mark = 160"<<endl;
		}
};
main()
{
	result obj;
	obj.roll_number();
	obj.mark();
	obj.total_mark();
}
