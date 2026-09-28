//finding roots for quadratic equation//
#include<iostream>
#include<cmath>
using namespace std;
main()
{
	int a,b,c,d,r1,r2;
	cout<<"Enter a,b,c values:";
	cin>>a>>b>>c;
	d=b*b-4*a*c;
	r1=(-b+sqrt(d))/2*a;
	r2=(-b-sqrt(d))/2*a;
	if(d>0)
	{
		cout<<"Roots are real\n";
		cout<<"\nroot R1 is:"<<r1;
		cout<<"\nroot R2 is:"<<r2;		
	}
	else if(d==0)
	{
		cout<<"Roots are equal\n";
		r1=-b/(2*a);
		cout<<"\nroots are:"<<r1;
	}
	else
	{
		cout<<"Roots are complex/imaginary";
	}
}
