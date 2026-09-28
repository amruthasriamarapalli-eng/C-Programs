//multi-level inheritance
#include<iostream>
using namespace std;
class A
{
	int x;
	public:
		void showA(int a)
		{
			x=a;
			cout<<"Class A is : "<<x<<endl;
		}
};
class B:public A
{
	public:
		void showB()
		{
			cout<<"Class B extends class A"<<endl;
		}	
};
class C:public B
{
	public:
		void showC()
		{
			cout<<"Class C extends class B"<<endl;
		}
	
};
int main()
 {
 	C d;
 	d.showA(10);
 	d.showB();
 	d.showC();
 	
 	
 }
