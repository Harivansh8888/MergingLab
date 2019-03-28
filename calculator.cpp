#include<iostream>
using namespace std;
class Calculator
{
	public:
		void Addition
		{
			int a,b,c;
                        cout<<"Enter First Number: "<<endl;
                        cin>>a;
                        cout<<"Enter Second Number: "<<endl;
                        cin>>b;
                        c=a+b;
                        cout<<"Addition is: "<<c<<endl;
		}
		void Multiplication
		{
			int a,b,c;
			cout<<"Enter First Number: "<<endl;
			cin>>a;
			cout<<"Enter Second NUmber :"<<endl;
			cin>>b;
			c=a*b;
			cout<<"Multiplication is: "<<c<<end;
		}

};
int main()
{
	Calculator c1;
	int ch;
	cout<<"Press 1 for Addition"<<endl;
	cout<<"Press 3 for Multiplication"<<endl;
	cin>>ch;
	switch(ch)
	{
		case 1:
			c1.Addition();
			break;
		case 3:
			c1.Multiplication();
			break;
		default :
			cout<<"Wrong Choice Entered"<<endl;
	}
}

