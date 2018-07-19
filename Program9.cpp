//CPP Program for writing functions in-side class
//functions which are declared in-side the class you have ton create object of the same class in main

#include<iostream>  //Header file declaration

using namespace std;


class FirstClass	//declaration of class 
{
	//data members
	
	public:
			
		char name[10];
		
	//member functions
	
		void getData()   // getData() function is called inside class function  - it is declared inside class
		{
			cout<<"Enter your name";
			
			cin>>name;
		}
		void displayData()     // displayData() function is called inside class function  - it is declared inside class
		{
			
			cout<<"Hello, "<<name;
			
		}//end of display() function
	
};   // end of class


int main()  //main function
{
	
	FirstClass ob;   // creation of objects   - class_name object_name;
	
	ob.getData();	// calling of getData() method using object of class FirstClass
	
	ob.displayData(); // calling of displayData() method using object of class FirstClass
	
	return 0; 	//returning int value- main function has return type as integer
	
}	// end of main function
