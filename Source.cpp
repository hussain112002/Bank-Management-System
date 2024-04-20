#include <iostream>
#include<string>
using namespace std;


class Account
{
	int Accnum;
	float accbalance;
	transaction* t;
public:
	Account()
	{
		//default constructor
		Accnum;
		accbalance;
	}
	Account(int acc, float bal)
	{

		Accnum = acc;
		accbalance = bal;
	}

	void set_Accnum(int q)
	{
		Accnum = q;
	}
	int get_Accnum()
	{
		return Accnum;
	}
	void set_accbalance(float w)
	{
		accbalance = w;
	}
	float get_accbalance()
	{
		return accbalance;
	}
	void  addAccount() {
		int num;
		float balance;
		cout << "Enter account number: ";
		cin >> num;
		cout << "Enter account balance: ";
		cin >> balance;

		Accnum = num;
		accbalance = balance;
	}

	void searchAccount() {
		int num;
		cout << "Enter account number to search: ";
		cin >> num;

		if (Accnum == num) {
			cout << "Account found!" << endl;
			cout << "Account Number: " << Accnum << endl;
			cout << "Account Balance: " << accbalance << endl;
		}
		else {
			cout << "Account not found";
		}
	}

	void deleteAccount() {
		int num;
		cout << "Enter account number to delete: ";
		cin >> num;

		if (Accnum == num) {
			cout << "Account deleted!" << endl;
			Accnum = 0;
			accbalance = 0;
		}
		else {
			cout << "Account not found";
		}
	}

	void updateAccount() {

		int num;
		float balance;
		cout << "Enter account number to update: ";
		cin >> num;

		if (Accnum == num) {
			cout << "Enter new account balance: ";
			cin >> balance;
			accbalance = balance;
			cout << "Account updated!" << endl;
			cout << "Account Number: " << Accnum << endl;
			cout << "Account Balance: " << accbalance << endl;
		}
		else {
			cout << "Account not found";
		}
	}

	void displayAccount() {

		cout << "Account Number: " << Accnum << endl;
		cout << "Account Balance: " << accbalance << endl;
	}
	~Account()
	{
		cout << "desctructor called" << endl;
	}
};

class SavingAccount :public Account
{
	Account A;
	string Acctitle;
public:
	SavingAccount()
	{
		//default constructor
		Acctitle;
	}
	SavingAccount(int acc, float bal, string S) : A(acc, bal)
	{

		Acctitle = S;
	}

	void set_Acctitle(string e)
	{
		Acctitle = e;
	}
	string get_Acctitle()
	{
		return Acctitle;
	}
	~SavingAccount()
	{
		cout << "desctructor called" << endl;
	}
};
class CurrentAccount :public Account
{
	Account A;
	string Acctitle;
public:
	CurrentAccount()
	{
		//default constructor
		Acctitle;
	}
	CurrentAccount(int acc, float bal, string S) : A(acc, bal)
	{

		Acctitle = S;
	}

	void set_Acctitle(string e)
	{
		Acctitle = e;
	}
	string get_Acctitle()
	{
		return Acctitle;
	}
	~CurrentAccount()
	{
		cout << "desctructor called" << endl;
	}
};
class transaction
{
	int amount;
public:
	transaction()
	{
		// default constructor
		amount;
	}
	transaction(int amo)
	{

		amount = amo;
	}
	void set_amount(int a)
	{
		amount = a;
	}
	int get_amount()
	{
		return amount;
	}
	virtual void withdrawm() = 0;
	virtual void depositm() = 0;

