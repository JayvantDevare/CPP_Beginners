//CPP Program for writing functions out-side class
//functions which are declared in-side the class you have ton create object of the same class in main
//while writing functions body outside the class you have to define function(prototype of function) inside class
//writing function outside syntax - return_type class_name :: function_name()

#include<iostream>  //Header file declaration

using namespace std;


class FirstClass	//declaration of class 
{
	//data members
	
	public:
			
		char name[10];
		
	//member functions
	void getData();	// function definition inside class
	void displayData();
	
};   // end of class

//writting functions outside the class

void FirstClass :: getData()   // getData() function is called outside class function  - it is declared out-side class
		{
			cout<<"Enter your name";
			
			cin>>name;
		}
		
		
		
void FirstClass :: displayData()     // displayData() function is called outside class function  - it is declared outside class
		{
			
			cout<<"Hello, "<<name;
			
		}//end of display() function



int main()  //main function
{
	
	FirstClass ob;   // creation of objects   - class_name object_name;
	
	ob.getData();	// calling of getData() method using object of class FirstClass
	
	ob.displayData(); // calling of displayData() method using object of class FirstClass
	
	return 0; 	//returning int value- main function has return type as integer
	
}	// end of main function
