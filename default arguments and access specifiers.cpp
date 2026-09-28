//illustrate the default arguments and access specifiers
#include<iostream>
using namespace std;
class Student
{
	private:
		int marks;
	public:
		void setMarks(int m=50)
		{
			marks=m;
		}
		void display()
		{
			cout<<"marks are:"<<marks<<endl;
		}
};
main()
{
	Student s1,s2;
	s1.setMarks();
	cout<<"Student s1 ";
	s1.display();
	s2.setMarks(90);
	cout<<"Student s2 ";
	s2.display();
	
}
