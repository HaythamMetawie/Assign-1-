include <iostream>
#include <string>
using namespace std;
class Bank_Account
{
private:
	string client_name;
	string account_number;
public:
	double balance;
	Bank_Account(string client_name = "Haytham Tareq", string account_number = "33854", double balance = 10000.0);
	void account_information();
	double deposite(double d);
	double withdraw(double w);
};
void account_information()
{
	cout << client_name << endl << account_number << endl;
}
double Bank_Account::deposite(double d)
{
	double balance = balance + d;
	return balance;
}
double Bank_Account::withdraw(double w)
{
	double balance = balance - w;
	return balance;
}
int main()
{
	Bank_Account X;
	X.account_information();
	cout << X.deposite(1000.0) << endl << X.withdraw(500.0) << endl;
}
