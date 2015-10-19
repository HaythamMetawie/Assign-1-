#include <iostream>
#include <string>
using namespace std;
class Bank_Account
{
private:
	string client_name;
	string account_number;
	double balance;
public:
	Bank_Account();
	Bank_Account(string client_name, string account_number, double balance);
	string getname();
	string getnumber();
	double getbalance();
	void account_information();
	double deposite(double d);
	double withdraw(double w);
};
  Bank_Account::Bank_Account(string name, string number , double b = 10000.0)
{
	client_name = name;
	account_number = number;
	balance = b;
}
string Bank_Account::getname() { return client_name; }
string Bank_Account::getnumber(){ return account_number; }
double Bank_Account::getbalance(){ return balance; }

void Bank_Account::account_information()

	cout << "Client Name :" << client_name << endl;
	cout << "Account Number :" << account_number << endl;
	cout << "Your Blanace :" << balance << endl;
}
double Bank_Account::deposite(double d)
{
	balance += d;
	return balance;
}
double Bank_Account::withdraw(double w)
{
	if (balance < w)
	{
		cout << "Sorry the account balance does not cover the withdrawal!" << endl;
	}
	else
	{
		balance -= w;
		return balance;
	}
}
int main()
{
	Bank_Account X;
	X.account_information();
}
