//single inheritance//
#include<iostream>
using namespace std;
class parent{
	public:
	int pincode,phonenum;
	string city;
	parent(int pn,int phn,string c)
	{
		pincode=pn;
		phonenum=phn;
		city=c;
	}
};
class child:public parent
{
	public:
		child(int pn,int phn,string c):parent(pn,phn,c)
		{
			
		}
		void display()
		{
			cout<<"pincode: "<<pincode<<endl <<"Phone num: "<<phonenum<<endl<<"City :"<<city;
		}
};
int main()
{
	child a(534182,1234567891,"Vizag");
	a.display();
	return 0;
}
