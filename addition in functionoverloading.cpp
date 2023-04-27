#include<iostream>
using namespace std;
int addition(int a,int b)
{
	return a+b;
}

float addition(float a,float b)
{
	return a+b;
}

main()
{
	cout<<"addition = "<<addition(20,10)<<endl;
	cout<<"addition = "<<addition(20.25f,10.15f);
}
