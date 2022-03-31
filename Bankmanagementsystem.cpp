                        //BANK MANAGEMENT SYSTEM PROJECT USING C++
#include<iostream>
#include<bits/stdc++.h>
#include<stdio.h>
#include<conio.h>
using namespace std;
class bank
{
	char name[100],add[100],y;
	int balance;
	public:
           void open_account();
           void deposite_money();
           void withdraw_money();
           void display_account();
   	};
void bank :: open_account()
{
	cout<<"enter your full name:: ";
	cin.ignore();
	cin.getline(name,100);
	cout<<"enter your address:: ";
	cin.ignore();
	cin.getline(add,100);
	cout<<"what type of account you want to open saving (s) or current (c) ";
	cin>>y;
	cout<<"enter amount for deposit ::";
	cin>>balance;
	cout<<"Your account is created"<<endl;
	}
	void bank:: deposite_money()
	{
		int a;
		cout<<"enter how much you want to deposit ::";
		cin>>a;
		balance+=a;
		cout<<"total amount you deposit :: \t"<<balance;
	}
	void bank :: display_account()
	{
		cout<<"your full name :: \t"<<name<<endl;
		cout<<"your address :: \t "<<add<<endl;
		cout<<"Type of account that u open :: \t "<<y<<endl;
		cout<<"amount you deposit  :: \t "<<balance<<endl;
	}
	void bank :: withdraw_money()
	{
		float amount;
		cout<<"\n withdraw :: " ;
		cout<<"enter amount to withdraw :: ";
		cin>>amount;
		balance-=amount;
		cout<<"now total amount is left :: "<<balance;
		
	}
	int main()
{
	int ch,x;
	bank obj;
	do
	{
     cout<<"1) Open Account"<<endl;
     cout<<"2) deposit money "<<endl;
      cout<<"3) withdraw money "<<endl;
     cout<<"4) display account"<<endl;
      cout<<"5) Exit"<<endl;
      cout<<"Select the options from the above"<<endl;
      cin>>ch;
      switch(ch)
      {
      	case 1:cout<<"1) Open Account"<<endl;
      	 obj.open_account();
      	 break;
      	 case 2:cout<<"2) deposit money "<<endl;
      	 obj.deposite_money();
      	 break;
      	 case 3:cout<<"3)  withdraw money "<<endl;
      	 obj.withdraw_money();
      	 break;
      	 case 4:cout<<"4) display account "<<endl;
      	 obj.display_account();
      	 break;
      	 case 5:
      	 	    if(ch==5)
      	 	    {
				   exit(1);
			}
			default:
			   cout<<"this is not exist try again "<<endl;
		}
		cout <<"\n do you want to select next option then press :: y \n";
		cout<<"if you want to exit then press :: N ";
		x=getch();
		if(x=='n' || x=='N')
		exit(0);
	}
	while(x=='y' || x=='Y');
      	 	    

      
getch();
return 0;
}




