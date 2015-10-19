# Assign-1-
هيثم طارق محمد جبر مطاوع    
رقم الجلوس:33854

*	What is a class?                                                                                                        

A class is a C++ vehicle for translating an abstraction to a user-defined type. It combines data representation and methods for manipulating that data into one neat package.                                                                           

*	How does a class accomplish abstraction, encapsulation, and data hiding? 

Abstraction is accomplished by creating the user's defined data types using the class construct and defining the variables.	Encapsulation is accomplished by gathering the implementation details together and separating them from the abstraction as an example placing class function definitions in a separate file from the class declaration. 
Data hiding is accomplished by insulation of data from direct access for example putting data into the private section of the class.

*	What is the relation between an object and a class?

The object is an instance of a class. The class defines the behavior of the object.

*	In what way, aside from being function, are class function members different from class data members?

Data members usually go into the private section. The function members go into the public section.

* Define a class to represent a bank account.

class Bank_Account

{

private: 

     string client_name;

     string account_number;

public :

     double balance;

     Bank_Account(); // default constructor
 
     Bank_Account(string client_name, double balance);
     
     Account_Number();

     void account_information();

     double deposite(double d);

     double withdraw(double w);

}

* When are class constructors called? When are class destructors called?

Constructors is called to creat an object.It prepares the new object for use often accepting arguments that the constructor uses to set the required member variables.
When a program creat a temporary object to carry out certain operations, the program automatically calles the destructor  for the object when it has finished using it for examples: If you create a static storage class object its destructor is called automatically when the program terminates.If you create an automatic storage class object its destructor is called automatically when the program exists the block of code in which the object is defined.


* Provide a code for a constructor for the bank account class in Question 5.

  Bank_Account(); //default constractor
 
* What is a default constructor?What is the advantage of having one?

A default constractor is a constructor that is used to creat an object when you don't provide explicit initialization values. With a default constructor there is no need to explicitly any initialization routines.If you fail to provide any constructors, the compiler defines a default constructor for you.

* What are this and *this?

The this pointer is an implicit parameter to all member functions. Therefore, inside a member function, this may be used to refer to the invoking object.Applying the dereferencing operator * to a pointer yields the value to which the pointer points that means *this is the invoking object.
