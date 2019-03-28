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
<<<<<<< HEAD
		void Subtraction
=======
		void Multiplication
>>>>>>> dev2
=======
		void Divide
>>>>>>> dev3
		{
			int a,b,c;
			cout<<"Enter First Number: "<<endl;
			cin>>a;
<<<<<<< HEAD
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
=======
			cout<<"Enter Second Number: "<<endl;
			cin>>b;
			c=a/b;
			cout<<"Division is: "<<c<<endl;
>>>>>>> dev3
		}

};
int main()
{
	Calculator c1;
	int ch;
	cout<<"Press 1 for Addition"<<endl;
<<<<<<< HEAD
<<<<<<< HEAD
	cout<<"Press 2 for Subtraction"<<endl;
=======
	cout<<"Press 3 for Multiplication"<<endl;
>>>>>>> dev2
=======
	cout<<"Press 4 for Division"<<endl;
>>>>>>> dev3
	cin>>ch;
	switch(ch)
	{
		case 1:
			c1.Addition();
			break;
<<<<<<< HEAD
<<<<<<< HEAD
		case 2:
			c1.Subtraction();
=======
		case 3:
			c1.Multiplication();
>>>>>>> dev2
=======
		case 4:
			c1.Divide();
>>>>>>> dev3
			break;
		default :
			cout<<"Wrong Choice Entered"<<endl;
	}
}

