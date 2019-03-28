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
		void Subtraction
		{
			int a,b,c;
			cout<<"Enter First Number: "<<endl;
			cin>>a;
			cout<<"Enter Second Number: "<<endl;
			cin>>b;
			c=a-b;
			cout<<"Subtraction is: "<<endl;
		}

};
int main()
{
	Calculator c1;
	int ch;
	cout<<"Press 1 for Addition"<<endl;
	cout<<"Press 2 for Subtraction"<<endl;
	cin>>ch;
	switch(ch)
	{
		case 1:
			c1.Addition();
			break;
		case 2:
			c1.Subtraction();
			break;
		default :
			cout<<"Wrong Choice Entered"<<endl;
	}
}

