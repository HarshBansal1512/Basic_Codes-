
#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;
class Bank {
public:
	string name;
	long long accnumber;
	char type[10];
	long long amount = 0;
	long long tot = 0;

	void showdata()
	{
		cout << "Name:" << name << endl;
		cout << "Account No:" << accnumber << endl;
		cout << "Account type:" << type << endl;
		cout << "Balance:" << tot << endl;
	}

	void deposit()
	{
		cout << "\nEnter amount to be Deposited\n";
		cin >> amount;
        tot = tot + amount;
		cout << "\nTotal balance is: " << tot;
	}

	void withdrawl()
	{
		int a, avai_balance;
		cout << "Enter amount to withdraw\n";
		cin >> a;
		avai_balance = tot - a;
		cout << "Available Balance is" << avai_balance;
	}
};


int main()
{
	Bank b;
	cout<<"Enter name : ";
	getline(cin,b.name);
	cout<<"Enter Account number : ";
	cin>>b.accnumber;
	cout<<"Enter Account type : ";
	cin>>b.type;
	cout<<"Enter Balance : ";
	cin>>b.tot;

	int choice;

	while (1) {
		cout << "\n~~~~~~~~~~"
			<< "~~~~~~~~~~"
			<< "~~WELCOME~~~~~~~"
			<< "~~~~~~~~~~"
			<< "~~~\n\n";
		cout << "Enter Your Choice\n";
		cout << "\t1. Balance Enquiry\n";
		cout << "\t2. Deposit Money\n";
		cout << "\t3. Withdraw Money\n";
		cout << "\t4. Cancel\n";
		cin >> choice;


		switch (choice) {
		
		case 1:
			b.showdata();
			break;
		case 2:
			b.deposit();
			break;
		case 3:
			b.withdrawl();
			break;
		case 4:
			exit(1);
			break;
		default:
			cout << "\nInvalid choice\n";
		}
	}
}