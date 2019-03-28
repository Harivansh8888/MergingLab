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
<<<<<<< HEAD
		void Subtraction
=======
		void Multiplication
>>>>>>> dev2
		{
			int a,b,c;
			cout<<"Enter First Number: "<<endl;
			cin>>a;
<<<<<<< HEAD
			cout<<"Enter Second Number: "<<endl;
			cin>>b;
			c=a-b;
			cout<<"Subtraction is: "<<c<<endl;
=======
			cout<<"Enter Second NUmber :"<<endl;
			cin>>b;
			c=a*b;
			cout<<"Multiplication is: "<<c<<end;
>>>>>>> dev2
		}

};
int main()
{
	Calculator c1;
	int ch;
	cout<<"Press 1 for Addition"<<endl;
<<<<<<< HEAD
	cout<<"Press 2 for Subtraction"<<endl;
=======
	cout<<"Press 3 for Multiplication"<<endl;
>>>>>>> dev2
	cin>>ch;
	switch(ch)
	{
		case 1:
			c1.Addition();
			break;
<<<<<<< HEAD
		case 2:
			c1.Subtraction();
=======
		case 3:
			c1.Multiplication();
>>>>>>> dev2
			break;
		default :
			cout<<"Wrong Choice Entered"<<endl;
	}
}

