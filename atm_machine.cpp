// C++ program to implement the ATM
// Management System
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

	// Public variables

	// Function to set the person's data
	//void setvalue()
	//{
	//	cout << "Enter name\n";
	//	cin.ignore();
//
//		// To use space in string
//		getline(cin, name);
//
//		cout << "Enter Account number\n";
//		cin >> accnumber;
//		cout << "Enter Account type\n";
//		cin >> type;
//		cout << "Enter Balance\n";
//		cin >> tot;
//	}

	// Function to display the required data
	void showdata()
	{
		cout << "Name:" << name << endl;
		cout << "Account No:" << accnumber << endl;
		cout << "Account type:" << type << endl;
		cout << "Balance:" << tot << endl;
	}

	// Function to deposit the amount in ATM
	void deposit()
	{
		cout << "\nEnter amount to be Deposited\n";
		cin >> amount;
        tot = tot + amount;
		cout << "\nTotal balance is: " << tot;
	}

	// Function to show the balance amount
	//void showbal()
	//{
	//	tot = tot + amount;
	//	cout << "\nTotal balance is: " << tot;
	//}

	// Function to withdraw the amount in ATM
	void withdrawl()
	{
		int a, avai_balance;
		cout << "Enter amount to withdraw\n";
		cin >> a;
		avai_balance = tot - a;
		cout << "Available Balance is" << avai_balance;
	}
};

// Driver Code
int main()
{
	// Object of class
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

	// Infinite while loop to choose
	// options everytime
	while (1) {
		cout << "\n~~~~~~~~~~"
			<< "~~~~~~~~~~"
			<< "~~WELCOME~~~~~~~"
			<< "~~~~~~~~~~"
			<< "~~~\n\n";
		cout << "Enter Your Choice\n";
		//cout << "\t1. Enter name, Account "
		//	<< "number, Account type\n";
		cout << "\t1. Balance Enquiry\n";
		cout << "\t2. Deposit Money\n";
	//	cout << "\t4. Show Total balance\n";
		cout << "\t3. Withdraw Money\n";
		cout << "\t4. Cancel\n";
		cin >> choice;

		// Choices to select from
		switch (choice) {
		//case 1:
		//	b.setvalue();
		//	break;
		case 1:
			b.showdata();
			break;
		case 2:
			b.deposit();
			break;
	//	case 4:
		//	b.showbal();
		//	break;
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