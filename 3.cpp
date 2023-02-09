//Q3 - Write a C++ program to take length and breadth of a rectangle and print its area.
#include<iostream>
using namespace std;
int main(){
	int length,breadth,area;
	cout<<"enter length"<<endl;
	cin>>length;
	cout<<"enter breadth"<<endl;
	cin>>breadth;
	area=length*breadth;
	cout<<"area of rectangle is : "<<area<<endl;
	return 0;
}
