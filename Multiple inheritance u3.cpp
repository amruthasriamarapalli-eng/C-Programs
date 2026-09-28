//Multiple inheritance//
#include<iostream>
using namespace std;
class Father
{
	public:
		string surname;
		Father(string Sr)
		{
			surname=Sr;
		}
};
class Mother{
	public:
		string bloodgrp;
		Mother(string bg)
		{
			bloodgrp=bg;
		}
};
class child:public Father,public Mother
{
	public:
		child(string Sr,string bg):Father(Sr),Mother(bg)
		{
			
		}
	void display()
	{
		cout<<"Surname : "<<surname<<endl;
		cout<<"Bloog group : "<<bloodgrp<<endl;
	}
};
int main()
{
	child c("Reddy","O+");
	c.display();
	return 0;
}
