#include<iostream>
using namespace std;
int swap(int &a ,int &b)
{
	a=a+b;
	b=a-b;
	a=a-b;
}
int main(){
	int x,y;
	cout<<"Enter 2 numbers :"<<endl;
	cin>>x>>y;
	swap(x,y);
	cout<<"Number after Swapping "<< x << " "<< y;
	return 0;
}