	~transaction()
	{
		cout << "desctructor called" << endl;
	}
};
class withdraw :public transaction
{
	int amount;
public:
	withdraw()
	{
		amount;
	}
	withdraw(int a)
	{
		amount = a;
	}
	void set_amount(int m)
	{
		amount = m;
	}
	int get_amount()
	{
		return amount;
	}
	void withdrawm()
	{
		amount -= amount;
	}
	~withdraw()
	{
		cout << "desctructor called" << endl;
	}
};
class deposit :public transaction
{
	int amount;
public:
	deposit()
	{
		amount;
	}
	deposit(int a)
	{
		amount = a;
	}
	void set_amount(int m)
	{
		amount = m;
	}
	int get_amount()
	{
		return amount;
	}
	void deposit()
	{
		amount += amount;
	}
	~deposit()
	{
		cout << "desctructor called" << endl;
	}
};
class employee
{
	char* name;
	int age;
	char gender;
	string qualification;
public:
	employee()
	{
		name;
		age;
		gender;
		qualification;
	}
	employee(char* n, int a, char g, string q)
	{
		int size = 0;
		for (int i = 0; n[i] != '\0'; i++)
		{
			size++;
		}
		char* name = new char[size + 1];
		for (int j = 0; j < size; j++)
		{
			name[j] = n[j];
		}
		name[size] = '\0';
		age = a;
		gender = g;
		qualification = q;
	}
	void set_name(char* n)
	{
		int size = 0;
		for (int i = 0; n[i] != '\0'; i++)
		{
			size++;
		}
		char* name = new char[size + 1];
		for (int j = 0; j < size; j++)
		{
			name[j] = n[j];
		}
		name[size] = '\0';
	}
	char* get_name()
	{

		int size = 0;
		for (int i = 0; name[i] != '\0'; i++)
		{
			size++;
		}
		char* name = new char[size + 1];
		for (int j = 0; j < size; j++)
		{
			name[j] = name[j];
		}
		name[size] = '\0';
		return name;


	}
	void set_age(int a)
	{
		age = a;
	}
	int get_age()
	{
		return age;
	}
	void set_gender(char c)
	{
		gender = c;
	}
	char get_gender()
	{
		return gender;
	}
	void set_qualification(string b)
	{
		qualification = b;
	}
	string get_qualification()
	{
		return qualification;
	}
	~employee()
	{
		cout << "desctructor called" << endl;
	}
};
class manager :public employee
{
	string department;
public:
	manager(char* n, int a, char g, string q, string d) : employee(n, a, g, q)
	{
		department = d;
	}
	void set_department(string d)
	{
		department = d;
	}
	string get_department()
	{
		return department;
	}
	~manager()
	{
		cout << "manager destructor called" << endl;
	}
};
class cashier :public employee
{
	employee e;
	string username;
	string password;
public:
	cashier()
	{
		// default constructor 
	}
	cashier(char* n, int a, char g, string q, string uname, string p) :e(n, a, g, q)
	{

		username = uname;
		password = p;
	}
	~cashier()
	{
		cout << "desctructor called" << endl;
	}

};
class customer
{

	string fname;
	string lname;
	string mobno;
	string address;
	string email;
	int pin;
public:
	customer()
	{

		fname = "";
		lname = "";
		mobno = "";
		address = "";
		email = "";
	}
	customer(string a, string b, string c, string d, int q, string e)
	{
		setfname(a);
		setlname(b);
		setmobno(c);
		setpin(q);
		setaddress(d);
		setemail(e);

	}
	void setpin(int a)
	{
		pin = a;

	}
	int getpin()
	{
		return pin;
	}
	void setfname(string a)
	{
		fname = a;
	}
	void setlname(string a)
	{
		lname = a;
	}
	void  setmobno(string a)
	{
		mobno = a;
	}
	void  setaddress(string a)
	{
		address = a;
	}
	void setemail(string a)
	{
		email = a;

	}
	~customer()
	{
		cout << "desctructor called" << endl;
	}
};

class ATM
{
	int amount;
	string location;
public:
	ATM()
	{
		// default constructor
		location;
	}
	ATM(string l)
	{

		location = l;
	}
	void withdraw()
	{
		amount -= amount;
	}
	void deposit()
	{
		amount += amount;
	}
	void checkbalance()
	{
		cout << amount << endl;
	}
	void set_amount(int a)
	{
		amount = a;
	}
	int get_amount()
	{
		return amount;
	}
	void set_location(string g)
	{
		location = g;
	}
	string get_location()
	{
		return location;
	}
	~ATM()
	{
		cout << "desctructor called" << endl;
	}
};
class loan
{
	double amount;
	double interest;
	int years;
	double lamount;
	double mamount;
public:
	loan()
	{
		//default constructor called
	}
	loan(double amount, double interest, int years, double lamount, double mamount)
	{

		this->amount = amount;
		this->interest = interest;
		this->years = years;
		this->lamount = lamount;
		this->mamount = amount;
	}
	void set_amount(double m)
	{
		amount = m;
	}
	double get_amount()
	{
		return amount;
	}
	void set_interest(double i)
	{
		interest = i;
	}
	double  get_interest()
	{
		return interest;
	}
	void set_years(int y)
	{
		years = y;
	}
	int get_years()
	{
		return years;
	}
	void set_lamount(double y)
	{
		lamount = y;
	}
	double get_lamount()
	{
		return lamount;
	}
	void set_mamount(double m)
	{
		mamount = m;
	}
	double get_mamount()
	{
		return mamount;
	}
	double totalamount()
	{
		return (years * lamount) + (years * lamount * (interest / 100));
	}
	double monthlyloan()
	{
		return totalamount() / (years * 12);
	}
	double interestrate()
	{
		return totalamount() - (years * lamount);
	}
	~loan()
	{
		cout << "desctructor called" << endl;
	}
};


