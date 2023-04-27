#include<iostream>
using namespace std;
class A
{
	private:
		int x,y;
	public:
	friend void setdata(); 
};
void setdata()
{
	A obj;
	obj.x=10;
	obj.y=20;
	
	cout<<"X= "<<obj.x<<endl;
	cout<<"Y= "<<obj.y<<endl;
	
	if(obj.x > obj.y)
	{
		cout<<"X is a max number";
	}
	else
	{
		cout<<"Y is a max number";
	}
}
main()
{
	setdata();
}
