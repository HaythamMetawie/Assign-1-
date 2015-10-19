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
	Bank_Account(string client_name, double balance);
	void account_information();
	double deposite(double d);
	double withdraw(double w);
};
void Bank_Account::Bank_Account(string client_name, double b = 10000.0)
{
	string client_name;
	cin >> client_name;
}
void Bank_Account::account_information()
{
	cout << "Client Name :" << client_name << endl;
	cout << "Your Blanace :" << balance << endl;
}
double Bank_Account::deposite(double d)
{
	double deposite = d;
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
		double withdraw = w;
		balance -= w;
		return balance;
	}
}
int main()
{
	cout << "Enter your Name :" << endl;
	Bank_Account X;
	cout << "Enter your deposite amount :" << endl;
	X.deposite(double d);
	cout << "Enter your withdrawal amount :" << endl;
	X.withdraw(double w);
	X.account_information();


}
