//CPP Program to create class and objects
//class containse data members and member function 
//class is logical which groups data members and member functions
//class provides security to your data with access specifiers
// access specifiers like - public , private and protected

#include<iostream>  //Header file declaration

using namespace std;


class FirstClass	//declaration of class 
{
	//data members
	
	public:
			
		char name[10];
		
	//member functions
	
		void display()     // display() function is called inside class function  - it is declared inside class
		{
		
			cout<<"Enter your name";
			
			cin>>name;
			
			cout<<"Hello, "<<name;
			
		}//end of display() function
	
};   // end of class


int main()  //main function
{
	
	FirstClass ob;   // creation of objects   - class_name object_name;
	
	ob.display(); // calling of display() method using object of class FirstClass
	
	return 0; 	//returning int value- main function has return type as integer
	
}	// end of main function
