#include<iostream>
using namespace std;
int area(int a, int b)
{
	return (a * b) / 2;
}
float area(float a, float b)
{
	return (a * b) / 2;
}

main()
{
	cout<<"Area of Triangle = "<<area(10,20)<<endl;
	cout<<"Area of Triangle = "<<area(10.25f,20.75f);
}
