//scope resolution operator using namespace
#include<iostream>
using namespace std;
int x=10;
namespace Demo
{
	int x=100;
}
main()
{
	int x=20;
	cout<<"global variable value is:"<<::x;
	cout<<"\nlocal variable value is:"<<x;
	cout<<"\n namespace variable value is:"<<Demo::x;
}
