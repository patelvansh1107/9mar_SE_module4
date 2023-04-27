#include<iostream>
using namespace std;
int area(int l, int b)
{
	return l * b;
}
float area(int l, int b)
{
	return l * b;
}

main()
{
	cout<<"Area of rectangal = "<<area(10,20)<<endl;
	cout<<"Area of rectangla = "<<area(10.25f,20.75f);
}
