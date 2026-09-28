//illustrate the use of Constructor and Destructor
#include<iostream>
using namespace std;
class Book
{
	int bid;
	string bname;
	public:
	Book()
	{
		cout<<"Default";
	}
	Book(int id,string name)
	{
		bid=id;
		bname=name;
		cout<<"book id : "<<bid<<"book name: "<<bname<<endl;
	}
	Book(Book &b)
	{
		bid=b.bid;
		bname=b.bname;
		cout<<"book id: "<<bid<<"book name: "<<bname<<endl;
	}
	~Book()
	{
		cout<<"It is a book destructor"<<endl;
	}
};
main()
{
	Book b;
	Book b1(111,"CPP");
	Book b2(b1);
}
