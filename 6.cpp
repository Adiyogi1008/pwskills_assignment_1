//Q6 - Write a C++ program to swap two numbers with the help of a third variable.
#include<iostream>
using namespace std;
int main(){
	int a,b,temp;
	cout<<"enter a and b"<<endl;
	cin>>a>>b;
	cout<<"previous value of a and b is : "<<a<<"  "<<b<<endl;
	temp = a;
    a = b;
    b = temp;
    cout << "After swapping "<< a <<"  " << b << endl;
	
	
	
	
}
