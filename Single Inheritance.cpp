#include<iostream>
using namespace std;
class cricketer
{
	public:
		void run()
		{
			cout<<"Total Run = 1000"<<endl;
		}
};
class batsman : public cricketer
{
	public:
		void avg_run()
		{
			cout<<"Average Run = 100"<<endl;
		}
};
main()
{
	batsman obj;
	obj.run();
	obj.avg_run();
}