class Bank
{
	string name;
	int code;
	string address;
	int branchno;
	Account* a;
	ATM* a;
	loan l; 
	string city;
public:
	Bank()
	{
		// default constructor
		string name;
		int code;
		string address;
		int branchno;
		string city;
	}
	Bank(string name, int code, int branchno, string city, string address, bool flag, Account a)
	{

		this->name = name;
		this->code = code;
		this->branchno = branchno;
		this->address = address;
		this->city = city;
		if (flag == true)
		{
			this->a = new Account(a);
		}
		else
		{
			cout << "no person account exist in the branch " << endl;
		}
	}
	void set_city(string c)
	{
		city = c;
	}
	string get_city()
	{
		return city;
	}
	void set_Name(string n)
	{
		name = n;
	}
	string get_name()
	{
		return name;
	}
	void get_Code(int c)
	{
		code = c;
	}
	int getCode()
	{
		return code;
	}
	void set_address(string a)
	{
		address = a;
	}
	string get_address()
	{
		return address;
	}
	int get_branchno()
	{
		return branchno;
	}
	void set_branchno(int n)
	{
		branchno = n;
	}
	~Bank()
	{
		cout << "desctructor called" << endl;
	}
};

//int main()
//{
//	string bno, btype, fname, lname, no, email, addreess, account_type, login_no, tacc, mno, mnetwork, cname, card;
//	double balance, tamount, update_balance, deduct_balance, bamount, mamount, accnum;
//	int choice, pin, login_pin, check = 0, choice1, choice2, acc_check, j, Echeck = 0;
//	customer  u1;
//
//	cout << endl << "---------------------------BANK ACCOUNT--------------------" << endl;
//	while (1)
//	{
//
//		cout << endl << "--- Press 1 for registration 2 for login and 3 for exit ---  =";
//		cin >> choice;
//		if (choice == 1)
//		{
//			system("CLS");
//			cout << endl << "Enter your first name :";
//			cin >> fname;
//			u1.setfname(fname);
//			cout << endl << "Enter your last name :";
//			cin >> lname;
//			u1.setlname(lname);
//			cout << endl << "Enter your number :";
//			cin >> no;
//			u1.setmobno(no);
//			cout << "Enter your pin :";
//			cin >> pin;
//			u1.setpin(pin);
//			cout << endl << "Enter your email :";
//			while (1)
//			{
//				cin >> email;
//				for (int i = 0; i < email.length(); i++)
//				{
//					if (email[i] == '@')
//					{
//						Echeck = 1;
//						break;
//					}
//					else
//					{
//						Echeck = 0;
//					}
//				}
//				if (Echeck == 1)
//				{
//					break;
//				}
//				else
//				{
//					cout << "Enter the correct Email : ";
//					continue;
//				}
//
//			}
//			u1.setemail(email);
//			cin.ignore();
//			cout << endl << "Enter the address :";
//			getline(cin, addreess);
//			u1.setaddress(addreess);
//			cout << endl << "Enter the account tpye :";
//			cin >> account_type;
//			u1.setemail(account_type);
//			cout << endl << "Enter the account balance :";
//
//			while (1)
//			{
//				cin >> balance;
//				if (balance < 0)
//				{
//					cout << "ERROR! Balance can't Be less than zero !  Enter Again :";
//					continue;
//				}
//				else
//				{
//					break;
//				}
//			}
//			u1.setpin(balance);
//			a.push_back(u1);
//			system("CLS");
//			cout << "You have been successfully registered now login yourself";
//		}
//		else if (choice == 2)
//		{
//			system("CLS");
//			cout << "Enter your number :";
//			cin >> login_no;
//			cout << endl << "Enter a pin :";
//			cin >> login_pin;
//			for (int i = 0; i < a.size(); i++)
//			{
//				if (a.at(i).getmobno() == login_no && a.at(i).getpin() == login_pin)
//				{
//					cout << endl << "Successfully login !";
//					check = 1;
//					system("CLS");
//					while (1)
//					{
//						cout << endl << "------------BANK MANAGEMENT SYSTEM-----------";
//						cout << endl << "Press 1 for sending money or transaction :";
//						cout << endl << "Press 2 for paying bill :";
//						cout << endl << "Press 3 for mobile top up :";
//						cout << endl << "Press 4 for ordering card :";
//						cout << endl << "Press 5 for view your account :";
//						cout << endl << "Press 6 for deposit ";
//						cout << endl << "Press 7 for withdraw :";
//						cout << endl << "Press 8 for logout :";
//						while (1)
//						{
//							cin >> choice1;
//							if (choice1 >= 1 && choice1 <= 8)
//							{
//								break;
//							}
//							else
//							{
//								cout << "Wrong selection! Input again thanks :" << endl;
//								continue;
//
//							}
//						}
//						if (choice1 == 1)
//						{
//							system("CLS");
//							transaction t1;
//							cout << endl << "Enter the account number of the person :";
//							cin >> tacc;
//							t.set_amount(tacc);
//							cout << endl << "Enter the amount how much do you want to send :";
//							while (1)
//							{
//								cin >> tamount;
//								if (tamount < a.at(i).getbalance())
//								{
//									break;
//								}
//								else
//								{
//									cout << "Insufficnet balance ! Enter again =";
//									continue;
//
//								}
//							}
//
//							t1.set_amount(tamount);
//
//							system("CLS");
//							for (int i = 0; i < a.size(); i++)
//							{
//								if (tacc == a.at(i).getmobno())
//								{
//									j = i;
//									update_balance = a.at(i).getbalance() + tamount;
//									a.at(i).setBalance(update_balance);
//									acc_check = 1;
//									break;
//								}
//								else
//								{
//									acc_check = 0;
//								}
//							}
//							if (acc_check == 1)
//							{
//
//								cout << endl << "Amount has been transferred successfully";
//								cout << endl << "Reciever name is :" << a.at(j).gerfname();
//								cout << endl << "Amount is :" << tamount;
//								deduct_balance = a.at(i).getbalance() - tamount;
//								a.at(i).setBalance(deduct_balance);
//							}
//							else
//							{
//								cout << "USER not found ";
//							}
//
//							continue;
//						}
//						if (choice1 == 2)
//						{
//							system("CLS");
//							accnum a1;
//							cout << "Enter the bill no :";
//							cin >> bno;
//							a1.setbillno(bno);
//							cout << endl << "Enter the category of bill :";
//							cin >> btype;
//							a1.settype(btype);
//							cout << endl << "Enter the amount to pay :";
//							int billcheck = 0;
//							while (1)
//							{
//								cin >> bamount;
//								if (bamount < a.at(i).getbalance())
//								{
//									billcheck = 1;
//									break;
//								}
//								else
//								{
//									cout << "Insufficnet balance! You dont have enough amount in your account to pay the bill :";
//									billcheck = 0;
//									break;
//								}
//							}
//							if (billcheck == 1)
//							{
//								deduct_balance = a.at(i).getbalance() - bamount;
//								a.at(i).setBalance(deduct_balance);
//								a1.display();
//								continue;
//							}
//							else if (billcheck == 0)
//							{
//								continue;
//							}
//
//						}
//
//						if (choice1 == 3)
//						{
//							system("CLS");
//							card c1;
//							cout << endl << "Press 1 for master card fee=1000 || 2 for paypak card fee: 700  =";
//							cin >> choice2;
//							cin.ignore();
//							if (choice2 == 1)
//							{
//								system("CLS");
//								cout << endl << "Please enter the name which you want on card :";
//								getline(cin, cname);
//								deduct_balance = a.at(i).getbalance() - 1000;
//								a.at(i).setBalance(deduct_balance);
//								card c1(cname, 1000);
//								system("CLS");
//								c1.display();
//
//							}
//							else if (choice2 == 2)
//							{
//								system("CLS");
//								cout << endl << "Please enter the name which you want on card :";
//								getline(cin, cname);
//								deduct_balance = a.at(i).getbalance() - 700;
//								a.at(i).setBalance(deduct_balance);
//								card c1(cname, 700);
//								system("CLS");
//								c1.display();
//
//							}
//							continue;
//						}
//						if (choice1 == 5)
//						{
//							system("CLS");
//							cout << "First Name: " << a.at(i).gerfname();
//							cout << endl << "Last Name :" << a.at(i).getlname();
//							cout << endl << " Addreess :" << a.at(i).getaddress();
//							cout << endl << "Balance :" << a.at(i).getbalance();
//							cout << endl << " Account tpye is :" << a.at(i).getaccount_type();
//							continue;
//						}
//						if (choice1 == 6)
//						{
//							system("CLS");
//							tamount = 0;
//							cout << endl << "Enter the amount how much you want to deposit :";
//							cin >> tamount;
//							update_balance = a.at(i).getbalance() + tamount;
//							a.at(i).setBalance(update_balance);
//							cout << endl << "Amount has been deposited successfully ";
//						}
//						if (choice1 == 7)
//						{
//							system("CLS");
//							tamount = 0;
//							cout << "Enter the amount how much you want to withdraw :";
//							deduct_balance = a.at(i).getbalance() - tamount;
//							a.at(i).setBalance(deduct_balance);
//							cout << endl << "Amount has been withdraw Successfully :";
//						}
//						if (choice1 == 8)
//						{
//							break;
//						}
//					}
//
//
//				}
//			}
//			if (check == 0)
//			{
//				cout << "Wrong Credentials! Registered yourself first then login ";
//				continue;
//			}
//
//
//		}
//		else if (choice == 3)
//		{
//			break;
//		}
//	}
//	return 0;
//}