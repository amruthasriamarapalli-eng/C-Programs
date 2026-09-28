//Friend function
#include<iostream>
using namespace std;
class Demo
{
	private:
		int x=10;
	public:
		friend void display(Demo);
};
void display(Demo d)
{
	cout<<"value of x="<<d.x;
}
main()
{
	Demo obj;
	display(obj);
	return 0;
}
