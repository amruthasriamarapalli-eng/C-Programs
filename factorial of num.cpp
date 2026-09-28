//factorial of given num in recursion
#include<iostream>
using namespace std;
int fact(int);//fun dec
int fact(int num)//fun def
{
	//base condition
	if(num==0 || num==1)
	{
		return 1;
	}
	else
	{
		return num*fact(num-1);//recursive fun
	}
}
main()
{
	int n;
	cout<<"Enter n value : ";
	cin>>n;
	cout<<"Factorial of "<<n<<" is : "<<fact(n);//fun call
}

