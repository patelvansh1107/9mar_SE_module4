#include<iostream>
using namespace std;
int subtraction(int a,int b)
{
	return a-b;
}

float subtraction(float a,float b)
{
	return a-b;
}

main()
{
	cout<<"subtraction = "<<subtraction(20,10)<<endl;
	cout<<"subtraction = "<<subtraction(20.25f,10.15f);
}
