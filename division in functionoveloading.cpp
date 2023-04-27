#include<iostream>
using namespace std;
int div(int a,int b)
{
	return a/b;
}

float div(float a,float b)
{
	return a/b;
}

main()
{
	cout<<"division = "<<div(20,10)<<endl;
	cout<<"division = "<<div(35.25f,17.15f);
}
