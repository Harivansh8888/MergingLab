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
		void Divide
		{
			int a,b,c;
			cout<<"Enter First Number: "<<endl;
			cin>>a;
			cout<<"Enter Second Number: "<<endl;
			cin>>b;
			c=a/b;
			cout<<"Division is: "<<c<<endl;
		}

};
int main()
{
	Calculator c1;
	int ch;
	cout<<"Press 1 for Addition"<<endl;
	cout<<"Press 4 for Division"<<endl;
	cin>>ch;
	switch(ch)
	{
		case 1:
			c1.Addition();
			break;
		case 4:
			c1.Divide();
			break;
		default :
			cout<<"Wrong Choice Entered"<<endl;
	}
}

