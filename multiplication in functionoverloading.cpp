#include<iostream>
using namespace std;
int multi(int a,int b)
{
	return a*b;
}

float multi(float a,float b)
{
	return a*b;
}

main()
{
	cout<<"multiplication = "<<multi(20,10)<<endl;
	cout<<"multiplication = "<<multi(26.25f,12.75f);
}
