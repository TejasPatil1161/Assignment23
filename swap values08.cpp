//8. Write a C++ program to swap values of two int variables without using third variable
#include<iostream>
 using namespace std;
  int main()
  {
  	int a,b;
  	cout<<"Enter a and b";
  	cin>>a>>b;
  	a=a+b;
  	b=a-b;
  	a=a-b;
  	cout<<"After swap value is a and b "<<a <<b;
  }
