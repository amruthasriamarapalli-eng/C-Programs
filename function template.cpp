//function templete

#include<iostream>
using namespace std;
template<class T>
T maximum(T a,T b)
{
	return (a>b)? a:b;
}
main(){
	cout<<"max value of integers is: " <<max(1,2)<<endl;
    cout<<"max value of float is: " <<max(1.5f,2.5f)<<endl;
    cout<<"max value of double is: " <<max(1.55,2.555)<<endl;
    cout<<"max value of char is: " <<max('a','u')<<endl;
}
